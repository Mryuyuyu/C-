//#include<iostream>
//using namespace std;
//
//class Animal
//{
//public:
//
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
////猫类
//class Cat :public Animal
//{
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//
////狗类
//class Dog :public Animal
//{
//	void speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//};
//
//void doSpeak(Animal &animal)
//{
//	animal.speak();
//}
//
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//
//	Dog dog;
//	doSpeak(dog);
//}
//
//void test02()
//{
//	cout << "sizeof Animal=" << sizeof(Animal) << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}