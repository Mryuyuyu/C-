//#include<iostream>
//#include<list>
//using namespace std;
//
//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//����list����
//	list<int>L1;//Ĭ�Ϲ���
//
//	//β��
//	L1.push_back(20);
//	L1.push_back(10);
//	L1.push_back(50);
//	L1.push_back(40);
//	L1.push_back(30);
//
//	//��ת
//	cout << "��תǰ��" << endl;
//	printList(L1);
//	L1.reverse();
//	
//	cout << "��ת��" << endl;
//	
//	printList(L1);
//
//
//}
//
//bool myCompare(int v1,int v2)
//{
//	//���� ���õ�һ�������ڵڶ�����
//	return v1 > v2;
//}
//
//void test02()
//{
//	//����list����
//	list<int>L1;//Ĭ�Ϲ���
//
//	//β��
//	L1.push_back(20);
//	L1.push_back(10);
//	L1.push_back(50);
//	L1.push_back(40);
//	L1.push_back(30);
//
//	cout << "����ǰ��" << endl;
//	printList(L1);
//
//	//���в�֧��������ʵ��������������������ñ�׼�㷨
//	//��֧��������ʵ��������������ڲ����ṩ��ӦһЩ�㷨
//	//sort(L1.begin(), L1.end());
//	//L1.sort();//Ĭ��������� ��С���� ����
//	L1.sort(myCompare);//�Ӵ�С ����
//	cout << "�����" << endl;
//	printList(L1);
//
//	//L1.sort()
//
//}
//
//int main()
//{
//	test02();
//
//	system("pause");
//	return 0;
//}