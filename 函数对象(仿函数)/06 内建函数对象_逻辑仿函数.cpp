#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>//内建函数对象头文件
using namespace std;


void test01()
{
	vector<bool>v;

	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);
	//v.push_back(30);

	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	//∥利用逻辑非将容器v搬运到容器v2中，并执行取反操作
	vector<bool>v2;
	v2.resize(v.size());

	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
}


int main()
{
	test01();
	system("pause");
	return 0;
}