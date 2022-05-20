//#include<iostream>
//using namespace std;
//
////多态的案例2 制作饮品
//class AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil() = 0;
//	//冲泡
//	virtual void Brew() = 0;
//	//倒入杯中
//	virtual void PourInCup() = 0;
//	//加入辅料
//	virtual void PutSomething() = 0;
//
//	//制作饮品
//	void makeDrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
//class Coffee :public AbstractDrinking
//{
//public:
//	virtual void Boil()
//	{
//		cout << "煮开水!" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "冲泡咖啡!" << endl;
//	}
//	virtual void PourInCup()
//	{
//		cout << "将咖啡倒入杯中!" << endl;
//	}
//	virtual void PutSomething()
//	{
//		cout << "加入牛奶!" << endl;
//	}
//};
//
//class Tea :public AbstractDrinking
//{
//public:
//	virtual void Boil()
//	{
//		cout << "煮山泉水!" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "冲泡茶叶!" << endl;
//	}
//	virtual void PourInCup()
//	{
//		cout << "将茶水倒入杯中!" << endl;
//	}
//	virtual void PutSomething()
//	{
//		cout << "加入枸杞!" << endl;
//	}
//};
//
////业务函数
//void DoWork(AbstractDrinking* drink)
//{
//	drink->makeDrink();
//	delete drink;
//}
//
//void test01()
//{
//	cout << "--------------------------" << endl;
//	DoWork(new Coffee);
//	cout << "--------------------------" << endl;
//	DoWork(new Tea);
//	cout << "--------------------------" << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}