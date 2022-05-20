//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<vector>
//#include "stdio.h"
//#include <stack>
//using namespace std;
//
//struct stu   // 定义一个结构体
//{
//	string name;  // 姓名
//	int num;  // 学号
//	int age;  // 年龄
//};
//
//void test_INT_MAX()
//{
//	unordered_map<string, vector<string>> table = {
//		{"start", {"start", "signed", "in_number", "end"}},
//		{"signed", {"end", "end", "in_number", "end"}},
//		{"in_number", {"end", "end", "in_number", "end"}},
//		{"end", {"end", "end", "end", "end"}}
//	};
//	cout << table["start"][2] << endl;
//	//cout << table[1] << endl;
//
//	cout << INT_MIN << endl;
//	cout << INT_MAX << endl;
//	//cout << INT_MIN - 1 << endl;
//	//cout << INT_MAX + 1 << endl;
//}
//
//void test_char()
//{
//	char s[] = "abcdefg";
//	string t = "abcdefg";
//	cout << t.size() << endl;
//	cout << t.length() << endl;
//	int l = strlen(s);
//	cout << l << endl;
//	for (int i = 0; i < l; i++)
//	{
//		cout << s[i] << " ";
//	}
//}
//
//void test_struct_assign()
//{
//	stu* s = new stu;   // 定义一个结构体指针
//	string str = "ZhangLi";
//	char ss[] = "sdasdfsaf;";
//	(*s).name = str;     // 对结构体中的成员变量name进行赋值
//	s->num = 2015120;  // 对结构体中的成员变量num进行赋值
//	s->age = 18;       // 对结构体中的成员变量age进行赋值
//}
//
////void test_vector()
////{
////	vector<int> v;
////	vector<int> v2;
////	v2.push_back(3);
////	v.push_back(1);
////	v.push_back(2);
////	//v[3] = 3;//这样使用违法，会报错
////	for (int i = 0; i < v.size(); i++)
////	{
////		cout << v[i]<<" ";
////	}
////	cout << endl;
////	for (int i = 0; i < 10; i++)
////	{
////		v2.assign(v.begin(),v.end());
////	}
////	for (int i = 0; i < v2.size(); i++)
////	{
////		cout << v2[i] << " ";
////	}
////}
//
////任意进制转换，输入只能是正整数
//string jinzhi_transform(int n,int jinzhi)
//{
//	string str="";
//	string s;
//	while (n)
//	{
//		str += to_string(n % jinzhi);
//		n /= jinzhi;
//	}
//	s.assign(str.rbegin(), str.rend());
//	return s;
//}
//
////输入输出测试
//void test_in_out()
//{
//	//string str,str2;
//	//getline(cin,str);
//	//getline(cin, str2,' ');
//	//cout << str << endl;
//	//cout << str2 << endl;
//
//	int a=0, b=0;
//	string c[3];
//	//如何快速输入一串数组
//	scanf_s("%d %d",&a,&b);
//
//	cout << a<<" " << b << endl;
//
//}
//
//void test_vector()
//{
//	vector<int> list2 = vector<int>();
//	cout << list2.size() ;
//}
//int main()
//{
//	test_vector();
//	//test_in_out();
//	return 0;
//}