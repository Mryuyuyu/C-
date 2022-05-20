#include<iostream>
#include<string>
#include<vector>
using namespace std;

//É¾³ı	who are are are youÖØ¸´µÄ×Ö·û
int main()
{
	string str;
	getline(cin, str);
	for (auto &a:str)
	{
		a = tolower(a);
	}
	string str2 = "";
	int len = str.size();
	if (len == 0)
	{
		cout << "";
	}
	vector<string> v;
	//who are are you

	for (int i=0;i<len;i++)
	{
		if (str[i] != ' ')
		{
			str2 += str[i];
		}
		if (str[i] == ' ')
		{
			//str2 += str[i];
			v.push_back(str2);
			str2.clear();
		}
		if (str[i] != ' ' && i == len - 1)
		{
			v.push_back(str2);
		}
	}
	string temp = v[0];
	for (int i = 1; i < v.size(); i++)
	{
		
		if (temp == v[i])
		{
			v[i] = "";
		}
		else
		{
			temp = v[i];
		}
	}
	for (int i = 0; i < v.size(); i++)
	{
		if(v[i]!="")
		cout << v[i]<<" ";
	}
	return 0;
}