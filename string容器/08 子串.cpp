#include<iostream>
#include<vector>
using namespace std;



void test01()
{
	string str = "abcdef";
	string subStr = str.substr(1, 3);//从下标1开始截取3个
	cout << "subStr = " << subStr << endl;
}

void test02()
{
	string email = "zhangsan@sina.com";
	//从邮件地址中获取 用户名信息

	int pos = email.find("@");//8
	string usrName = email.substr(0, pos);//从下标0开始截取pos(pos=8)个
	cout << usrName << endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
}