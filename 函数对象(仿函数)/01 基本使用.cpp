//#include<iostream>
//using namespace std;
//
//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
//
////函数对象可以当作普通函数使用
//void test01()
//{
//	MyAdd myAdd;
//	cout << myAdd(10, 10) << endl;
//}
//
//class MyPrint
//{
//public:
//	MyPrint()
//	{
//		this->count = 0;
//	}
//	void operator()(string test)
//	{
//		cout << test << endl;
//		this->count++;
//	}
//
//
//	int count;
//};
//
////函数对象可以有自己的状态
//void test02()
//{
//	MyPrint myPrint;
//	myPrint("hello world!");
//	myPrint("hello world!");
//	myPrint("hello world!");
//	myPrint("hello world!");
//	myPrint("hello world!");
//
//	cout << "myPrint调用次数为：" << myPrint.count << endl;
//
//}
//
//void doPrint(MyPrint& mp, string test)
//{
//	mp(test);
//}
//
////函数对象可以作为参数传递
//void test03()
//{
//	MyPrint myPrint;
//	doPrint(myPrint, "Hello c++");
//}
//int main()
//{
//	test03();
//	system("pause");
//	return 0;
//}