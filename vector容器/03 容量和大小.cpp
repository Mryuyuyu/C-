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
//	if (v1.empty())//Ϊ�� ��������Ϊ��
//	{
//		cout << "v1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "v1��Ϊ��" << endl;
//		cout << "v1������Ϊ��" << v1.capacity() << endl;
//		cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
//	}
//
//	//����ָ����С
//	v1.resize(15);//�������ذ汾������ָ��Ĭ�����ֵ������2
//	printVector(v1);//�������ָ����ԭ������Ĭ����0����µ�λ��
//	cout << "v1������Ϊ��" << v1.capacity() << endl;
//
//	v1.resize(5);
//	printVector(v1);
//	cout << "v1������Ϊ��" << v1.capacity() << endl;
//	cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
//}

class Solution {
public:
	 double findMedianSortedArrays  (vector<int>& nums1, vector<int>& nums2) {
		//���Ⱥϲ����飬����С��������
		//Ȼ���ҳ���λ��
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