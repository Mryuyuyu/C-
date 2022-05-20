//#include<iostream>
//#include<map>
//#include<vector>
//#include<ctime>
//using namespace std;
//
//#define CHEHUA 0
//#define MEISHU 1
//#define YANFA 2
//
//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key =" << it->first << " value =" << it->second << endl;
//	}
//	cout << endl;
//}
//
//class Worker
//{
//public:
//	string m_Name;
//	int m_Salary;
//};
//
//void createWorker(vector<Worker>& v)
//{
//	string nameSeed = "ABCDEFGHIJ";
//	for (int i = 0; i < 10; i++)
//	{
//		Worker worker;
//		worker.m_Name = "员工";
//		worker.m_Name += nameSeed[i];
//
//		worker.m_Salary = rand() % 10000 + 10000;//10000~19999
//
//		v.push_back(worker);
//	}
//}
//void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
//{
//	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//产生随机部门编号
//		int deptId = rand() % 3;//0,1,2
//
//		//将员工插入到分组中
//		m.insert(make_pair(deptId, *it));
//	}
//}
//
//void showWorkerByGroup(multimap<int, Worker>& m)
//{
//	//0 A B C 1 D E 2 F G
//	cout << "策划部门：" << endl;
//
//	multimap<int, Worker>::iterator pos = m.find(CHEHUA);
//	int count = m.count(CHEHUA);//统计具体人数
//	int index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
//	}
//	
//	cout << "------------------------------" << endl;
//	cout << "美术部门：" << endl;
//
//	pos = m.find(MEISHU);
//	count = m.count(MEISHU);//统计具体人数
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
//	}
//
//	cout << "------------------------------" << endl;
//	cout << "研发部门：" << endl;
//
//	pos = m.find(YANFA);
//	count = m.count(YANFA);//统计具体人数
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
//	}
//
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//1.创建员工
//	vector<Worker>vWorker;
//	createWorker(vWorker);
//
//	////测试
//	//for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
//	//{
//	//	cout << "姓名：" << it->m_Name << " 工资：" << it->m_Salary << endl;
//	//}
//
//	//2.员工分组
//	multimap<int, Worker>mWorker;
//	setGroup(vWorker, mWorker);
//
//	//3.分组显示员工
//	showWorkerByGroup(mWorker);
//	system("pause");
//	return 0;
//}