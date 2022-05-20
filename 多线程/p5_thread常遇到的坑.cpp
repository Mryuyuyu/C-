//#include <iostream>
//#include <thread>
//#include <string>
//using namespace std;
//
//class A {
//public:
//	int m_i;
//	//类型转换构造函，可以把一个int转换成一个类A对象。
//	A(int a) :m_i(a) { cout << "[A::A(int a)构造函数执行]" << this <<"threadid = "<<std::this_thread::get_id() << endl; }
//	A(const A& a) :m_i(a.m_i) { cout << "[A::A(const A)拷贝构造函数执行]" << this<< "threadid = " << std::this_thread::get_id() << endl; }
//	~A() { cout << "[A::~A()析构函数执行]" << this<<"threadid = " << std::this_thread::get_id() << endl; }
//};
//
////void myprint(const int i, const  A &pmybuf)
////{
////	//cout << i << endl;////分析认为，i并不是mvar的引用，实际是值传递,那么我们认为，即便主线程detach了子线程，那么子线程中依然有值;
////					  //指针在detach子线程时,绝对会有问题
////
////	cout << &pmybuf << endl;
////	return;
////}
//
//void myprint2(const  A& pmybuf)
//{
//
//	cout << "子线程myprint2的参数地址是" <<&pmybuf<<"threadid = "<<std::this_thread::get_id() <<endl;
//
//}
//
//int main()
//{
//	//int mvar = 1;
//	//int mysecondpar = 12;
//	////int& mvary = mvar;
//	////char mybuf[] = "this is a test!" ;
//	//thread mytobj(myprint, mvar, A(mysecondpar));//2.1我们是希望mysecondpar转成A类型对象传递给myprint的第二个参数
//												//在创建线程的同时构造临时对象的方法传递参数是可行的;
//
//	//也就是说,不同的线程,它的线程id(数字)必然是不同;
//	//2.2线程id可以用c++标准库里的函数来获取。std::this_thread::get_id()来获取;
//
//	cout << "主线程id是" << std::this_thread::get_id() << endl;
//	int mvar = 1;
//	std::thread mytobj(myprint2, A(mvar));
//
//	//mytobj.join();
//	mytobj.detach();
//	//cout << "end!" << endl;
//	return 0;
//}