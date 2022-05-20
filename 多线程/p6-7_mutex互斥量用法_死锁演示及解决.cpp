//#include<iostream>
//#include <vector>
//#include <thread>
//#include <list>
//#include <mutex>
//using namespace std;
//
///*第四节创建多个线程、数据共享问题分析、案例代码录
//(1）创建和等待多个线程
//(2) 数据共享问题分析
//	(2.1）只读的数据
//	(2.2）有读有写
//	(2.3) 其他案例
//(3）共享数据的保护案例代码
//*/
//
//**********************************************************************
////第五节互斥量概念、用法、死锁演示及解决详解
///*(1)互斥量(mutex)的基本概念
//(2)互斥量的用法
//	(2.1)lock(），unlock()
//	(2.2)std::lock_guard类模板
//(3）死锁
//	(3.1)死锁演示
//	(3.2)死锁的一般解决方案
//	(3.3)std:lock()函数模板
//	(3.4)std::lock quard的std::adopt_lock参数
//*/
//
////vector<int> g_v = { 1,2,3 };
////
////void myprint(int inum)
////{
////	//cout << "myprint线程开始执行了，线程编号=" << inum << endl;
////
////	//cout << "myprint线程结束执行了，线程编号=" << inum << endl;
////	cout << "id为" << std::this_thread::get_id() << "的线程 打印g_v值" << g_v[0] << g_v[1] << g_v[2] << endl;
////	return;
////}
//
//class A {
//public:
//	//把收到的消息(玩家命令〉玉到一个队列的线程
//	void inMsgRecvQueue()
//	{
//		for (int i = 0; i < 100000; ++i)
//		{
//			cout << "inMsgRecvQueue()执行，插入一个元素" << i << endl;
//
//			{
//				//my_mutex1.lock();//实际工程中，两个锁头不一定挨着，中间会有代码
//				////.......//
//				//my_mutex2.lock();
//				//std::lock_guard<std::mutex> sbguard(my_mutex);
//
//				std::lock(my_mutex1, my_mutex2);//相当于每个互斥量都调用了.lock()
//				std::lock_guard<std::mutex> sbguard1(my_mutex1,std::adopt_lock);
//				std::lock_guard<std::mutex> sbguard2(my_mutex2,std::adopt_lock);
//				msgRecvQueue.push_back(i);
//				//my_mutex2.unlock();
//				//my_mutex1.unlock();
//			}//出大括号后lock_guard就可以析构
//			//其他处理代码;......
//		}
//	}
//
//	bool outMsgLULProc(int& command)
//	{
//		//std::lock_guard<std::mutex> sbguard(my_mutex1);//lock_guard构造函数里执行了mutex::lock()
//													////lock guard析构函数里执行了mutext::unlock();
//		//my_mutex1.lock();
//		//my_mutex2.lock();
//		std::lock(my_mutex1, my_mutex2);//相当于每个互斥量都调用了.lock(),单独写还是需要unlock（），若加上后面两行lock_guard则不在需要；
//		std::lock_guard<std::mutex> sbguard1(my_mutex1, std::adopt_lock);
//		std::lock_guard<std::mutex> sbguard2(my_mutex2, std::adopt_lock);
//		if (!msgRecvQueue.empty())
//		{
//			int command = msgRecvQueue.front();
//			msgRecvQueue.pop_front();
//			//my_mutex1.unlock();
//			//my_mutex2.unlock();//两个出口。两个unlock（）
//			return true;
//		}
//		//my_mutex1.unlock();
//		//my_mutex2.unlock();
//		return false;
//	}
//
//	//把数据从消息队列中取出的线程
//	void outMsgRecvQueue()
//	{
//		int command = 0;
//		for (int i = 0; i < 100000; ++i)
//		{
//			bool result = outMsgLULProc(command);
//			if (result == true)
//			{
//				cout << "outMsgRecvQueue()执行，取出一个元素" << command<<endl;
//			}
//			else
//			{
//				cout << "outMsgRecvQueue()执行，但目前消息队列为空" <<i<< command << endl;
//			}
//
//		}
//		cout << "end" << endl;
//	}
//
//
//private:
//	std::list<int> msgRecvQueue;//容器,专门用于代表玩家给咱们发送过来的命令。
//	std::mutex my_mutex1;//创建一个互斥量
//	std::mutex my_mutex2;
//};
//
//int main()
//{
//	////一、创建和等待多个线程
//	//vector<thread> mythreads;
//	////创建10个线程，线程入口函数统一使用 myprint。
//	////a):多个线程执行顺序是乱的，跟操作系统内部对线程的运行调度机制有关;
//	////b)主线程等待所有子线程运行结束，最后主线程结束，老师推荐这种join的写法，更容易写出稳定的程序;
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	mythreads.push_back(thread(myprint, i));//创建10个线程，同时这10个线程已经开始执行
//
//	//}
//	//for (auto iter = mythreads.begin(); iter != mythreads.end(); iter++)
//	//{
//	//	iter->join();//等待10个线程都返回//join是等待被创建线程的结束，并回收它的资源。
//	//}
//	//cout << "I love China!" << endl;
//
//	//二、数据共享问题分析
//	//(2.1）只读的数据，是安全稳定的，不需要特别什么处理手段。直接读就可以;
//	//(2.2)有读有写:2个线程写，8个线程读，如果代码没有特别的处理，那程序肯定崩溃;
//	//最简单的不崩溃处理，读的时候不能写，写的时候不能读。2个线程不能同时写，8个线程不能同时读;//写的动作分10小步;由于任务切换，导致各种诡异事情发生（最可能的诡异事情还是崩溃〉﹔
//
//	//共享数据的保护案例代码
//	//网络游戏服务器。两个自己创建的线程，一个线程收集玩家命令(用一个数字代表玩家发来的命令),并把命令数据写到一个队列中
//	//另外一个线程从队列中取出玩家发送来的命令，解析, 然后执行玩家重要的动作;
//	// vector，list, listl跟vector。 list : 频繁的按顺序插入和删除数据时效率高。vector容器随机的插入和删除数据效率高;
//
//	//三：死锁
//	//张三:站在北京等李四，不挪窝;//李四:站在深圳等张三，不挪窝;
//	// //c++中:
//	// 比如我有两把锁（死锁这个问题是由至少两个锁头也就是两个互斥量才能产生)﹔金锁(JinLock)，银锁(YinLock);
//	// //两个线程A, B
//	//(1)线程A执行的时候，这个线程先锁金锁，把金锁lock()成了，然后它去lock银锁。。o
//	// //出现了上下文切换
//	//2)线程B执行了，这个线程先锁银锁，因为银锁还没有被锁，所以银锁会lock()成功，线程B要去lock金锁
//	//此时此刻,死锁就产生了;
//	//(3)线程A因为拿不到银锁头，流程走不下去《所有后边代码有解锁金锁头的但是流程走不下去，所以金锁头解不开)//(4)线程3因为拿不到金锁头，流程走不下去（所有后边代码有解锁银锁头的但是流程走不下去，所以银锁头解不开)
//	//大家都晾在这里,你等我,我等你;
//
//
//	//准备用成员函数作为线程区数的方法来写线程;
//	A myobja;
//	std::thread myoutnMsgObj(&A::outMsgRecvQueue, &myobja); // 第二个参数是引用, 才能保证线程里用的是同一个对象
//	std::thread myInMsgObj(&A::inMsgRecvQueue, &myobja);
//	myInMsgObj.join();
//	myoutnMsgObj.join();
//
//	//保护共享数据﹐操作时，某个线程用代码把共享数据锁住、操作数据、解锁，;
//	//其他想操作共享数据的线程必须等待解锁，锁定住，操作，解锁。
//	// "互斥量”
//	// 一:互斥量（mutex）的基本概念
//	//互斥量是个类对象。理解成一把锁，多个线程尝试用lock()成员函数来加锁这把锁头，只有一个线程能锁定成功,成功的标志是lock()函数返回了
//	//如果没锁成功，那么流程卡在lock()这里不断的尝试去锁这把锁头;\
//	//互斥量使用要小心，保护数据不多也不少,少了，没达到保护效果，多了，影响效率
//
//	//互斥量的用法 头文件 mutex
//	//lock()、unlock()
//	//步骤:先lock(),操作共享数据,unlock()
//	//lock()和unlock()要成对使用，有lock()必然要有unlock()，每调用一次lock()，必然应该调用一次unlock();
//	// 不应该也不允许调用1次lock()却调用了2次unlock()，也不允许调用2次lock()却调用1次unlock()，这些非对称数里的调用都会导致代码不稳定或崩溃
//	
//	//了防止大家忘记unlock()，引入了一个叫std::lock_guard的类模板:你忘记unlock不要紧，我替你unlock()://学习过智能指针(unique_ptr<>):你忘记释放内存不要紧，我给你释放;―保姆﹔
//
//
//	//(3.1）死锁演示
//	//(3.2）死锁的一般解决方案
//	//只要保证这两个互斥军上锁的顺序一致就不会死锁。
//	// (3.3 std::lock()函数模板 : 用来处理多个互斥量的时候才出场
//	//能力:一次锁住两个或者两个以上的互斥量（至少两个，多了不限，1个不行
//	//它不存在这种因为再多个线程中因为锁的顺序问题导致死锁的风险问题;
//	//std::lock():如果互斥量中有一个没锁住，它就在那里等着,等所有互斥量都锁住，它才能往下走(返回)﹔
//	//要么两个互斥里都锁住，要么两个互斥里都没锁住。加果只锁了一个，另外一个没锁成功，则它立即把已经锁住的解锁。
//
//	//(3.4） std::lock _guard的std::adopt_lock参数
//	//std::adopt_lock是个结构体对象，起一个标记作用:作用就是表示这个互斥量已经lock()，
//	//不需要在std::lock_guard<std::mutex>构诰函数里再面对mutex对象进行lock()了
//	//总结: std::lock():一次锁定多个互斥量;谨慎使用（建议一个一个锁);
//
//
//
//
//
//	return 0;
//}