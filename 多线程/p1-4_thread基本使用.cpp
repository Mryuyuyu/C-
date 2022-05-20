//#include <iostream>
//#include <thread>
//using namespace std;
////void function_1(string &s) {
////	cout << (&s) << endl;
////	cout <<"内部参数为：" << s << endl;
////}
//
//void myprint()
//{
//	cout << "我的线程开始执行了" << endl;
//
//	//cout << "我的线程执行完了1" << endl;
//	//cout << "我的线程执行完了2" << endl;
//	//cout << "我的线程执行完了3" << endl;
//	//cout << "我的线程执行完了4" << endl;
//	//cout << "我的线程执行完了5" << endl;
//	//cout << "我的线程执行完了6" << endl;
//	//cout << "我的线程执行完了7" << endl;
//	//cout << "我的线程执行完了8" << endl;
//}
//
//class TA {
//public:
//	int& m_i;
//	TA(int &i):m_i(i){}
//	void operator()()//不能带参数
//	{
//		//cout << "我的线程operator（）开始执行" << endl;
//		////...
//		//cout << "我的线程operator（）开始执行" << endl;
//		cout << "m_i的值为：" << m_i << endl;
//	
//	}
//};
//
//int main() {
//	//string s = "test";
//	//thread t1(function_1,ref(s));
//	//thread th = thread(function_1, ref(s));
//	/*cout << (&s) << endl;
//	t1.join();*/
//	//t1.detach()	//detach()以后就不能在join了
//
//	//thread mytobj(myprint);
//	//mytobj.join();////主线程阻塞到这里等待myprint()执行完，当子线程执行完毕，这个join()就执行完毕，主线程就继续
//	//mytobj.detach();//—旦detachO)之后，与这个主线程关联的thread对象就会失去与这个主线程的关联，此时这个子线程就会驻留在后台运行
//					///这个子线程就相当于被c运行时刻接管，当这个子线程执行完成后，由运行时库负责清理该线程相关的资源(守护线程)
//					//detach之后不受管控，主线程执行完后便结束
//					//detach之后不能再join了
//	//joinable():判断是否可以成功使用join()或者detach()的;
//	//mytobj.join(); 
//	//if (mytobj.joinable())
//	//{
//	//	cout << "1:joinable() == true" << endl;
//	//}
//	//else
//	//{
//	//	cout<< "1:joinable() == false" << endl;
//	//}
//
//	//mytobj.detach();
//	//if (mytobj.joinable())
//	//{
//	//	cout << "2:joinable() == true" << endl;
//	//}
//	//else
//	//{
//	//	cout << "2:joinable() == false" << endl;
//	//}
//
//	//其他创建线程手法
//	//用类
//	////大家可能还有一个疑问:一旦调用了detach0)，那我主线程执行结束了，我这里用的这个ta这个对象还在吗?
//	// （对象不在//这个对象实际上是被复制到线程中去;执行完主线程后，ta会被销毂，但是所复制的TA对象依旧存在。
//	//所以，只要你这个TA类对象里没有引用，没有指针，那么久不会产生问题;
//
//	int myi = 6;
//	TA ta(myi);
//	//TA ta;
//	thread mytobj3(ta);
//	//mytobj3.join();
//	mytobj3.detach();
//	cout << "i love china!" << endl;
//
//	return 0;
//}