#include<iostream>
#include <vector>
#include <thread>
#include <list>
#include <mutex>
using namespace std;

/*������unique_lock���
(1)unique_lockȡ��lock_guard()
(2)unique_lock�ĵڶ�������
	(2.1) std::adopt_lock
	(2.2) std::try_to_lock
	(2.3) std::defer_lock
(3)unique_lock�ĳ�Ա����
	(3.1) lock()
	(3.2) unlock()
	(3.3) try_lock()
	(3.4) release()
(4) unique_lock����Ȩ�Ĵ���

*/


class A {
public:
	std::unique_lock<std::mutex> rtn_unique_lock()
	{
		std::unique_lock<std::mutex> tmpguard(my_mutex1);
		return tmpguard;//�Ӻ�������һ���ֲ���unique_lock�����ǿ��Եġ�����ʮ�Ľڽ�����ƶ����캯����
						//�������־ֲ�����tmpguard�ᵼ��ϵͳ������ʱunique_lock���󣬲�����unique_lock���ƶ����캯��

	}


	//���յ�����Ϣ(��������һ�����е��߳�
	void inMsgRecvQueue()
	{
		for (int i = 0; i < 100000; ++i)
		{
			cout << "inMsgRecvQueue()ִ�У�����һ��Ԫ��" << i << endl;

			{
				//std::lock_guard<std::mutex> sbguard1(my_mutex1, std::adopt_lock);
				//my_mutex1.lock();//Ҫ��lock������������unique_lock��adopt_lock����
				//std::unique_lock<std::mutex> sbguard1(my_mutex1, std::adopt_lock);

				//std::unique_lock<std::mutex> sbguard1(my_mutex1, std::try_to_lock);
				//std::unique_lock<std::mutex> sbguard1(my_mutex1, std::defer_lock);
				//std::unique_lock<std::mutex> sbguard1(my_mutex1);
				//std::unique_lock<std::mutex> sbguard2(my_mutex1);	//��������Ȩ�ǷǷ���
				//std::unique_lock<std::mutex> sbguard2(std::move(sbguard1));////�ƶ�����,�����൱��sbguard2��my_mutex1�󶨵�һ����
																			//����sbgurad1ָ���

				//std::mutex* ptx = sbguard1.release();////�������������Լ��������my_mutex1:

				//if (sbguard1.try_lock())
				//{
				//std::unique_lock<std::mutex> sbguard1(my_mutex1, std::defer_lock);//û�м�����mutex1
				//sbguard1.lock();//�����Լ�unlock()

				std::unique_lock<std::mutex> sbguard1 = rtn_unique_lock();

				////��Ϊ��һЩ�ǹ������Ҫ����
				//sbguard1.unlock();
				////����һЩ�������
				//sbguard1.lock();
					msgRecvQueue.push_back(i);
					//.....
					//�����������
				//}
				//else
				//{
				//	//û�õ���
				//	cout << "inMsgRecvQueue()ִ�У���û���õ�����ֻ�ܸɱ����" <<i<< endl;
				//}
					//ptx->unlock();



				//my_mutex2.unlock();
				//my_mutex1.unlock();
			}//�������ź�lock_guard�Ϳ�������
			//�����������;......
		}
	}

	bool outMsgLULProc(int& command)
	{
		//std::lock_guard<std::mutex> sbguard(my_mutex1);//lock_guard���캯����ִ����mutex::lock()
													////lock guard����������ִ����mutext::unlock();
		//my_mutex1.lock();
		//my_mutex2.lock();
		//std::lock(my_mutex1, my_mutex2);//�൱��ÿ����������������.lock(),����д������Ҫunlock�����������Ϻ�������lock_guard������Ҫ��
		//std::lock_guard<std::mutex> sbguard1(my_mutex1, std::adopt_lock);
		//std::lock_guard<std::mutex> sbguard2(my_mutex2, std::adopt_lock);

		std::unique_lock<std::mutex> sbguard1(my_mutex1);


		std::chrono::milliseconds dura(200);  //20000����
		std::this_thread::sleep_for(dura);


		if (!msgRecvQueue.empty())
		{
			int command = msgRecvQueue.front();
			msgRecvQueue.pop_front();
			//my_mutex1.unlock();
			//my_mutex2.unlock();//�������ڡ�����unlock����
			return true;
		}
		//my_mutex1.unlock();
		//my_mutex2.unlock();
		return false;
	}

	//�����ݴ���Ϣ������ȡ�����߳�
	void outMsgRecvQueue()
	{
		int command = 0;
		for (int i = 0; i < 100000; ++i)
		{
			bool result = outMsgLULProc(command);
			if (result == true)
			{
				cout << "outMsgRecvQueue()ִ�У�ȡ��һ��Ԫ��" << command << endl;
			}
			else
			{
				cout << "outMsgRecvQueue()ִ�У���Ŀǰ��Ϣ����Ϊ��" << i << command << endl;
			}

		}
		cout << "end" << endl;
	}


private:
	std::list<int> msgRecvQueue;//����,ר�����ڴ�����Ҹ����Ƿ��͹��������
	std::mutex my_mutex1;//����һ��������
	std::mutex my_mutex2;
};

int main()
{

	A myobja;
	std::thread myoutnMsgObj(&A::outMsgRecvQueue, &myobja); // �ڶ�������������, ���ܱ�֤�߳����õ���ͬһ������
	std::thread myInMsgObj(&A::inMsgRecvQueue, &myobja);
	myInMsgObj.join();
	myoutnMsgObj.join();

	//һ: unique_lockȡ��lock_guard
	//unique_lock�Ǹ���ģ�壬�����У�һ��lock_guard(�Ƽ�ʹ��); lock_guardȡ����mutex��lock()��unlock();
	//unique_lock��lock_guard���ܶ�;Ч���ϲ�һ�㣬�ڴ�ռ�ö�һ�㡣
	//��:unique_lock�ĵڶ�������
	//lock_guard���Դ��ڶ�������:
	// 
	//std::lock_guard<<std::mutex�� sbguardl(my_mutexl, std::adopt_lock); //adopt_lock�������;
	//(2.1) std::adopt_lock:��ʾ����������Ѿ���lock��(�����Ҫ�ѻ�������ǰlock��,����ᱨ�쳣)
	//std;:adopt_lock��ǵ�Ч�����ǡ�������÷�,�߳��Ѿ�ӵ���˻��������Ȩ(�Ѿ�lock()�ɹ��ˣ�
	//֪ͨlock_guard����Ҫ�ڹ��캯����lock�����������;
	//unique_lockҲ���Դ�std::adopt_lock��ǣ�������ͬ��
	//���ǲ�ϣ����unique_lock()�Ĺ��캯����lock���mutex��
	//�����adopt_lock��ǰ���ǣ�����Ҫ�Լ��Ȱ�mutex��lock��;


	//��2.2��std: :try_to_lock
	//���ǻ᳢����mutex��lock()ȥ�������mutex�������û�������ɹ�����Ҳ���������أ�����������������;
	//�����try_to_lock��ǰ�������Լ�������ȥlock��

	//(2.3��std ::defer_lock
	//�����defer_lock��ǰ�����㲻���Լ���lock������ᱨ�쳣��
	//defer_lock����˼���ǲ�û�и�mutex����:��ʼ����һ��û�м�����mutex
	//���ǽ���defer_lock�Ļ��⣬������һЩunique_lock����Ҫ��Ա����

	// ��:unique_lock�ĳ�Ա����
		//(3.1)lock()
		//3.2 unlock()
		//(3.3) try_lock()�����Ը�����������������ò��������򷵻�false,����õ�����������true�����������������;
		//(3.4) release()���������������mutex����ָ�룬���ͷ�����Ȩ;Ҳ����˵�����unique_lock��mutex�����й�ϵ��
		//�ϸ�����unlock()��release(������,��Ҫ������
		//���ԭ��mutex�����ڼ���״̬���������νӹܹ��������������(release���ص���ԭʼmutex��ָ��)
		//Ϊʲô��ʱ����Ҫunlock():��Ϊ��lock��ס�Ĵ����Խ�٣�ִ��Խ�죬������������Ч��Խ�ߡ�
		//����Ҳ����ͷ��ס�Ĵ�����ٳ�Ϊ�������ȩo����һ���ô�ϸ������;
		//a)��ס�Ĵ�����,������Ƚ�ϸ��ִ��Ч�ʸ�;
		//b)��ס�Ĵ����,���Ƚд�,��ִ��Ч�ʾ͵�;
		//Ҫѧ�ᾡ��ѡ��������ȵĴ�����б���������̫ϸ������©���������ݵı���������̫�֣�Ӱ��Ч�ʡ�
		//ѡ����ʵ�����,�Ǹ߼�����Ա��������ʵ��������;

	//��:unique_lock����Ȩ�Ĵ��� mutex,
	//std::unique_lock<std::mutex> sbguard1(my_mutex1);����ȨȨ����
	//sbguard1ӵ��my_mutex1������Ȩ
	//sbguard1���԰��Լ���mutex(my_mutexl)������Ȩת�Ƹ�������unique_lock����;
	//���ԣ�unique_lock�������mutex������Ȩ�����ڨD����ת�ƣ����ǲ��ܸ��ơ�5��6��7�ڽ�����ָ��unique_ptr;

	//a)std: :move
	//b)return std::unique_lock<std::mutex>




	return 0;
}