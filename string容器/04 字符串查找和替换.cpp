//#include<iostream>
//#include<vector>
//using namespace std;
//
//
//
//void test01()
//{
//	string str1 = "abcdefgde";
//
//	int pos = str1.find("de");
//	if (pos == -1)
//	{
//		cout << "未找到字符串" << endl;
//	}
//	else
//	{
//		cout << "找到了字符串,pos = " <<pos<< endl;
//	}
//
//	//rfind 和find区别
//	//rfind从右往左查找  find从左往右查找(但下标都是从左往右)
//	pos = str1.rfind("de");
//
//	cout << "pos = " << pos << endl;
//}
//
////替换
//void test02()
//{
//	string str1 = "abcdefg";
//	str1.replace(1, 3, "1111");
//	cout << "str1 = " << str1 << endl;
//}
//
//int main()
//{
//	test02();
//
//	system("pause");
//	return 0;
//}