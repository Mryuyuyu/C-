#include <iostream>
using namespace std;

class Person {
public:
	virtual void print() {
		cout << "Person::print()_this is a person" << endl;
	}
};

class Student :public Person {
public:
	void print() {
		cout << "Student::print()_this is a student" << endl;
	}
};

class Professor :public Person {
public:
	void print() {
		cout << "Professor::print()_this ia a Professor" << endl;
	}
};

class Graduate :public Student {
public:
	void print() {
		cout << "Graduate::print()_this ia a Graduate" << endl;
	}
};

//���Ƕ�̬��̬
//*��̬��̬:   �������� �� ������������ھ�̬��̬�����ú�����
//* ��̬��̬ : ��������麯��ʵ������ʱ��̬
int main() {
	//��̬��
	//const int N = 3;
	//Person* pPerson[N];
	//pPerson[0] = new Student();
	//pPerson[1] = new Professor();
	//pPerson[2] = new Graduate();
	//for (int i = 0; i < N; i++) {
	//	pPerson[i]->print();
	//}

	//��̬��
	Person* p;
	int a;
	cin >> a;
	if (a > 10)
		p = new Student();
	else
		p = new Professor();

	/*
		�����ŵ���û�в����Ĺ��캯�����������ŵ���Ĭ�Ϲ��캯����Ψһ�Ĺ��캯����������
		C++��newʱ�ĳ�ʼ���Ĺ��ɿ���Ϊ��
		�����й��캯�����࣬������û�����ţ����ù��캯�����г�ʼ����
		���û�й��캯�����򲻼����ŵ�newֻ�����ڴ�ռ䣬�������ڴ�ĳ�ʼ�������������ŵ�new���ڷ����ڴ��ͬʱ��ʼ��Ϊ0��

		int *a = new int[100];
		int *b = new int[100]();
		���:
		a�������������Ϊ��δ������ʼ����
		b�о����˳�ʼ��������Ϊ0��
	*/

	p->print();
	return 0;
}
