#include<iostream>
#include <vector>
#include <thread>
#include <list>
#include <mutex>
using namespace std;

/*第六节unique_lock详解
(1)unique_lock取代lock_guard()
(2)unique_lock的第二个参数
	(2.1) std::adopt_lock
	(2.2) std::try_to_lock
	(2.3) std::defer_lock
(3)unique_lock的成员函数
	(3.1) lock()
	(3.2) unlock()
	(3.3) try_lock()
	(3.4) release()
(4) unique_lock所有权的传递

*/


class A {
public:
	std::unique_lock<std::mutex> rtn_unique_lock()
	{
		std::unique_lock<std::mutex> tmpguard(my_mutex1);
		return tmpguard;//从函数返回一个局部的unique_lock对象是可以的。三章十四节讲解过移动构造函数。
						//返回这种局部对象tmpguard会导致系统生成临时unique_lock对象，并调用unique_lock的移动构造函数

	}


	//把收到的消息(玩家命令〉玉到一个队列的线程
	void inMsgRecvQueue()
	{
		for (int i = 0; i < 100000; ++i)
		{
			cout << "inMsgRecvQueue()执行，插入一个元素" << i << endl;

			{
				//std::lock_guard<std::mutex> sbguard1(my_mutex1, std::adopt_lock);
				//my_mutex1.lock();//要先lock，后续才能用unique_lock的adopt_lock参数
				//std::unique_lock<std::mutex> sbguard1(my_mutex1, std::adopt_lock);

				//std::unique_lock<std::mutex> sbguard1(my_mutex1, std::try_to_lock);
				//std::unique_lock<std::mutex> sbguard1(my_mutex1, std::defer_lock);
				//std::unique_lock<std::mutex> sbguard1(my_mutex1);
				//std::unique_lock<std::mutex> sbguard2(my_mutex1);	//复制所有权是非法的
				//std::unique_lock<std::mutex> sbguard2(std::move(sbguard1));////移动语义,现在相当于sbguard2和my_mutex1绑定到一起了
																			//现在sbgurad1指向空

				//std::mutex* ptx = sbguard1.release();////现在你有责任自己解锁这个my_mutex1:

				//if (sbguard1.try_lock())
				//{
				//std::unique_lock<std::mutex> sbguard1(my_mutex1, std::defer_lock);//没有加锁的mutex1
				//sbguard1.lock();//不用自己unlock()

				std::unique_lock<std::mutex> sbguard1 = rtn_unique_lock();

				////因为有一些非共享代码要处理
				//sbguard1.unlock();
				////处理一些共享代码
				//sbguard1.lock();
					msgRecvQueue.push_back(i);
					//.....
					//其他处理代码
				//}
				//else
				//{
				//	//没拿到锁
				//	cout << "inMsgRecvQueue()执行，但没有拿到锁，只能干别的事" <<i<< endl;
				//}
					//ptx->unlock();



				//my_mutex2.unlock();
				//my_mutex1.unlock();
			}//出大括号后lock_guard就可以析构
			//其他处理代码;......
		}
	}

	bool outMsgLULProc(int& command)
	{
		//std::lock_guard<std::mutex> sbguard(my_mutex1);//lock_guard构造函数里执行了mutex::lock()
													////lock guard析构函数里执行了mutext::unlock();
		//my_mutex1.lock();
		//my_mutex2.lock();
		//std::lock(my_mutex1, my_mutex2);//相当于每个互斥量都调用了.lock(),单独写还是需要unlock（），若加上后面两行lock_guard则不在需要；
		//std::lock_guard<std::mutex> sbguard1(my_mutex1, std::adopt_lock);
		//std::lock_guard<std::mutex> sbguard2(my_mutex2, std::adopt_lock);

		std::unique_lock<std::mutex> sbguard1(my_mutex1);


		std::chrono::milliseconds dura(200);  //20000毫秒
		std::this_thread::sleep_for(dura);


		if (!msgRecvQueue.empty())
		{
			int command = msgRecvQueue.front();
			msgRecvQueue.pop_front();
			//my_mutex1.unlock();
			//my_mutex2.unlock();//两个出口。两个unlock（）
			return true;
		}
		//my_mutex1.unlock();
		//my_mutex2.unlock();
		return false;
	}

	//把数据从消息队列中取出的线程
	void outMsgRecvQueue()
	{
		int command = 0;
		for (int i = 0; i < 100000; ++i)
		{
			bool result = outMsgLULProc(command);
			if (result == true)
			{
				cout << "outMsgRecvQueue()执行，取出一个元素" << command << endl;
			}
			else
			{
				cout << "outMsgRecvQueue()执行，但目前消息队列为空" << i << command << endl;
			}

		}
		cout << "end" << endl;
	}


private:
	std::list<int> msgRecvQueue;//容器,专门用于代表玩家给咱们发送过来的命令。
	std::mutex my_mutex1;//创建一个互斥量
	std::mutex my_mutex2;
};

int main()
{

	A myobja;
	std::thread myoutnMsgObj(&A::outMsgRecvQueue, &myobja); // 第二个参数是引用, 才能保证线程里用的是同一个对象
	std::thread myInMsgObj(&A::inMsgRecvQueue, &myobja);
	myInMsgObj.join();
	myoutnMsgObj.join();

	//一: unique_lock取代lock_guard
	//unique_lock是个类模板，工作中，一般lock_guard(推荐使用); lock_guard取代了mutex的lock()和unlock();
	//unique_lock比lock_guard灵活很多;效率上差一点，内存占用多一点。
	//二:unique_lock的第二个参数
	//lock_guard可以带第二个参数:
	// 
	//std::lock_guard<<std::mutex〉 sbguardl(my_mutexl, std::adopt_lock); //adopt_lock标记作用;
	//(2.1) std::adopt_lock:表示这个互斥量已经被lock了(你必须要把互斥量提前lock了,否则会报异常)
	//std;:adopt_lock标记的效果就是“假设调用方,线程已经拥有了互斥的所有权(已经lock()成功了）
	//通知lock_guard不需要在构造函数中lock这个互斥量了;
	//unique_lock也可以带std::adopt_lock标记，含义相同。
	//就是不希望再unique_lock()的构造函数中lock这个mutex。
	//用这个adopt_lock的前提是，你需要自己先把mutex先lock上;


	//（2.2）std: :try_to_lock
	//我们会尝试用mutex的lock()去锁定这个mutex，但如果没有锁定成功，我也会立即返回，并不会阻塞在那里;
	//用这个try_to_lock的前提是你自己不能先去lock。

	//(2.3）std ::defer_lock
	//用这个defer_lock的前提是你不能自己先lock，否则会报异常。
	//defer_lock的意思就是并没有给mutex加锁:初始化了一个没有加锁的mutex
	//我们借着defer_lock的话题，来介绍一些unique_lock的重要成员函数

	// 三:unique_lock的成员函数
		//(3.1)lock()
		//3.2 unlock()
		//(3.3) try_lock()，尝试给互斥量加锁，如果拿不到锁，则返回false,如果拿到了锁，返回true，这个函数不阻塞的;
		//(3.4) release()，返回它所管理的mutex对象指针，并释放所有权;也就是说，这个unique_lock和mutex不再有关系。
		//严格区分unlock()和release(的区别,不要混淆。
		//如果原来mutex对象处于加锁状态，你有责任接管过来并负责解锁。(release返回的是原始mutex的指针)
		//为什么有时候需要unlock():因为你lock锁住的代码段越少，执行越快，整个程序运行效率越高。
		//有人也把锁头锁住的代码多少称为锁的粒度﹐粒度一般用粗细来描述;
		//a)锁住的代码少,这个粒度叫细。执行效率高;
		//b)锁住的代码多,粒度叫粗,那执行效率就低;
		//要学会尽量选择合适粒度的代码进行保护，粒度太细，可能漏掉共享数据的保护，粒度太粗，影响效率。
		//选择合适的粒度,是高级程序员的能力和实力的体现;

	//四:unique_lock所有权的传递 mutex,
	//std::unique_lock<std::mutex> sbguard1(my_mutex1);所有权权概念
	//sbguard1拥有my_mutex1的所有权
	//sbguard1可以把自己对mutex(my_mutexl)的所有权转移给其他的unique_lock对象;
	//所以，unique_lock对象这个mutex的所有权是属于―可以转移，但是不能复制。5章6，7节讲智能指针unique_ptr;

	//a)std: :move
	//b)return std::unique_lock<std::mutex>




	return 0;
}