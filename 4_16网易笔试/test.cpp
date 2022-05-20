#include<iostream>
#include<vector>
using namespace std;

static bool flag = false;
static vector<int> sd;

void dfs(const vector<int> &v, vector<int>& res, int n, int target, int begin)
{
	if (flag)
		return;
	if (target == 0 && res.size() == n)
	{
		flag = true;
		sd = res;
	}
	if (res.size() > n)
		return;
	for (int i = begin; i < v.size(); i++)
	{
		if (target - v[i] >= 0)
		{
			res.push_back(v[i]);
			dfs(v, res, n, target - v[i], i + 1);
			res.pop_back();
		}
	}
}

int main()
{
	//	//最大值不超过k，
	// 所有数不等、
	//所有数之和为x
	int n, k, x;
	cin >> n >> k >> x;
	vector<int> v;
	//vector<int>* res = new vector<int>(3);
	vector<int> res;
	int temp;
	if (n > k)
	{
		return -1;
	}
	for (int j = 1; j <= k; j++)
	{
		v.push_back(j);
	}
	dfs(v, res, n, x, 0);
	if (sd.empty())
	{
		cout << -1;
	}
	else
	{
		for (int j = 0; j <sd.size(); j++)
		{
			cout << sd[j] << " ";
		}
	}
	return 0;
}