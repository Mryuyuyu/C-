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
//	//创建链表 头结点
//	static Node* createList() {
//		Node* headNode = new Node;
//		headNode->val = -1;
//		headNode->next = nullptr;
//		return headNode;
//	}
//
//	//创建节点
//	static Node* creatNode(int data) {
//		Node* node = new Node;
//		node->val = data;
//		node->next = nullptr;
//		return node;
//	}
//
//	//头插法
//	void static insertNodeInHead(Node* list, int data) {
//		Node* newNode;
//		newNode = creatNode(data);
//		newNode->next = list->next;
//		list->next = newNode;
//	}
//
//	//尾插法
//	void static insertNodeInEnd(Node* list, int data) {
//		//没有第一个元素 就直接把list的next指向新节点
//		if (list->next == nullptr) {
//			list->next = creatNode(data);
//			return;
//		}
//		//每次操作必须使用代理指针！！
//		Node* p = list->next;
//		while (p->next) {//不能判断p 因为要知道上一个有效节点
//			p = p->next;
//		}
//		p->next = creatNode(data);
//	}
//
//	/**
//	* 删除指定数据节点
//	* 双指针 删除 pre是p的前一个指针
//	* 要判断是否为空
//	*/
//	void static deleteNode(Node* list, int data) {
//		Node* p = list->next;//从头结点开始
//		Node* pre = list;//p的前一个节点
//		if (p == NULL) {
//			cout << "this List is NULL " << endl;
//			return;
//		}
//		while (p) {//头结点的下一个节点
//			if (p->val == data) {
//				pre->next = p->next;
//				delete p;
//				cout << "delete " << data << " successful！" << endl;
//				return;//若删除多个相同data节点  可以删除该句子和最后的 dont find
//			}
//			pre = pre->next;
//			p = pre->next;//p一定 指向的是pre的下一个(这样可以保证 如果是多个节点的话）
//		}
//		cout << "dont find this data:" << data << endl;
//	}
//
//	/**
//	 * 打印链表
//	 * 判断是否为空
//	 * @param list
//	 */
//	void static printList(Node* list) {
//		if (list->next == nullptr) {
//			cout << "this list is NULL" << endl;
//			return;
//		}
//		Node* p = list->next;//跳过头指针
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
//		//打印插入的所有
//		printList(list);
//		//删除4
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
//	//打印插入的所有
//	Node::printList(list);
//	//删除4
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