#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

void printDeque(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100;  �����е����ݲ������޸���
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);
	printDeque(d);

	//���� Ĭ�Ϲ��� ��С����
	//����֧������ü�ĵ�����������������������sort�㷨ֱ�Ӷ����������
	//vector����Ҳ�������� sort��������
	sort(d.begin(), d.end());
	cout << "�����Ľ��:" << endl;
	printDeque(d);
}

int main()
{
	test01();

	system("pause");
	return 0;
}