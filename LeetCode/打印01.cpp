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
//	//unordered_map中key不能重复，重复的话默认打印第一个
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
//	//cout << pairs[ch] << endl;//pairs[ch]相当于添加了一个新的键值对，键为‘a’,值为空。
//	//printunordered_map(pairs);
//	//cout << pairs.count(')') << endl;//查询的是key而不是查询value   存在返回1，否则返回0
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
//	//map中的值将按照key值的大小打印输出（系统自动）
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
//		cout << "空值为1" << endl;
//	}
//	else
//	{
//		cout << "空值为0" << endl;
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