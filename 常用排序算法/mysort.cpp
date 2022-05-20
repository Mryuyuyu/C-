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

	//小顶堆插入元素调整：向上调整
	static void heapInsert2(vector<int>& arr, int index)
	{
		while (arr[index] < arr[(index - 1) / 2])
		{
			swap(arr, index, (index - 1) / 2);
			index = (index - 1) / 2;
		}
	}
	//将数组元素调整为小根堆
	static void heapify2(vector<int>& arr, int index, int size)
	{
		int left = index * 2 + 1;//第一个节点index的左子树,
		while (left < size)
		{
			//left + 1即index * 2 + 2，index的右子树
			int smallest = left + 1 < size && arr[left + 1] < arr[left] ? left + 1 : left;
			smallest = arr[smallest] < arr[index] ? smallest : index;
			if (smallest == index)
				break;
			swap(arr, smallest, index);
			index = smallest;
			left = index * 2 + 1;
		}
	}

	//大顶堆插入元素调整：向上调整
	static void heapInsert(vector<int>& arr, int index)
	{
		while (arr[index] > arr[(index - 1) / 2])
		{
			swap(arr, index, (index - 1) / 2);
			index = (index - 1) / 2;
		}
	}
	//将数组元素调整为大根堆：向下调整
	static void heapify(vector<int>& arr, int index, int size)
	{
		int left = index * 2 + 1;//第一个节点index的左子树,
		while (left < size)
		{
			//left + 1即index * 2 + 2，index的右子树
			int largest = left + 1 < size && arr[left + 1] > arr[left] ? left + 1 : left;
			largest = arr[largest] > arr[index] ? largest : index;
			if (largest == index)
				break;//因为初始的arr为大顶堆，这里是把最后一个元素放在了堆顶，重新调整堆
			swap(arr, largest, index);
			index = largest;
			left = index * 2 + 1;
		}
	}
	//堆排序，默认为大顶堆，实现由小到大
	//若将heapInsert ---> heapInsert2
	//	  heapify ---> heapify2		  则是由小顶堆实现，实现由大到小排序
	static void heapSort(vector<int>& arr)
	{
		if (arr.empty() || arr.size() < 2)
			return;
		for (int i = 0; i < arr.size(); i++)
			heapInsert(arr, i);
		int size = arr.size();
		swap(arr, 0, --size);//将堆顶元素放到最后
		//每次取出堆顶元素放到末尾，剩余元素大堆化，最后成为由小到大排序
		while (size > 0)
		{
			heapify(arr, 0, size);
			swap(arr, 0, --size);
		}
	}

	//快排
	static void quickSort(vector<int>& arr, int left, int right)
	{
		if (left >= right)     //先检查左右条件
			return;
		int i = left, j = right, x = arr[left];   //选择最左边的值为坑位
		while (i < j) {
			while (i < j && arr[j] >= x)//从右向左找到第一个小于x的
				j--;
			if (i < j)
				arr[i++] = arr[j];//填坑之后，查找下一位
			while (i < j && arr[i] <= x)//从左向右找第一个大于x的数
				i++;
			if (i < j)
				arr[j--] = arr[i];
		}
		arr[i] = x;     //把最开始取出来的值放到新坑位
		quickSort(arr, left, i - 1);//以i为中间值，分左右两部分递归调用
		quickSort(arr, i + 1, right);
	}

	//
	static void mergeSort(vector<int>& arr)
	{
		if (arr.size() < 2)
			return;
		mergeSort(arr, 0, arr.size()-1);
	}
	//归并排序
	static void mergeSort(vector<int>& arr, int l,int r)
	{
		if (l == r)
			return;
		int mid = l + ((r - l) >> 1);//此处注意左移运算符>>优先级比＋低，不加括号就报错
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
			arr[l + i] = help[i];//因为在l--r范围上归并
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