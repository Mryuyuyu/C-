//#include<iostream>
//#include<vector>
//using namespace std;
//
//void printVector(vector<int>& arr)
//{
//	for (auto& i : arr)
//		cout << i << " ";
//	cout << endl;
//}
//
//void swap(vector<int>& arr, int i, int j)
//{
//	int temp = arr[i];
//	arr[i] = arr[j];
//	arr[j] = temp;
//}
////´ó¸ù¶Ñ
//void heapInsert(vector<int>& arr, int index)
//{
//
//		while (arr[index] > arr[(index - 1) / 2])
//		{
//			swap(arr, index, (index - 1) / 2);
//			index = (index - 1) / 2;
//		}	
//
//}
//
//void heapify(vector<int>& arr, int index, int size)
//{
//	int left = 2 * index + 1;
//	while (left < size)
//	{
//		int largest = left + 1 < size && arr[left + 1] > arr[left] ? left + 1 : left;
//		largest = arr[largest] > arr[index] ? largest : index;
//		
//		if (largest == index)
//			break;
//		swap(arr, index, largest);
//		index = largest;
//		left = 2 * index + 1;
//	}
//}
//
//void heapSort(vector<int>& arr)
//{
//	int size = arr.size();
//	for (int i = 0; i < size; i++)
//		heapInsert(arr, i);
//	swap(arr, 0, --size);
//	
//	while (size > 0)
//	{
//		heapify(arr, 0, size);
//		swap(arr, 0, --size);
//	}
//}
//
//int main()
//{
//	vector<int> arr = { 1,3,6,7,0,-1,1 };
//	printVector(arr);
//	heapSort(arr);
//	printVector(arr);
//	system("pause");
//	return 0;
//}