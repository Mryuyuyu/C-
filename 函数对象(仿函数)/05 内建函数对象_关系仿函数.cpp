//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<functional>//内建函数对象头文件
//using namespace std;
//
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(50);
//	v.push_back(30);
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//降序
//	//sort(v.begin(), v.end(),MyCompare());
//	sort(v.begin(), v.end(), greater<int>());//编译器提供的
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}