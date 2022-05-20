//#include<iostream>
//using namespace std;
//
//class Calculator
//{
//public:
//
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "-")
//		{
//			return m_Num1 - m_Num2;
//		}
//		else if (oper == "*")
//		{
//			return m_Num1 * m_Num2;
//		}
//	}
//
//	int m_Num1;
//	int m_Num2;
//};
//
//void test01()
//{
//	Calculator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//
//	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
//	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
//	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
//}
//
////利用多态实现计算器
//
//class AbstractCalculator
//{
//public:
//	virtual	int getResult()
//	{
//		return 0;
//	}
//
//	int m_Num1;
//	int m_Num2;
//};
//
////加法计算器
//class AddCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
////减法计算器
//class SubCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
////乘法计算器
//class MulCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//
//void test02()
//{
//	//多态使用条件
//	//父类指针或者引用指向子类对象
//
//
//	//加法运算
//	AbstractCalculator* abc = new AddCalculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;
//
//	//减法运算
//	abc = new SubCalculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 12;
//	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;
//
//	//乘法运算
//	abc = new MulCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 12;
//	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;
//}
//
//
//int main()
//{
//	test02();
//
//	system("pause");
//	return 0;
//}