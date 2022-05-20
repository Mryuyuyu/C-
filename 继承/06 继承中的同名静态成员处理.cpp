//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//	static void func()
//	{
//		cout << "Base - static void func()" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Base - static void func(int a)" << endl;
//	}
//	static int m_A;
//};
//
//int Base::m_A = 100;
//
//class Son :public Base
//{
//public:
//	static void func()
//	{
//		cout << "Son - static void func()" << endl;
//	}
//	static int m_A;
//};
//
//int Son::m_A = 200;
//
//void test01()
//{
//	//通过对象访问数据
//	Son s;
//	cout << "通过对象访问：" << endl;
//	cout << "Son下 m_A = " << s.m_A << endl;
//	cout << "Base下 m_A = " << s.Base::m_A << endl;
//	//通过类名访问数据
//	cout << "通过类名访问：" << endl;
//	cout << "Son 下 m_A = " << Son::m_A << endl;
//	//第一个::代表通过类名方式访问 第二个::代表访问父类作用域下
//	cout << "Base下 m_A= " << Son::Base::m_A << endl;
//}
//
//void test02()
//{
//	//通过对象访问
//	cout << "通过对象访问： " << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//
//	cout << "通过类名访问： " << endl;
//	Son::func();
//	Son::Base::func();
//	//出现同名，子类会隐藏掉父类中所有同名成员函数，需要加作作用域访问
//	Son::Base::func(100);
//}
//
//int main()
//{
//	test02();
//
//	system("pause");
//	return 0;
//}
//
////总结：同名静态成员处理方式和非静态处理方式一样，
////只不过有两种访问的方式（通过对象和通过类名）