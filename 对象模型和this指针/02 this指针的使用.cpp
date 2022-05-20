//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		this->age = age;
//	}
//
//	Person & PersonAddAge(Person& p)
//	{
//		this->age += p.age;
//		//this指向p2的指针，而 * this指向的就是p2这个对象本体
//		return *this;
//	}
//
//	int age;
//};
//
////1解决名称冲突I
//void test01()
//{
//	Person p1(18);
//	cout << "p1的年龄为：" << p1.age << endl;
//}
////2返回对象本身用*this
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//	p2.PersonAddAge(p1).PersonAddAge(p1);
//	cout << "p2的年龄为：" << p2.age << endl;
//}
//
//int main()
//{
//	test02();
//
//	system("pause");
//}