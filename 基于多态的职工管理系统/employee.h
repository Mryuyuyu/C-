//普通员工文件
#pragma once
#include <iostream>
using namespace::std;
#include "worker.h"

class Employee :public Worker
{
public:

	//构造函数
	Employee(int id,string name,int dId);

	//显示个人信息
	virtual void showInfo();//这里子类中的virtual可写可不写


	//获取岗位名称
	virtual string getDeptName();
};
