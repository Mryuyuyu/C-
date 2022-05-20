#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	bool operator==(const Person& p)
	{
		if (this->m_Age == p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	string m_Name;
	int m_Age;
};

class Greater20
{
public:
	bool operator()(int val)
	{
		return val > 20;
	}
};

class AgeGreater30
{
public:
	bool operator()(const Person& p)
	{
		return p.m_Age > 30;
	}
};

void test01()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(40);

	int num = count_if(v.begin(), v.end(), Greater20());
	cout << "����20��Ԫ�صĸ���Ϊ;" << num << endl;
}

void test02()
{
	vector<Person>v;

	Person p1("����", 35);
	Person p2("����", 35);
	Person p3("�ŷ�", 35);
	Person p4("����", 30);
	Person p5("�ܲ�", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person p("�����", 35);
	int num = count_if(v.begin(), v.end(), AgeGreater30());
	cout << "����30����˸�����" << num << endl;


}

int main()
{
	test02();

	system("pause");
	return 0;
}