#include<iostream>
using namespace std;
#include <string>

struct Student
{
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
};

int main()
{
	Student s = { "张三",18,100 };

	//通过指针指向结构体变量
	Student* p = &s;

	//通过指针访问结构体变量中的数据，需利用‘->’
	cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
	system("pause");
}