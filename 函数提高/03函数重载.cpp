#include<iostream>
using namespace std;

//1��ͬһ����������
//2������������ͬ
//3�������������Ͳ�ͬ�����߸�����ͬ������˳��ͬ
void func()
{
	cout << "func�ĵ���" << endl;
}

void func(int a)
{
	cout << "func(int a)�ĵ���" << endl;
}

void func(double a)
{
	cout << "func(double a)�ĵ���" << endl;
}

int main()
{
	func(1);
	system("pause");
	return 0;
}