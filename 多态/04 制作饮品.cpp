//#include<iostream>
//using namespace std;
//
////��̬�İ���2 ������Ʒ
//class AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil() = 0;
//	//����
//	virtual void Brew() = 0;
//	//���뱭��
//	virtual void PourInCup() = 0;
//	//���븨��
//	virtual void PutSomething() = 0;
//
//	//������Ʒ
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
//		cout << "��ˮ!" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "���ݿ���!" << endl;
//	}
//	virtual void PourInCup()
//	{
//		cout << "�����ȵ��뱭��!" << endl;
//	}
//	virtual void PutSomething()
//	{
//		cout << "����ţ��!" << endl;
//	}
//};
//
//class Tea :public AbstractDrinking
//{
//public:
//	virtual void Boil()
//	{
//		cout << "��ɽȪˮ!" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "���ݲ�Ҷ!" << endl;
//	}
//	virtual void PourInCup()
//	{
//		cout << "����ˮ���뱭��!" << endl;
//	}
//	virtual void PutSomething()
//	{
//		cout << "�������!" << endl;
//	}
//};
//
////ҵ����
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