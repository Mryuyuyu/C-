//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<vector>
//#include "stdio.h"
//#include <stack>
//using namespace std;
//
//struct stu   // ����һ���ṹ��
//{
//	string name;  // ����
//	int num;  // ѧ��
//	int age;  // ����
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
//	stu* s = new stu;   // ����һ���ṹ��ָ��
//	string str = "ZhangLi";
//	char ss[] = "sdasdfsaf;";
//	(*s).name = str;     // �Խṹ���еĳ�Ա����name���и�ֵ
//	s->num = 2015120;  // �Խṹ���еĳ�Ա����num���и�ֵ
//	s->age = 18;       // �Խṹ���еĳ�Ա����age���и�ֵ
//}
//
////void test_vector()
////{
////	vector<int> v;
////	vector<int> v2;
////	v2.push_back(3);
////	v.push_back(1);
////	v.push_back(2);
////	//v[3] = 3;//����ʹ��Υ�����ᱨ��
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
////�������ת��������ֻ����������
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
////�����������
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
//	//��ο�������һ������
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