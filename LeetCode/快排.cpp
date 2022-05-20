//#include <iostream>
//#include <vector>
//using namespace std;
//
//void quickSort(vector<int>& num, int left, int right)     //�ڿӷ�
//{
//	if (left >= right)     //�ȼ����������
//		return;
//	int i = left, j = right, x = num[left];   //ѡ������ߵ�ֵΪ��λ
//	while (i < j) {
//		while (i < j && num[j] >= x)//���������ҵ���һ��С��x��
//			j--;
//		if (i < j)
//			num[i++] = num[j];//���֮�󣬲�����һλ
//		while (i < j && num[i] <= x)//���������ҵ�һ������x����
//			i++;
//		if (i < j)
//			num[j--] = num[i];
//	}
//	num[i] = x;     //���ʼȡ������ֵ�ŵ��¿�λ
//	quickSort(num, left, i - 1);//��iΪ�м�ֵ�������������ֵݹ����
//	quickSort(num, i + 1, right);
//}
//
//void QuickSort(vector<int>& v, int left, int right)    //ֱ������
//{
//	int l = left, r = right;
//	if (left >= right)  //��ֻ��һ�����ݻ������в�����ʱ�����ò���
//		return;
//
//	int key = left;        //����ߵĵ�һ����Ϊ��ֵ
//	while (left < right)
//	{
//		while (left < right && v[right] >= v[key])   //�ȴ���������С��key��
//		{
//			right--;
//		}
//		while (left < right && v[left] <= v[key])  //�ٴ��������Ҵ���key��
//		{
//			left++;
//		}
//		if (left < right)
//		{
//			swap(v[left], v[right]);
//		}    //�ҵ�left��right�󽻻�����ֵ
//	}
//	swap(v[left], v[key]);   //left== right ,����ֵ���������ֵ����
//	int meet = left;     //���ֿ���ֵ�����Ҳ���
//
//	QuickSort(v, l, meet - 1);   //�������еݹ�����
//	QuickSort(v, meet + 1, r);  //���������еݹ�����
//}
//
//
//int main()
//{
//	vector<int> v1 = { 3,1,6,4,5,8,2 };
//	vector<int> v2 = { 14,11,21,13,45,32,88,9,1 };
//	quickSort(v1, 0, v1.size() - 1);
//	cout << "v1ͨ�����ڿӷ�������Ľ���ǣ�     ";
//	for (auto& e : v1)
//		cout << e << " ";
//	QuickSort(v2, 0, v2.size() - 1);
//	cout << endl << "v2ͨ��������ָ�뷨������Ľ���ǣ�  ";
//	for (auto& e : v2)
//		cout << e << " ";
//	system("pause");
//	return 0;
//}
