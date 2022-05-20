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
//	//´´½¨listÈÝÆ÷
//	list<int>L;//Ä¬ÈÏ¹¹Ôì
//
//	//Î²²å
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//
//	//Í·²å
//	L.push_front(100);
//	L.push_front(200);
//	L.push_front(300);
//
//	//±éÀúÈÝÆ÷
//	//300 200 100 10 20 30
//	printList(L);
//
//	//Î²É¾
//	L.pop_back();
//	//300 200 100 10 20
//	printList(L);
//
//	//Í·É¾
//	L.pop_front();
//	//200 100 10 20
//	printList(L);
//
//	//insert²åÈë
//	list<int>::iterator it = L.begin();
//	L.insert(++it, 1000);
//	//  200 1000 100 10 20
//	printList(L);
//
//	//É¾³ý
//	it = L.begin();
//	L.erase(it);
//	//1000 100 10 20
//	printList(L);
//
//	//ÒÆ³ý
//	L.push_back(10000);
//	L.push_back(10000);
//	L.push_back(10000);
//	printList(L);
//
//	L.remove(10000);
//	printList(L);
//
//	//Çå¿Õ
//	L.clear();
//	printList(L);
//
//
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}