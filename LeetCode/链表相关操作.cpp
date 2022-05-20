//#include <stdlib.h>
//#include<iostream>
//using namespace std;
////Definition for singly - linked list.
//class Node {
//public:
//	int val;
//	Node* next;
//	Node() : val(0), next(nullptr) {}
//	Node(int x) : val(x), next(nullptr) {}
//	Node(int x, Node* next) : val(x), next(next) {}
//
//	//�������� ͷ���
//	static Node* createList() {
//		Node* headNode = new Node;
//		headNode->val = -1;
//		headNode->next = nullptr;
//		return headNode;
//	}
//
//	//�����ڵ�
//	static Node* creatNode(int data) {
//		Node* node = new Node;
//		node->val = data;
//		node->next = nullptr;
//		return node;
//	}
//
//	//ͷ�巨
//	void static insertNodeInHead(Node* list, int data) {
//		Node* newNode;
//		newNode = creatNode(data);
//		newNode->next = list->next;
//		list->next = newNode;
//	}
//
//	//β�巨
//	void static insertNodeInEnd(Node* list, int data) {
//		//û�е�һ��Ԫ�� ��ֱ�Ӱ�list��nextָ���½ڵ�
//		if (list->next == nullptr) {
//			list->next = creatNode(data);
//			return;
//		}
//		//ÿ�β�������ʹ�ô���ָ�룡��
//		Node* p = list->next;
//		while (p->next) {//�����ж�p ��ΪҪ֪����һ����Ч�ڵ�
//			p = p->next;
//		}
//		p->next = creatNode(data);
//	}
//
//	/**
//	* ɾ��ָ�����ݽڵ�
//	* ˫ָ�� ɾ�� pre��p��ǰһ��ָ��
//	* Ҫ�ж��Ƿ�Ϊ��
//	*/
//	void static deleteNode(Node* list, int data) {
//		Node* p = list->next;//��ͷ��㿪ʼ
//		Node* pre = list;//p��ǰһ���ڵ�
//		if (p == NULL) {
//			cout << "this List is NULL " << endl;
//			return;
//		}
//		while (p) {//ͷ������һ���ڵ�
//			if (p->val == data) {
//				pre->next = p->next;
//				delete p;
//				cout << "delete " << data << " successful��" << endl;
//				return;//��ɾ�������ͬdata�ڵ�  ����ɾ���þ��Ӻ����� dont find
//			}
//			pre = pre->next;
//			p = pre->next;//pһ�� ָ�����pre����һ��(�������Ա�֤ ����Ƕ���ڵ�Ļ���
//		}
//		cout << "dont find this data:" << data << endl;
//	}
//
//	/**
//	 * ��ӡ����
//	 * �ж��Ƿ�Ϊ��
//	 * @param list
//	 */
//	void static printList(Node* list) {
//		if (list->next == nullptr) {
//			cout << "this list is NULL" << endl;
//			return;
//		}
//		Node* p = list->next;//����ͷָ��
//		while (p) {
//			cout << p->val << "  ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void static test02()
//	{
//		Node* list;
//		//Node::createList();
//		list = createList();
//
//		printList(list);
//		insertNodeInEnd(list, 4);
//		insertNodeInEnd(list, 5);
//		insertNodeInEnd(list, 6);
//		insertNodeInHead(list, 3);
//		insertNodeInHead(list, 2);
//		insertNodeInHead(list, 1);
//		//��ӡ���������
//		printList(list);
//		//ɾ��4
//		deleteNode(list, 4);
//		printList(list);
//
//		deleteNode(list, 4);
//		printList(list);
//	}
//
//};
//
//
//void test01()
//{
//	Node* list;
//	//Node::createList();
//	list = Node::createList();
//
//	Node::printList(list);
//	Node::insertNodeInEnd(list, 4);
//	Node::insertNodeInEnd(list, 5);
//	Node::insertNodeInEnd(list, 6);
//	Node::insertNodeInHead(list, 3);
//	Node::insertNodeInHead(list, 2);
//	Node::insertNodeInHead(list, 1);
//	//��ӡ���������
//	Node::printList(list);
//	//ɾ��4
//	Node::deleteNode(list, 4);
//	Node::printList(list);
//
//	Node::deleteNode(list, 4);
//	Node::printList(list);
//}
//
//
//int main() {
//	//Node *head = new Node(1);
//	//cout << head->val << endl;
//	//head->next = new Node(2);
//	//cout << head->next->val << endl;
//	test01();
//	return 0;
//}