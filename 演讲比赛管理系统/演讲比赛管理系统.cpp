#include <iostream>
using namespace std;
#include "speechManager.h"
#include <ctime>

int main()
{

	//随机数种子
	srand((unsigned int)time(NULL));

	SpeechManager sm;

	////测试12名选手的创建
	//for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	//{
	//	cout << "选手编号：" << it->first
	//		<< " 姓名： " << it->second.m_Name
	//		<< " 成绩： " << it->second.m_Score[0] << endl;
	//}

	int choice = 0;

	while (true)
	{
		sm.show_Menu();
		cin >> choice;

		switch (choice)
		{
		case 1:
			sm.startSpeech();
			break;
		case 2://显示往届记录
			sm.showRecord();
			break;
		case 3://清空数据
			sm.clearRecord();
			break;
		case 0://退出系统
			sm.exitSystem();
			break;
		default:
			system("cls");//清屏
			break;
		}

	}

	system("pause");
	return 0;
}