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
//	set<int>::iterator pos = s1.find(10);
//
//	if (pos != s1.end())
//	{
//		cout << "�ҵ�Ԫ�أ�" << *pos << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�Ԫ��" << endl;
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
//	//����set����ͳ�ƽ��Ҫô��0Ҫô��1
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