#include<iostream>
using namespace std;

//1、同一个作用域下
//2、函数名称相同
//3、函数参数类型不同，或者个数不同，或者顺序不同
void func()
{
	cout << "func的调用" << endl;
}

void func(int a)
{
	cout << "func(int a)的调用" << endl;
}

void func(double a)
{
	cout << "func(double a)的调用" << endl;
}

int main()
{
	func(1);
	system("pause");
	return 0;
}