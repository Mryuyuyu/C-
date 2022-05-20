//#include <iostream>
//#include <vector>
//using namespace std;
//
//void quickSort(vector<int>& num, int left, int right)     //挖坑法
//{
//	if (left >= right)     //先检查左右条件
//		return;
//	int i = left, j = right, x = num[left];   //选择最左边的值为坑位
//	while (i < j) {
//		while (i < j && num[j] >= x)//从右向左找到第一个小于x的
//			j--;
//		if (i < j)
//			num[i++] = num[j];//填坑之后，查找下一位
//		while (i < j && num[i] <= x)//从左向右找第一个大于x的数
//			i++;
//		if (i < j)
//			num[j--] = num[i];
//	}
//	num[i] = x;     //把最开始取出来的值放到新坑位
//	quickSort(num, left, i - 1);//以i为中间值，分左右两部分递归调用
//	quickSort(num, i + 1, right);
//}
//
//void QuickSort(vector<int>& v, int left, int right)    //直接排序
//{
//	int l = left, r = right;
//	if (left >= right)  //当只有一个数据或者序列不存在时，不用操作
//		return;
//
//	int key = left;        //以左边的第一个数为基值
//	while (left < right)
//	{
//		while (left < right && v[right] >= v[key])   //先从右向左找小于key的
//		{
//			right--;
//		}
//		while (left < right && v[left] <= v[key])  //再从左向右找大于key的
//		{
//			left++;
//		}
//		if (left < right)
//		{
//			swap(v[left], v[right]);
//		}    //找到left和right后交换两个值
//	}
//	swap(v[left], v[key]);   //left== right ,将基值与相遇点的值交换
//	int meet = left;     //划分开基值的左右部分
//
//	QuickSort(v, l, meet - 1);   //对左序列递归排序
//	QuickSort(v, meet + 1, r);  //对右右序列递归排序
//}
//
//
//int main()
//{
//	vector<int> v1 = { 3,1,6,4,5,8,2 };
//	vector<int> v2 = { 14,11,21,13,45,32,88,9,1 };
//	quickSort(v1, 0, v1.size() - 1);
//	cout << "v1通过“挖坑法”排序的结果是：     ";
//	for (auto& e : v1)
//		cout << e << " ";
//	QuickSort(v2, 0, v2.size() - 1);
//	cout << endl << "v2通过“左右指针法”排序的结果是：  ";
//	for (auto& e : v2)
//		cout << e << " ";
//	system("pause");
//	return 0;
//}
