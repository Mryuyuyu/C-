//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//	if (it == v.end())
//	{
//		cout << "没有找到" << endl;
//	}
//	else
//	{
//		cout << "找到大于5的数字为：" << *it << endl;
//	}
//}
//
//class Person
//{
//public:
//
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//
//	//重载 == 底层find知道如何对比person数据类型
//	bool operator==(const Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//};
//
//class Greater20
//{
//public:
//	bool operator()(Person &p)
//	{
//		return p.m_Age > 20;
//	}
//};
//
//void test02()
//{
//	vector<Person>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	//放入到容器中
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	//Person pp("bbb", 20);
//
//	vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());
//
//	if (it == v.end())
//	{
//		cout << "没有找到" << endl;
//	}
//	else
//	{
//		cout << "找到元素 姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
//	}
//
//}
//
//int main()
//{
//	test02();
//
//	system("pause");
//	return 0;
//}