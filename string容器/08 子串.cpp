#include<iostream>
#include<vector>
using namespace std;



void test01()
{
	string str = "abcdef";
	string subStr = str.substr(1, 3);//���±�1��ʼ��ȡ3��
	cout << "subStr = " << subStr << endl;
}

void test02()
{
	string email = "zhangsan@sina.com";
	//���ʼ���ַ�л�ȡ �û�����Ϣ

	int pos = email.find("@");//8
	string usrName = email.substr(0, pos);//���±�0��ʼ��ȡpos(pos=8)��
	cout << usrName << endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
}