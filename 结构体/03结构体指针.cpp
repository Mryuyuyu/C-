#include<iostream>
using namespace std;
#include <string>

struct Student
{
	//����
	string name;
	//����
	int age;
	//����
	int score;
};

int main()
{
	Student s = { "����",18,100 };

	//ͨ��ָ��ָ��ṹ�����
	Student* p = &s;

	//ͨ��ָ����ʽṹ������е����ݣ������á�->��
	cout << "������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;
	system("pause");
}