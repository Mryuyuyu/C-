//#include <iostream>
//#include <thread>
//#include <string>
//using namespace std;
//
//class A {
//public:
//	int m_i;
//	//����ת�����캯�����԰�һ��intת����һ����A����
//	A(int a) :m_i(a) { cout << "[A::A(int a)���캯��ִ��]" << this <<"threadid = "<<std::this_thread::get_id() << endl; }
//	A(const A& a) :m_i(a.m_i) { cout << "[A::A(const A)�������캯��ִ��]" << this<< "threadid = " << std::this_thread::get_id() << endl; }
//	~A() { cout << "[A::~A()��������ִ��]" << this<<"threadid = " << std::this_thread::get_id() << endl; }
//};
//
////void myprint(const int i, const  A &pmybuf)
////{
////	//cout << i << endl;////������Ϊ��i������mvar�����ã�ʵ����ֵ����,��ô������Ϊ���������߳�detach�����̣߳���ô���߳�����Ȼ��ֵ;
////					  //ָ����detach���߳�ʱ,���Ի�������
////
////	cout << &pmybuf << endl;
////	return;
////}
//
//void myprint2(const  A& pmybuf)
//{
//
//	cout << "���߳�myprint2�Ĳ�����ַ��" <<&pmybuf<<"threadid = "<<std::this_thread::get_id() <<endl;
//
//}
//
//int main()
//{
//	//int mvar = 1;
//	//int mysecondpar = 12;
//	////int& mvary = mvar;
//	////char mybuf[] = "this is a test!" ;
//	//thread mytobj(myprint, mvar, A(mysecondpar));//2.1������ϣ��mysecondparת��A���Ͷ��󴫵ݸ�myprint�ĵڶ�������
//												//�ڴ����̵߳�ͬʱ������ʱ����ķ������ݲ����ǿ��е�;
//
//	//Ҳ����˵,��ͬ���߳�,�����߳�id(����)��Ȼ�ǲ�ͬ;
//	//2.2�߳�id������c++��׼����ĺ�������ȡ��std::this_thread::get_id()����ȡ;
//
//	cout << "���߳�id��" << std::this_thread::get_id() << endl;
//	int mvar = 1;
//	std::thread mytobj(myprint2, A(mvar));
//
//	//mytobj.join();
//	mytobj.detach();
//	//cout << "end!" << endl;
//	return 0;
//}