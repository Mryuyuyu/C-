//#include <iostream>
//#include <thread>
//using namespace std;
////void function_1(string &s) {
////	cout << (&s) << endl;
////	cout <<"�ڲ�����Ϊ��" << s << endl;
////}
//
//void myprint()
//{
//	cout << "�ҵ��߳̿�ʼִ����" << endl;
//
//	//cout << "�ҵ��߳�ִ������1" << endl;
//	//cout << "�ҵ��߳�ִ������2" << endl;
//	//cout << "�ҵ��߳�ִ������3" << endl;
//	//cout << "�ҵ��߳�ִ������4" << endl;
//	//cout << "�ҵ��߳�ִ������5" << endl;
//	//cout << "�ҵ��߳�ִ������6" << endl;
//	//cout << "�ҵ��߳�ִ������7" << endl;
//	//cout << "�ҵ��߳�ִ������8" << endl;
//}
//
//class TA {
//public:
//	int& m_i;
//	TA(int &i):m_i(i){}
//	void operator()()//���ܴ�����
//	{
//		//cout << "�ҵ��߳�operator������ʼִ��" << endl;
//		////...
//		//cout << "�ҵ��߳�operator������ʼִ��" << endl;
//		cout << "m_i��ֵΪ��" << m_i << endl;
//	
//	}
//};
//
//int main() {
//	//string s = "test";
//	//thread t1(function_1,ref(s));
//	//thread th = thread(function_1, ref(s));
//	/*cout << (&s) << endl;
//	t1.join();*/
//	//t1.detach()	//detach()�Ժ�Ͳ�����join��
//
//	//thread mytobj(myprint);
//	//mytobj.join();////���߳�����������ȴ�myprint()ִ���꣬�����߳�ִ����ϣ����join()��ִ����ϣ����߳̾ͼ���
//	//mytobj.detach();//����detachO)֮����������̹߳�����thread����ͻ�ʧȥ��������̵߳Ĺ�������ʱ������߳̾ͻ�פ���ں�̨����
//					///������߳̾��൱�ڱ�c����ʱ�̽ӹܣ���������߳�ִ����ɺ�������ʱ�⸺��������߳���ص���Դ(�ػ��߳�)
//					//detach֮���ܹܿأ����߳�ִ���������
//					//detach֮������join��
//	//joinable():�ж��Ƿ���Գɹ�ʹ��join()����detach()��;
//	//mytobj.join(); 
//	//if (mytobj.joinable())
//	//{
//	//	cout << "1:joinable() == true" << endl;
//	//}
//	//else
//	//{
//	//	cout<< "1:joinable() == false" << endl;
//	//}
//
//	//mytobj.detach();
//	//if (mytobj.joinable())
//	//{
//	//	cout << "2:joinable() == true" << endl;
//	//}
//	//else
//	//{
//	//	cout << "2:joinable() == false" << endl;
//	//}
//
//	//���������߳��ַ�
//	//����
//	////��ҿ��ܻ���һ������:һ��������detach0)���������߳�ִ�н����ˣ��������õ����ta�����������?
//	// ��������//�������ʵ�����Ǳ����Ƶ��߳���ȥ;ִ�������̺߳�ta�ᱻ��챣����������Ƶ�TA�������ɴ��ڡ�
//	//���ԣ�ֻҪ�����TA�������û�����ã�û��ָ�룬��ô�ò����������;
//
//	int myi = 6;
//	TA ta(myi);
//	//TA ta;
//	thread mytobj3(ta);
//	//mytobj3.join();
//	mytobj3.detach();
//	cout << "i love china!" << endl;
//
//	return 0;
//}