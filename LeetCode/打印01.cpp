//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<stack>
//#include <unordered_map>
//#include <map>
//using namespace std;
//
//
//
//void printunordered_map(unordered_map<char, char>& m)
//{
//	for (unordered_map<char, char>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key =" << it->first << " value =" << it->second << endl;
//	}
//	cout << endl;
//}
//
//void printunordered_map(unordered_map<int, int>& m)
//{
//	for (unordered_map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key =" << it->first << " value =" << it->second << endl;
//	}
//	cout << endl;
//}
//
//void printmap(map<char, char>& m)
//{
//	for (map<char, char>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key =" << it->first << " value =" << it->second << endl;
//	}
//	cout << endl;
//}
//
//void printmap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key =" << it->first << " value =" << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test_unordered_map()
//{
//	//unordered_map��key�����ظ����ظ��Ļ�Ĭ�ϴ�ӡ��һ��
//	unordered_map<char, char> pairs = {
//	{'(', '1'},
//	{'(', ')'},
//	{'(', ')'},
//	//{')', ')'},
//	{']', '['},
//	{'}', '{'}
//	};
//
//	unordered_map<int, int> pairs2 = {
//		{1,3},
//		{2,7},
//		{7,9},
//		{5,1}
//	};
//	printunordered_map(pairs2);
//
//	char ch = 'a';
//	//pairs[ch] = 'n';
//	//cout << pairs[ch] << endl;//pairs[ch]�൱�������һ���µļ�ֵ�ԣ���Ϊ��a��,ֵΪ�ա�
//	//printunordered_map(pairs);
//	//cout << pairs.count(')') << endl;//��ѯ����key�����ǲ�ѯvalue   ���ڷ���1�����򷵻�0
//}
//
//void test_map()
//{
//	map<char, char> pairs = {
//	{'(', '1'},
//	{'(', ')'},
//	{'(', ')'},
//	//{')', ')'},
//	{']', '['},
//	{'}', '{'}
//	};
//
//	//map�е�ֵ������keyֵ�Ĵ�С��ӡ�����ϵͳ�Զ���
//	map<int, int> pairs2 = {
//	{1,3},
//	{2,7},
//	{7,9},
//	{5,1}
//	};
//	//Traversal(pairs2);
//
//	printmap(pairs);
//}
//
//void test01()
//{
//
//	vector<int> v;
//	for (int i = 0; i < 5; i++)
//	{
//		v.push_back(i);
//	}
//	cout << v[0] << endl;
//}
//
//void test_stack()
//{
//	stack<char> stk;
//	//char s = 'a';
//	//stk.push('s');
//	if (stk.empty())
//	{
//		cout << "��ֵΪ1" << endl;
//	}
//	else
//	{
//		cout << "��ֵΪ0" << endl;
//	}
//}
//
//void test04()
//{
//	int n[5] = { 1,2,3,4,5 };
//	for (int i : n)
//	{
//		cout << i << endl;
//	}
//}
//
//
//
//
//int main()
//{
//	//test_map();
//	test_unordered_map();
//	system("pause");
//	return 0;
//}