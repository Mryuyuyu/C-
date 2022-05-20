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
////map�Ĵ�ӡ����ģ��
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
////unordered_map�Ĵ�ӡ����ģ��
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
////setͨ�ô�ӡ����
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
////vectorͨ�ô�ӡ����
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
////vector<vector<>>ͨ�ô�ӡ����
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
//*unordered_map��Ϊ�ڲ�ʵ���˹�ϣ�����������ٶȷǳ��Ŀ�
//*/
//
////unordered_map�Ĳ��Ժ���
//void test_unordered_map()
//{
//	//unordered_map��key�����ظ����ظ��Ļ�Ĭ�ϴ�ӡ��һ��
//	//count()��ѯ����key�����ǲ�ѯvalue   ���ڷ���1�����򷵻�0
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
//	//cout << pairs[ch] << endl;//pairs[ch]�൱�������һ���µļ�ֵ�ԣ���Ϊ��a��,ֵΪ�ա�
//	//printunordered_map(pairs);
//	//cout << pairs.count(')') << endl;//count()��ѯ����key�����ǲ�ѯvalue   ���ڷ���1�����򷵻�0
//}
//
////map�Ĳ��Ժ���
//void test_map()
//{
//	//map������key������value����ƣ�����key����
//	 //�ײ�ṹ���ö�����ʵ��
//	//map�е�ֵ������keyֵ(���ﰴ�����ŵ�ASKII��ֵ)�Ĵ�С��ӡ�����ϵͳ�Զ���
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
//	//map�е�ֵ������keyֵ�Ĵ�С��ӡ�����ϵͳ�Զ���
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
//	//����Ԫ�ض����ڲ���ʱ�Զ�������
//	 //set���������������ظ���Ԫ��,�еĻ��Զ�Ĩ��
//	set<char> s2;
//	//����
//	s2.insert('a');
//	s2.insert('a');
//	s2.insert('k');
//	s2.insert('c');
//	s2.insert('b');
//	printSet(s2);
//	set<int> s1;
//	//����
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	printSet(s1);
//
//	//ɾ��
//	s1.erase(s1.begin());
//	printSet(s1);
//
//	s1.erase(30);
//	printSet(s1);
//
//	//���
//	//s1.erase(s1.begin(), s1.end());
//
//	s1.clear();
//	printSet(s1);
//}
//
///*
//*
//* **set��multiset����**��
//* set���������������ظ���Ԫ��
//* multiset�������������ظ���Ԫ��
//*
//* map��multimap**����**��
//* map���������������ظ�keyֵԪ��
//* multimap�������������ظ�keyֵԪ��
//*/
//
//
////vector�Ĳ��Ժ���
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
//	//������Ԫ�ز��뵽vector v��
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//	v.push_back(v5);
//
//	int m = v.size();//����
//	int n = v[0].size();//����
//	cout << "������" << m << endl;
//	cout << "������" << n << endl;
//	cout << "����vector����Ϊ��" << endl;
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
//	cout << "vector����ڶ�������Ϊ��" << endl;
//	for (auto s : v[1]) {
//		cout << s << " ";
//	}
//	cout << endl;
//	cout << endl;
//	cout << "vector����ڶ�������Ϊ��" << endl;
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i][1] << " ";
//	}
//	cout << endl;
//
//	cout << "v[2][3]��Ԫ�ش���Ϊ��" << v[2][3] << endl;//�����е����е�Ԫ��
//
//	//v[1] = { 3 };
//	//cout << endl;
//	//cout << "����vector�����Ϊ��" << endl;
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
////stack�Ĳ��Ժ���
//void test_stack()
//{
//	stack<char> stk;
//	char s = 'a';
//	stk.push('s');
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
//	/*   ��c++����������������ģʽ��
//
//		(1) Ĭ��ģʽ     ����precision����ʱ ��ʾ��λ����
//
//		(2) ����ģʽ     ��fixed����
//
//		(3) ��ѧģʽ    ��scientific����*/
//		//��ģʽ(1)�£�precision(n)�в��� ����n��ʾ��ʾ���ֵ���λ����
//		//ע������������Ϊ0���� ��λ�� ֻ��С�����ֵ���λ����
//		//double a;
//		// a = 10.0 / 3;//�����.0�����
//		// double c = 3.14125;
//		//cout.precision(4);
//		//cout << a<<endl;
//		//cout << c << endl;
//
//		  //��ģʽ(2)��(3)�£�precision(n)�в��� ����n ��ʾ ��ʾ���ֵ� С��λ����
//	double a;
//	a = 10.0 / 3;//�����.0�����
//	double c = 3.141256;
//	double b = 3.2;
//
//	cout.precision(3);
//	cout.setf(ios::fixed);// #include<iomanip>
//	cout.setf(cout.showpoint);//ǿ����ʾ������С������0,vs����Ĭ�ϰ�����ʾ��
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
//	//d = c + ch(0);//ִ�в��ˣ���Ҫ��д��
//	ch.push_back('(');
//	ch.push_back(')');
//	printVector(ch);
//}
//
////�������Զ�����������ͣ�����Ĭ�ϵ�<���ţ�����greater<int>
//struct cmp {
//	bool operator()(int a, int b) {
//		return a > b;		//��С��������
//		return a < b;		//�Ӵ�С����
//	}
//};
//
//void test_priority_queue()
//{
//
//	//priority_queue<int> a;//Ĭ��Ϊ��������
//	//�ȼ��� priority_queue<int,vector<int> , less<int> >q;
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
//	//cout << list[0];   //list��֧���������Ԫ�أ���Ҫôʹ�� front() �� back() ��Ա������Ҫôʹ�� list ������������
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
//	cout << *(v.erase(v.begin() + 3)) << endl;//erase()ɾ��ָ��λ��Ԫ��ʱ���᷵����һ��Ԫ�ص�λ��
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