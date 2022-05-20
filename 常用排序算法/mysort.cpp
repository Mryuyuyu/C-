#include<iostream>
#include<vector>
using namespace std;

class mysort {
public:
	static void swap(vector<int>& arr, int i, int j)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

	//С���Ѳ���Ԫ�ص��������ϵ���
	static void heapInsert2(vector<int>& arr, int index)
	{
		while (arr[index] < arr[(index - 1) / 2])
		{
			swap(arr, index, (index - 1) / 2);
			index = (index - 1) / 2;
		}
	}
	//������Ԫ�ص���ΪС����
	static void heapify2(vector<int>& arr, int index, int size)
	{
		int left = index * 2 + 1;//��һ���ڵ�index��������,
		while (left < size)
		{
			//left + 1��index * 2 + 2��index��������
			int smallest = left + 1 < size && arr[left + 1] < arr[left] ? left + 1 : left;
			smallest = arr[smallest] < arr[index] ? smallest : index;
			if (smallest == index)
				break;
			swap(arr, smallest, index);
			index = smallest;
			left = index * 2 + 1;
		}
	}

	//�󶥶Ѳ���Ԫ�ص��������ϵ���
	static void heapInsert(vector<int>& arr, int index)
	{
		while (arr[index] > arr[(index - 1) / 2])
		{
			swap(arr, index, (index - 1) / 2);
			index = (index - 1) / 2;
		}
	}
	//������Ԫ�ص���Ϊ����ѣ����µ���
	static void heapify(vector<int>& arr, int index, int size)
	{
		int left = index * 2 + 1;//��һ���ڵ�index��������,
		while (left < size)
		{
			//left + 1��index * 2 + 2��index��������
			int largest = left + 1 < size && arr[left + 1] > arr[left] ? left + 1 : left;
			largest = arr[largest] > arr[index] ? largest : index;
			if (largest == index)
				break;//��Ϊ��ʼ��arrΪ�󶥶ѣ������ǰ����һ��Ԫ�ط����˶Ѷ������µ�����
			swap(arr, largest, index);
			index = largest;
			left = index * 2 + 1;
		}
	}
	//������Ĭ��Ϊ�󶥶ѣ�ʵ����С����
	//����heapInsert ---> heapInsert2
	//	  heapify ---> heapify2		  ������С����ʵ�֣�ʵ���ɴ�С����
	static void heapSort(vector<int>& arr)
	{
		if (arr.empty() || arr.size() < 2)
			return;
		for (int i = 0; i < arr.size(); i++)
			heapInsert(arr, i);
		int size = arr.size();
		swap(arr, 0, --size);//���Ѷ�Ԫ�طŵ����
		//ÿ��ȡ���Ѷ�Ԫ�طŵ�ĩβ��ʣ��Ԫ�ش�ѻ�������Ϊ��С��������
		while (size > 0)
		{
			heapify(arr, 0, size);
			swap(arr, 0, --size);
		}
	}

	//����
	static void quickSort(vector<int>& arr, int left, int right)
	{
		if (left >= right)     //�ȼ����������
			return;
		int i = left, j = right, x = arr[left];   //ѡ������ߵ�ֵΪ��λ
		while (i < j) {
			while (i < j && arr[j] >= x)//���������ҵ���һ��С��x��
				j--;
			if (i < j)
				arr[i++] = arr[j];//���֮�󣬲�����һλ
			while (i < j && arr[i] <= x)//���������ҵ�һ������x����
				i++;
			if (i < j)
				arr[j--] = arr[i];
		}
		arr[i] = x;     //���ʼȡ������ֵ�ŵ��¿�λ
		quickSort(arr, left, i - 1);//��iΪ�м�ֵ�������������ֵݹ����
		quickSort(arr, i + 1, right);
	}

	//
	static void mergeSort(vector<int>& arr)
	{
		if (arr.size() < 2)
			return;
		mergeSort(arr, 0, arr.size()-1);
	}
	//�鲢����
	static void mergeSort(vector<int>& arr, int l,int r)
	{
		if (l == r)
			return;
		int mid = l + ((r - l) >> 1);//�˴�ע�����������>>���ȼ��ȣ��ͣ��������žͱ���
		mergeSort(arr, l, mid);
		mergeSort(arr, mid + 1, r);
		merge(arr, l, mid, r);
	}

	static void merge(vector<int>& arr, int l, int mid, int r)
	{
		//int* help = new int[r - l + 1];
		vector<int> help(r - l + 1);
		int i = 0;
		int p1 = l;
		int p2 = mid + 1;
		while (p1 <= mid && p2 <= r)
		{
			help[i++] = arr[p1] < arr[p2] ? arr[p1++] : arr[p2++];
		}
		while (p1 <= mid)
			help[i++] = arr[p1++];
		while (p2 <= r)
		{
			if (p2 != r)
			{
				help[i++] = arr[p2++];
			}
			else
			{
				help[i] = arr[p2];
				break;
			}
		}
			
		for (int i = 0; i < r - l + 1; i++)
		{
			arr[l + i] = help[i];//��Ϊ��l--r��Χ�Ϲ鲢
		}
	}
};

void printVector(vector<int>& arr)
{
	for (auto& i : arr)
		cout << i<<" ";
	cout << endl;
}

int main()
{
	vector<int> arr = { 1,3,6,7,0,-1,1 };
	printVector(arr);
	//mysort::swap(arr, 2, 3);
	//printVector(arr);
	//mysort::heapSort(arr);
	//printVector(arr);
	//mysort::quickSort(arr, 0, arr.size() - 1);
	mysort::mergeSort(arr,0, arr.size() - 1);
	printVector(arr);
	system("pause");
	return 0;
}