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
//	//Ĭ�Ϲ���
//	set<int>s1;
//
//	s1.insert(10);
//	s1.insert(9);
//	s1.insert(2);
//	s1.insert(15);
//
//
//	printSet(s1);
//
//	if (s1.empty())
//	{
//		cout << "s1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "s1��Ϊ��" << endl;
//		cout << "s1�Ĵ�СΪ��" << s1.size() << endl;
//	}
//
//}
//
//void test02()
//{
//	//Ĭ�Ϲ���
//	set<int>s1;
//
//	s1.insert(10);
//	s1.insert(9);
//	s1.insert(2);
//	s1.insert(15);
//
//	set<int>s2;
//
//	s2.insert(10);
//	s2.insert(210);
//	s2.insert(20);
//	s2.insert(150);
//
//	cout << "����ǰ��" << endl;
//	printSet(s1);
//	printSet(s2);
//
//	cout << "������ " << endl;
//	s1.swap(s2);
//	printSet(s1);
//	printSet(s2);
//}
//
//int main()
//{
//	test02();
//
//	system("pause");
//	return 0;
//}