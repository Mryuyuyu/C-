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
////����������Ե�����ͨ����ʹ��
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
////��������������Լ���״̬
//void test02()
//{
//	MyPrint myPrint;
//	myPrint("hello world!");
//	myPrint("hello world!");
//	myPrint("hello world!");
//	myPrint("hello world!");
//	myPrint("hello world!");
//
//	cout << "myPrint���ô���Ϊ��" << myPrint.count << endl;
//
//}
//
//void doPrint(MyPrint& mp, string test)
//{
//	mp(test);
//}
//
////�������������Ϊ��������
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