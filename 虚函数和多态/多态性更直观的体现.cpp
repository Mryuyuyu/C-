#include <iostream>
using namespace std;

class Person {
public:
	virtual void print() {
		cout << "Person::print()_this is a person" << endl;
	}
};

class Student :public Person {
public:
	void print() {
		cout << "Student::print()_this is a student" << endl;
	}
};

class Professor :public Person {
public:
	void print() {
		cout << "Professor::print()_this ia a Professor" << endl;
	}
};

class Graduate :public Student {
public:
	void print() {
		cout << "Graduate::print()_this ia a Graduate" << endl;
	}
};

//都是动态多态
//*静态多态:   函数重载 和 运算符重载属于静态多态，复用函数名
//* 动态多态 : 派生类和虚函数实现运行时多态
int main() {
	//多态性
	//const int N = 3;
	//Person* pPerson[N];
	//pPerson[0] = new Student();
	//pPerson[1] = new Professor();
	//pPerson[2] = new Graduate();
	//for (int i = 0; i < N; i++) {
	//	pPerson[i]->print();
	//}

	//动态绑定
	Person* p;
	int a;
	cin >> a;
	if (a > 10)
		p = new Student();
	else
		p = new Professor();

	/*
		加括号调用没有参数的构造函数，不加括号调用默认构造函数或唯一的构造函数，看需求
		C++在new时的初始化的规律可能为：
		对于有构造函数的类，不论有没有括号，都用构造函数进行初始化；
		如果没有构造函数，则不加括号的new只分配内存空间，不进行内存的初始化，而加了括号的new会在分配内存的同时初始化为0。

		int *a = new int[100];
		int *b = new int[100]();
		结果:
		a中数据随机，因为其未经过初始化；
		b中经过了初始化，数据为0。
	*/

	p->print();
	return 0;
}
