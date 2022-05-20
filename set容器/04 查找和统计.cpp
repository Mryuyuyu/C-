//#include<iostream>
//#include<set>
//using namespace std;
//
//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//默认构造
//	set<int>s1;
//
//	s1.insert(10);
//	s1.insert(9);
//	s1.insert(2);
//	s1.insert(15);
//
//
//	set<int>::iterator pos = s1.find(10);
//
//	if (pos != s1.end())
//	{
//		cout << "找到元素：" << *pos << endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//
//}
//void test02()
//{
//	set<int>s1;
//
//	s1.insert(10);
//	s1.insert(15);
//	s1.insert(2);
//	s1.insert(15);
//
//	int num = s1.count(15);
//	//对于set而言统计结果要么是0要么是1
//	cout << "num = " << num << endl;
//}
//
//int main()
//{
//	test02();
//
//	system("pause");
//	return 0;
//}