//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<stack>
//#include<unordered_map>
//#include<map>
//#include<set>
//#include<queue>
//#include<iomanip>
//#include<list>
//#include "test_practise.h"
//using namespace std;
//
////map的打印函数模板
//template<typename T1, typename T2>
//using MapIterator = typename map<T1, T2>::const_iterator;
//template<typename T1, typename T2>
//void printMap(const map<T1, T2>& themap) {
//	MapIterator<T1, T2> ite;
//
//	cout << endl << "map:" << endl;
//	for (ite = themap.begin(); ite != themap.end(); ++ite) {
//		cout << "key:" << ite->first << "\t" << "value:" << ite->second << endl;
//	}
//}
//
//
////unordered_map的打印函数模板
//template<typename T1, typename T2>
//using unordered_MapIterator = typename unordered_map<T1, T2>::const_iterator;
//template<typename T1, typename T2>
//void printunordered_Map(const unordered_map<T1, T2>& themap) {
//	unordered_MapIterator<T1, T2> ite;
//	cout<< "unordered_map:" << endl;
//	for (ite = themap.begin(); ite != themap.end(); ++ite) {
//		cout << "key:" << ite->first << "\t" << "value:" << ite->second << endl;
//	}
//}
//
//
////set通用打印函数
//template<typename T>
//using SetIterator = typename set<T>::const_iterator;
//template<typename T>
//void printSet(const set<T>& m)
//{
//	SetIterator <T> ite;
//	for (ite = m.begin(); ite != m.end(); ++ite)
//	{
//		cout << *ite << " ";
//	}
//	cout << endl;
//}
//
//
////vector通用打印函数
//template<typename T>
//using VectorIterator = typename vector<T>::const_iterator;
//template<typename T>
//void printVector(const vector<T>& v) {
//	VectorIterator <T> ite;
//	for (ite = v.begin(); ite != v.end(); ite++)
//	{
//		cout << *ite << " ";
//	}
//	cout << endl;
//}
//
////vector<vector<>>通用打印函数
//template<typename T>
//using Vector2 = typename vector<vector<T>>::const_iterator;
//template<typename T>
//void printVector2(const vector<vector<T>>& v) {
//	Vector2 <T> ite;
//	for (ite = v.begin(); ite != v.end(); ite++) {
//		printVector(*ite);
//	}
//	cout << endl;
//}
//
///*
//*unordered_map因为内部实现了哈希表，因此其查找速度非常的快
//*/
//
////unordered_map的测试函数
//void test_unordered_map()
//{
//	//unordered_map中key不能重复，重复的话默认打印第一个
//	//count()查询的是key而不是查询value   存在返回1，否则返回0
//	unordered_map<char, char> pairs = {
//	{'(', '1'},
//	{'(', ')'},
//	{'(', ')'},
//	{')', ')'},
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
//
//	printunordered_Map(pairs2);
//
//	//char ch = 'a';
//	//pairs[ch] = 'n';
//	//cout << pairs[ch] << endl;//pairs[ch]相当于添加了一个新的键值对，键为‘a’,值为空。
//	//printunordered_map(pairs);
//	//cout << pairs.count(')') << endl;//count()查询的是key而不是查询value   存在返回1，否则返回0
//}
//
////map的测试函数
//void test_map()
//{
//	//map就是以key来查找value而设计，根据key排序
//	 //底层结构是用二叉树实现
//	//map中的值将按照key值(这里按照括号的ASKII码值)的大小打印输出（系统自动）
//
//	map<char, char> pairs = {
//	{'(', '1'},
//	{'(', ')'},
//	{'(', ')'},
//	{')', ')'},
//	{'}', '{'},
//	{']', '['}
//	};
//	printMap(pairs);
//	//map中的值将按照key值的大小打印输出（系统自动）
//	map<int, int> pairs2 = {
//	{1,3},
//	{2,7},
//	{7,9},
//	{5,1}
//	};
//
//	printMap(pairs2);
//}
//
//
//void test_set()
//{
//	//所有元素都会在插入时自动被排序
//	 //set不允许容器中有重复的元素,有的会自动抹除
//	set<char> s2;
//	//插入
//	s2.insert('a');
//	s2.insert('a');
//	s2.insert('k');
//	s2.insert('c');
//	s2.insert('b');
//	printSet(s2);
//	set<int> s1;
//	//插入
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	printSet(s1);
//
//	//删除
//	s1.erase(s1.begin());
//	printSet(s1);
//
//	s1.erase(30);
//	printSet(s1);
//
//	//清空
//	//s1.erase(s1.begin(), s1.end());
//
//	s1.clear();
//	printSet(s1);
//}
//
///*
//*
//* **set和multiset区别**：
//* set不允许容器中有重复的元素
//* multiset允许容器中有重复的元素
//*
//* map和multimap**区别**：
//* map不允许容器中有重复key值元素
//* multimap允许容器中有重复key值元素
//*/
//
//
////vector的测试函数
//void test_vector()
//{
//	vector< vector<int> >  v;
//
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	vector<int> v4;
//	vector<int> v5;
//
//	for (int i = 0; i < 4; i++) {
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 5);
//		v4.push_back(i + 4);
//		v5.push_back(i + 3);
//	}
//
//	printVector(v1);
//	printVector(v2);
//	printVector(v3);
//	printVector(v4);
//	printVector(v5);
//	cout << endl;
//	//将容器元素插入到vector v中
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//	v.push_back(v5);
//
//	int m = v.size();//行数
//	int n = v[0].size();//列数
//	cout << "行数：" << m << endl;
//	cout << "列数：" << n << endl;
//	cout << "整个vector数组为：" << endl;
//	//for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++) {
//	//	string res = "";
//	//	//vector<vector<string>> dp = new vector<vector<string>>;
//	//	for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++) {
//	//		cout << *vit << " ";
//	//	}
//	//	cout << endl;
//	//}
//	printVector2(v);
//	cout << endl;
//	cout << "vector数组第二行数据为：" << endl;
//	for (auto s : v[1]) {
//		cout << s << " ";
//	}
//	cout << endl;
//	cout << endl;
//	cout << "vector数组第二列数据为：" << endl;
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i][1] << " ";
//	}
//	cout << endl;
//
//	cout << "v[2][3]的元素代表为：" << v[2][3] << endl;//第三行第四列的元素
//
//	//v[1] = { 3 };
//	//cout << endl;
//	//cout << "整个vector数组变为：" << endl;
//	//for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++) {
//
//	//	for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++) {
//	//		cout << *vit << " ";
//	//	}
//	//	cout << endl;
//	//}
//	//printVector2(v);
//	//cout << endl;
//	//cout << endl;
//
//}
//
//void test_vector2String()
//{
//	//vector<vector<string>> dp(5);
//	//dp[0] = { "" };
//	//dp[1] = { "()" };
//
//	vector<vector<string>> dp;
//	vector<string> d;
//	vector<string> Q;
//	vector<string> temp;
//
//	d.push_back(".");
//	Q.push_back("Q");
//	string ss = "Q";
//	temp.assign(5, ss);
//	int n = 10;
//	for (int i = 0; i < 5; i++)
//	{
//		dp.push_back(temp);
//	}
//	dp[2][3] += ss;
//	for (int i = 0; i != dp.size(); i++)
//	{
//		for (int j = 0; j != dp[0].size(); j++) {
//			cout << dp[i][j] << " ";
//		}
//		cout << endl;
//	}
//	printVector2(dp);
//
//}
//
////stack的测试函数
//void test_stack()
//{
//	stack<char> stk;
//	char s = 'a';
//	stk.push('s');
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
//void test01(vector<int> nums)
//{
//	for (auto i = 0; i < nums.size(); i++)
//	{
//		cout << nums[i] << endl;
//	}
//}
//
//void test_floatDouble()
//{
//	/*   在c++里，浮点数有三种输出模式：
//
//		(1) 默认模式     不用precision函数时 显示六位数字
//
//		(2) 定点模式     用fixed设置
//
//		(3) 科学模式    用scientific设置*/
//		//在模式(1)下，precision(n)中参数 精度n表示显示数字的总位数，
//		//注：若整数部分为0，则 总位数 只是小数部分的总位数。
//		//double a;
//		// a = 10.0 / 3;//这里的.0必须加
//		// double c = 3.14125;
//		//cout.precision(4);
//		//cout << a<<endl;
//		//cout << c << endl;
//
//		  //在模式(2)、(3)下，precision(n)中参数 精度n 表示 显示数字的 小数位数。
//	double a;
//	a = 10.0 / 3;//这里的.0必须加
//	double c = 3.141256;
//	double b = 3.2;
//
//	cout.precision(3);
//	cout.setf(ios::fixed);// #include<iomanip>
//	cout.setf(cout.showpoint);//强制显示浮点数小数点后的0,vs好像默认帮我显示了
//
//
//	cout << c << endl;
//	cout << a << endl;
//	cout << b;
//
//}
//
//string strout1(string s) {
//	string res;
//	reverse(s.begin(), s.end());
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] != ' ') {
//			res += s[i];
//		}
//		else
//			break;
//	}
//	reverse(res.begin(), res.end());
//	return res;
//}
//
//void test_char()
//{
//	//char s[] = "()";
//	//string str[] = {"",""};
//	//vector<string> str;
//	vector<char> ch;
//	char c = 'a';
//	char d = 'b';
//	//str.push_back(ss);
//	//d = c + ch(0);//执行不了，需要重写＋
//	ch.push_back('(');
//	ch.push_back(')');
//	printVector(ch);
//}
//
////假如是自定义的数据类型，重载默认的<符号，代替greater<int>
//struct cmp {
//	bool operator()(int a, int b) {
//		return a > b;		//从小到大排序
//		return a < b;		//从大到小排序
//	}
//};
//
//void test_priority_queue()
//{
//
//	//priority_queue<int> a;//默认为降序排序
//	//等价于 priority_queue<int,vector<int> , less<int> >q;
//	priority_queue<int, vector<int>, greater<int>> a;
//	//priority_queue<int, vector<int>, cmp> a;
//	a.push(5);
//	a.push(10);
//	a.push(15);
//	a.push(1);
//	while (!a.empty())
//	{
//		cout << a.top() << ' ';
//		a.pop();
//	}
//}
//
//void test_string()
//{
//	string str = "fdsfsfg";
//	str += "(";
//	cout << str.length();
//
//}
//
//void test_list()
//{
//	list<int> l = { 1,2,3,4,7 };
//	vector<int>v;
//	v.emplace(v.begin(), 1);
//	l.emplace(l.begin(), 9);
//	for (list<int>::iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	cout << v[0];
//	//cout << list[0];   //list不支持随机访问元素，即要么使用 front() 和 back() 成员函数，要么使用 list 容器迭代器。
//
//}
//
//void test_erase()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	printVector(v);
//	cout << *(v.erase(v.begin() + 3)) << endl;//erase()删除指定位置元素时，会返回下一个元素的位置
//	printVector(v);
//}
//int main()
//{
//
//	//int T;
//	//vector<int> res;
//
//	//cin >> T;
//
//	//while (T--) {
//	//	int a, b, c;
//	//	cin >> a >> b >> c;
//	//	res.push_back(a + b + c);
//	//}
//	//for (int n : res)
//	//{
//	//	cout << n << endl;
//	//}
//	//test_priority_queue();
//	//test_floatDouble()
//
//	//test_char();
//	//test_map();
//	test_unordered_map();
//	//test_set();
//	//test_vector();
//	//test_vector2String();
//	//test_string();
//	//test_list();
//	//test_erase();
//	system("pause");
//	return 0;
//}