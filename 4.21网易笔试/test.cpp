#include<iostream>
#include<vector>
using namespace std;

static int res = 0;

bool judgex(vector<int>& nums,int x)
{
	int sum = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		sum += nums[i];
	}
	if (sum % x == 0)
		return true;
	else
		return false;
}

bool xiugaihe(vector<int> nums, int i,int k,int x)
{
	nums[i] = k;
	int sum = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		sum += nums[i];
	}
	if (sum % x == 0)
		return true;
	else
		return false;
}


void backtracking(vector<int>nums,int begin,int p,int x)
{
	if (begin == nums.size())
	{
		return;
	}

	for (int i = 1; i <=p; i++)
	{
		if (xiugaihe(nums, begin, i, x))
			res++;
		backtracking(nums,begin+1,p,x);
	}
}
int main()
{
	int n, p, x;
	cin >> n >> p >> x;
	vector<int> a;
	for (int i = 0; i < n; i++)
	{
		int j;
		cin >> j;
		a.push_back(j);
	}
	//int res = 0;
	//for (int i = 0; i < a.size(); i++)
	//{
	//	for (int k = 0; k <= p; k++)
	//	{
	//		if (xiugaihe(a, i, k, x))
	//			res++;
	//	}
	//}
	backtracking(a, 0, p, x);
	cout<<res;

	return 0;
}