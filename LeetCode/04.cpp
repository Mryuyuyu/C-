//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	static double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//		//首先合并数组，按从小到大排列
//		//然后找出中位数
//		int m = nums1.size();
//		int n = nums2.size();
//		int len = m + n;
//		double zhongwei = 1;
//		vector<double> hebin;
//		for (vector<int>::iterator it = nums1.begin(); it != nums1.end(); it++)
//		{
//			hebin.push_back(*it);
//		}
//		for (vector<int>::iterator it = nums2.begin(); it != nums2.end(); it++)
//		{
//			hebin.push_back(*it);
//		}
//		sort(hebin.begin(), hebin.end());
//		if (len % 2 == 0)
//		{
//			zhongwei = (hebin[len / 2 - 1] + hebin[len / 2]) / 2;
//		}
//		else
//		{
//			zhongwei = hebin[len / 2];
//		}
//		return zhongwei;
//	}
//};
//
//void test01()
//{
//
//	vector<int> num1, num2;
//	num1.push_back(1);
//	num1.push_back(2);
//	num2.push_back(2);
//	num2.push_back(3);
//	num2.push_back(4);
//	double res;
//	res = Solution::findMedianSortedArrays(num1, num2);//findMedianSortedArrays（） 是类成员函数，需要创建一个类对象，用类对象调用这个函数；
//														//或者加个static修饰findMedianSortedArrays（）函数,否则这里调用不了
//	cout << res << endl;
//}
//
//void test02()
//{
//	string str = "abcdefg";
//	string subStr = str.substr(0, 3);
//	cout << "subStr = " << subStr << endl;
//	cout << str.length() << endl;
//}
//
//void test03()
//{
//	int b;
//	int a = -5;
//	vector<int> v;
//	
//	a = 0-a;
//	b = abs(5);
//	v.push_back(a % b);
//	cout << a << endl;
//	cout << b << endl;
//	for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
//		cout << *it << endl;
//}
//
//void test04()
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
////void test05()
////{
////	
////	for (int i = 0; i < 10; i++)
////	{
////		int x = 3;
////		for (int i = 0; i < 10; i++)
////		{
////			x += 3;
////		}
////	}
////	cout << x << endl;
////}
//
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}