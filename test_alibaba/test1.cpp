//#include <iostream>
//#include <string>
//#include<vector>
//#include<math.h>
//using namespace std;
//
//vector<int> stringtonum(string &s)
//{
//	vector<int> res;
//	for (auto a : s)
//	{
//		if (a >= '0' && a <= '9')
//			res.push_back(a - '0');
//		else
//			res.push_back(a - 'A' + 10);
//	}
//	return res;
//}
//
//int vectortonum(vector<int> &v,int jinzhi)
//{
//	int num = 0;
//	int n = v.size();
//
//	for (int i = 0; i <v.size(); i++)
//	{
//		--n;
//		num += v[i]*pow(jinzhi,n);
//		//cout << "num=" << num << endl;
//	}
//	return num;
//}
//
//int main()
//{
//	string s;
//	cin >> s;
//	//先区分2-10进制和11进制-16进制
//	int flag=0;
//	int jinzhiflag=1;
//	int temp = 0;
//	int length = s.size();
//	vector<int> v;
//	vector<int> res;
//	
//	for (char a : s)
//	{
//		if (a < '0' || a > '9')
//			flag = 1;
//		else
//			break;
//	}
//	v = stringtonum(s);
//	int jzmax=v[0];
//	for (int i = 1; i < v.size(); i++)
//	{
//		if (v[i] > jzmax)
//		{
//			jzmax=v[i];
//		}
//	}
//	if (flag == 0)
//	{
//		for (int i = jzmax+1; i <= 16; i++)
//		{
//				temp = vectortonum(v, i);
//				res.push_back(temp);
//
//		}
//	}
//	if (flag == 1)
//	{
//		for (int i = jzmax+1; i <= 16; i++)
//		{
//			temp = vectortonum(v, i);
//			res.push_back(temp);
//		}
//	}
//	for (int i = 0; i < res.size(); i++)
//		cout << res[i] << endl;
//
//	return 0;
//}