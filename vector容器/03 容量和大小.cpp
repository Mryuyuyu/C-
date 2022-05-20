#include<iostream>
#include<vector>
#include<algorithm>
//using namespace Solution;
using namespace std;

//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//
//	}
//	cout << endl;
//}

//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	if (v1.empty())//为真 代表容器为空
//	{
//		cout << "v1为空" << endl;
//	}
//	else
//	{
//		cout << "v1不为空" << endl;
//		cout << "v1的容量为：" << v1.capacity() << endl;
//		cout << "v1的大小为：" << v1.size() << endl;
//	}
//
//	//重新指定大小
//	v1.resize(15);//利用重载版本，可以指定默认填充值，参数2
//	printVector(v1);//如果重新指定比原来长，默认用0填充新的位置
//	cout << "v1的容量为：" << v1.capacity() << endl;
//
//	v1.resize(5);
//	printVector(v1);
//	cout << "v1的容量为：" << v1.capacity() << endl;
//	cout << "v1的大小为：" << v1.size() << endl;
//}

class Solution {
public:
	 double findMedianSortedArrays  (vector<int>& nums1, vector<int>& nums2) {
		//首先合并数组，按从小到大排列
		//然后找出中位数
		int m = nums1.size();
		int n = nums2.size();
		int len = m + n;
		double zhongwei = 1;
		vector<double> hebin;
		for (vector<int>::iterator it = nums1.begin(); it != nums1.end(); it++)
		{
			hebin.push_back(*it);
		}
		for (vector<int>::iterator it = nums2.begin(); it != nums2.end(); it++)
		{
			hebin.push_back(*it);
		}
		sort(hebin.begin(), hebin.end());
		if (len % 2 == 0)
		{
			zhongwei = (hebin[len / 2 - 1] + hebin[len / 2]) / 2;
		}
		else
		{
			zhongwei = hebin[len / 2];
		}
		return zhongwei;
	}
}

void test02()
{

	//vector<int> num1, num2;
	//num1.push_back(1);
	//num1.push_back(2);
	//num2.push_back(3);
	//num2.push_back(4);
	int num1[2] = { 1,2 };
	int num2[2] = { 3,4 };
	double res;
	res = Solution::findMedianSortedArrays(num1, num2);
	cout << res;
}

int main()
{
	test02();

	system("pause");
	return 0;
}