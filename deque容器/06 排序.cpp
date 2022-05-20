#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

void printDeque(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100;  容器中的数据不可以修改了
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

	//排序 默认规则 从小到大
	//对于支持随机访间的迭代器的容器，都可以利用sort算法直接对其进行排序
	//vector容器也可以利用 sort进行排序
	sort(d.begin(), d.end());
	cout << "排序后的结果:" << endl;
	printDeque(d);
}

int main()
{
	test01();

	system("pause");
	return 0;
}