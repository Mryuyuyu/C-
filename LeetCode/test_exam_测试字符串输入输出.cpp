//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
////int main()
////{
////	string m1, m2;
////	cin >> m1;
////	cin >> m2;
////
////	int length = m1.size();
////	if (length == 0)
////	{
////		return 0;
////	}
////
////	if (length != m2.size())
////	{
////		return -1;
////	}
////
////	int Common = 0, A = 0, T = 0, Times = 0, result;
////	for (int i = 0; i < length; i++)
////	{
////		if (m1[i] == m2[i])
////		{
////			Common++;
////		}
////	}
////
////	for (int i = 0; i < length; i++)
////	{
////		if (m1[i] != m2[i] && m1[i] == 'T')
////		{
////			T++;
////		}
////	}
////
////
////	A = length - Common - T;
////
////	int mymin,change;
////	mymin = A;
////	if (A > T)
////	{
////		mymin = T;
////	}
////
////	change = abs(A - T);
////	result = mymin + change;
////
////	cout << result;//һ��Ҫ���������Ȼ������Ϊ�����
////	return result;
////}
//
//int main()
//{
//	//int a ,b,c,m;
//	//cin >> a;
//	//cin >> b;
//	//cin >> c;
//	//vector<string> str1;
//	//vector<string> str2;
//	//vector<string> str3;
//	//string s;
//	//for (int i = 0; i < a; i++)
//	//{
//	//	cin >> s;
//	//	str1.push_back(s);
//	//}
//
//	//for (int i = 0; i < b; i++)
//	//{
//	//	cin >> s;
//	//	str2.push_back(s);
//	//}
//
//	//for (int i = 0; i < c; i++)
//	//{
//	//	cin >> s;
//	//	str3.push_back(s);
//	//}
//	int m=2;
//	cin >> m;
//	cin.ignore();//Ϊ����������'\n'������Ӱ�������getline���������'\n'����
//	//cout << m << endl;
//	string ss;
//	vector<string> sm;
//	for (int i = 0; i < m; i++)
//	{
//		getline(cin, ss, '\n');//\nΪĬ�ϲ�����Ҳ���Ի��ɱ���ַ�
//		sm.push_back(ss);
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		cout << sm[i] << endl;
//	}
//	
//	//getline(cin, str, '\n');//���Կո��Ӱ��
//	//cout << str;
//
//	//for (int i = 0; i < a; i++)
//	//{
//	//	cout << str1[i]<<" ";
//	//}
//	//cout << endl;
//	//for (int i = 0; i < a; i++)
//	//{
//	//	cout << str2[i] << " ";
//	//}
//	//cout << endl;
//	//for (int i = 0; i < a; i++)
//	//{
//	//	cout << str3[i] << " ";
//	//}
//	//cout << endl;
//
//	system("pause");
//	return 0;
//}