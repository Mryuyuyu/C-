//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<stack>
//#include <unordered_map>
//#include <map>
//#include <set>
//#include <string>
//using namespace::std;
//
////这个方法行不通，因为它的record数组再不只一种方法的时候被覆盖了
//class Solution {
//public:
//
//	//static int num1(int n) {
//	//	if (n < 1) {
//	//		return 0;
//	//	}
//	//	int record[] = new int[n];
//	//	return process1(0, record, n);
//	//}
//
//	static int process1(int i, int record[], int n) {
//		if (i == n) {
//			return 1;
//		}
//		int res = 0;
//		for (int j = 0; j < n; j++) {
//			if (isValid(record, i, j)) {
//				record[i] = j;
//				res += process1(i + 1, record, n);
//			}
//		}
//		return res;
//	}
//
//	static bool isValid(int record[], int i, int j) {
//		for (int k = 0; k < i; k++) {
//			if (j == record[k] || abs(record[k] - j) == abs(i - k)) {
//				return false;
//			}
//		}
//		return true;
//	}
//};
//
//////vector通用打印函数
////template<typename T>
////using VectorIterator = typename vector<T>::const_iterator;
////template<typename T>
////void printVector(const vector<T>& v) {
////	VectorIterator <T> ite;
////	for (ite = v.begin(); ite != v.end(); ite++)
////	{
////		cout << *ite << " ";
////	}
////	cout << endl;
////}
////
//////vector<vector<>>通用打印函数
////template<typename T>
////using Vector2 = typename vector<vector<T>>::const_iterator;
////template<typename T>
////void printVector2(const vector<vector<T>>& v) {
////	Vector2 <T> ite;
////	for (ite = v.begin(); ite != v.end(); ite++) {
////		printVector(*ite);
////	}
////	cout << endl;
////}
//
//int main()
//{
//	int t;
//	int n = 4;
//	int record[4];
//	t = Solution::process1(0, record, n);
//	cout << t << endl;
//
//	for (int i = 0; i < n; i++)
//		cout << record[i]<<" ";
//	//int aa[3] = { 1, 2 ,3 };
//	//for (int i : aa)
//	//{
//	//	cout << aa[i - 1] << " ";
//	//}
//	system("pause");
//	return 0;
//}
