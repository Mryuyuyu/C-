#include<iostream>
#include<string>
#include <vector>
using namespace::std;

//子串
void test01()
{

	string str = "abcdefg";
	string subStr = str.substr(1, 3);
	string subStr3 = str.substr(0, 3);
	cout << "subStr = " << subStr << endl;
	cout << "subStr3 = " << subStr3 << endl;

	string email = "hello@sina.com";
	int pos = email.find("@");
	cout << "pos = " << pos << endl;
	string username = email.substr(0, pos);
	cout << "username: " << username << endl;

}

void test02()
{
	vector<vector<int>> vec = { {0,0},{2,3},{1,4} };
	for (vector<vector<int>>::iterator it = vec.begin(); it != vec.end(); it++)
	{
		for (vector<int>::iterator ite = (*it).begin(); ite != (*it).end(); ite++)
			cout << *ite << " ";
		cout << endl;
	}
}
//字符串删除指定元素
void test03()
{
	string str1 = "sad->saf->";
	int pos = str1.rfind("->");
	cout << str1 << endl;
	str1[pos] = '\0';
	str1[pos + 1] = '\0';
	cout << str1 << endl;
	str1 += "a";
	cout << str1 << endl;

}
//字符串尾删
void test04()
{
	string temp;
	temp += "safdasf";
	cout << temp << endl;
	temp.pop_back();
	cout << temp << endl;
	temp.pop_back();
	cout << temp << endl;
}

//查找数组中最大值
int findMax(vector<int>& nums)
{
	int maxValue = 0;
	for (auto&i : nums)
	{
		if (i > maxValue)
		{
			maxValue = i;
		}
	}
	return maxValue;
}
//abefcd、abd → abd
string findmaxsubstr(string str1, string str2)
{
	if (!str1.size() || !str2.size())
		return "";
	string result="";
	int length1 = str1.size(), length2 = str2.size();
	int ptr1 = 0, ptr2 = 0;
	//int num = 0;
	while (ptr1 < length2)
	{
		int i = ptr1;
		for (; i < length1; i++)
		{
			if (str1[ptr1] == str2[ptr2])
			{
				result += str1[ptr1];
				ptr1++;
				ptr2++;
				
			}
			else
			{
				ptr1++;
			}
		}
		return result;
	}

}
void testIterator()
{
	vector<int> v = { 2,1,5,6,3,4,9,0 };
	int i;
	i = findMax(v);
	vector<int>::iterator it = find(v.begin(), v.end(), i);
	int j = it - v.begin();
	cout << j;
}
int main() {

	//string str = findmaxsubstr("abefcd", "cbd");
	//cout << str;
	string str = "dsafdsa";
	for (auto s : str)
	{
		cout << (++s);
	}//etbgetb请按任意键继续. . .
	system("pause");

	return 0;
}