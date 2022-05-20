#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;


int main()
{
	string str;
	string tem;
	getline(cin, str, '\n');
	if (islower(str[0]))
		return -1;
	for (int i=0;i<str.size();i++)
	{
		if (str[i] == ',')
		{
			if (islower(str[i + 1]))
				return -1;
		}
	}
	unordered_map<string, int> jilu;
	string temp = "";
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] != ',')
			temp += str[i];
		if (str[i] == ',' || i == str.size() - 1)
		{

			if (jilu.count(temp) == 0)
			{
				jilu[temp] = 1;
			}
			else
			{
				jilu[temp] += 1;
			}
			temp.clear();

		}
	}
	vector<string> v;
	for (unordered_map<string, int>::iterator it = jilu.begin(); it != jilu.end(); it++)
	{

		v.push_back(it->first);
	}
	int max = jilu[v[0]]; string s = v[0];
	for (int i = 1; i < v.size(); i++)
	{
		if (max < jilu[v[i]])
		{
			max = jilu[v[i]];
			s = v[i];
		}
	}
	cout << s;
	return 0;
}