#include<iostream>
#include<vector>
using namespace std;

int sum(vector<int>& v)
{
	int temp = 0;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		temp += *it;
	}
	return temp;
}
//int main()
//{
//    // please define the C++ input here. For example: int a,b; cin>>a>>b;;
//    // please finish the function body here.
//    // please define the C++ output here. For example:cout<<____<<endl;
//    int daishu;
//    cin >> daishu;
//    vector<int> v;
//    int x ;
//    for (int i = 0; i < daishu; i++)
//    {
//        cin >> x;
//        v.push_back(x);
//    }
//    if (v.size() == 1)
//        return -1;
//    for (int i = 0; i < v.size(); i++)
//    {
//
//    }
//    return 0;
//}
int main()
{
	// please define the C++ input here. For example: int a,b; cin>>a>>b;;
	// please finish the function body here.
	// please define the C++ output here. For example:cout<<____<<endl;

	//int m;
	//cin >> m;
	//vector<vector<int>>vv;
	//int N, strategy, cpuCount, memSize, cpuArch, supportNP;
	//for (int i = 0; i < m; i++)
	//{
	//	vector<int> v; int x;
	//	for (int j = 0; j < 5; j++)
	//	{
	//		cin >> x;
	//		v.push_back(x);
	//	}
	//	vv.push_back(v);
	//}
	//for (vector<vector<int>>::iterator it = vv.begin(); it != vv.end(); it++)
	//{
	//	for (vector<int>::iterator ite = (*it).begin(); ite != (*it).end(); ite++)
	//	{
	//		cout << *ite << " ";
	//	}
	//	cout << endl;
	//}
	//cout << vv.size() << endl;//行数
	//cout << vv[0].size() << endl;//列数
	//cin >> N >> strategy >> cpuCount >> memSize >> cpuArch >> supportNP;
	//cout << N << strategy << cpuCount << memSize << cpuArch << supportNP;
	//int yes = 0;
	//vector<int> bianhao;
	//if (strategy == 1)
	//{
	//	for (int i = 0; i < vv.size(); i++)
	//	{

	//		if (vv[i][1] >= cpuCount)
	//		{
	//			if (vv[i][2] >= memSize)
	//			{
	//				if (vv[i][3] >= cpuArch)
	//				{
	//					if (vv[i][4] >= supportNP)
	//					{
	//						yes++;
	//						bianhao.push_back(vv[i][0]);
	//					}
	//				}
	//			}
	//		}
	//	}
	//}
	//else
	//{
	//	for (int i = 0; i < vv.size(); i++)
	//	{

	//		if (vv[i][2] >= memSize)
	//		{
	//			if (vv[i][1] >= cpuCount)
	//			{
	//				if (vv[i][3] >= cpuArch)
	//				{
	//					if (vv[i][4] >= supportNP)
	//					{
	//						yes++;
	//						bianhao.push_back(vv[i][0]);
	//					}
	//				}
	//			}
	//		}
	//	}
	//}
	//cout << yes<<" ";
	//for (int i = 0; i < bianhao.size(); i++)
	//	cout << bianhao[i] << " " << endl;
	//return 0;
	vector<int> v;
	int x;
	for (int i = 0; i < 3; i++)
	{
		cin >> x;
		v.push_back(x);
	}
	for (int i = 0; i < 3; i++)
	{
		cout << v[i]<<" ";
	}//cin遇到逗号就停止读取了

	


}