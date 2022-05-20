//#include <iostream>
//#include <vector>
//using namespace std;
//
//// �������Ľڵ�ṹ��
//struct node {
//	int data;	  // ������ 
//	node* lchild; // ָ��������
//	node* rchild; // ָ�����Һ���
//};
//
//// �����½ڵ�
//node* newNode(int v) {
//	node* Node = new node;
//	Node->data = v;
//	Node->lchild = Node->rchild = nullptr;
//	return Node;
//}
//
//// ����������Ĳ��Ҳ���
//bool search(node* root, const int& val) {
//	if (root == nullptr)   return false;
//	if (root->data == val) return true;
//	else if (root->data > val) {
//		search(root->lchild, val);
//	}
//	else {
//		search(root->rchild, val);
//	}
//}
//
//// ����������Ĳ������
//void insert(node* root, const int& val) {
//	if (root == nullptr) {
//		root = newNode(val);
//	}
//
//	if (root->data == val) {
//		return; // �Ѿ�����ͬ��ֵ
//	}
//	else if (root->data > val) {
//		insert(root->lchild, val);
//	}
//	else {
//		insert(root->rchild, val);
//	}
//}
//
//// ����������Ľ���
//node* create(vector<int>& data) {
//	node* root = nullptr;
//	for (auto& iter : data) {
//		insert(root, iter);
//	}
//	return root;
//}
//
//// �����������ɾ��
///*
//	Ϊ��֤ɾ��ĳһ���ڵ�֮����ȻΪһ�������������
//	һ�ַ����ǣ��ҵ�ɾ���ڵ���������е����ֵ���滻��ɾ���Ľڵ�
//	��һ�ַ����ǣ��ҵ�ɾ���ڵ���������е���Сֵ���滻��ɾ���Ľڵ�
//	�滻�ķ����ǽ���ɾ���ڵ�ĵݹ����
//*/
//
//// ����������ӽڵ㣬�ҵ��������е����ֵ��
//node* GetLeftMax(node* root) {
//	while (root != nullptr) {
//		root = root->rchild;
//	}
//	return root;
//}
//
//// ��������Һ��ӽڵ㣬�ҵ��������е���Сֵ��
//node* GetRightMin(node* root) {
//	while (root != nullptr) {
//		root = root->lchild;
//	}
//	return root;
//}
//
//// �����������ɾ������
//void deleteNode(node*& root, int& val) {
//	if (root == nullptr) return;
//	if (root->data > val) {
//		deleteNode(root->lchild, val);
//	}
//	else if (root->data < val) {
//		deleteNode(root->rchild, val);
//	}
//	else {
//		if (root->lchild == nullptr && root->rchild == nullptr) {
//			delete root;	// �ͷ��ڴ�
//			root = nullptr; // ָ���ÿ�
//		}
//		else if (root->lchild != nullptr) {
//			node* pre = GetLeftMax(root->lchild);
//			root->data = pre->data; // ʹ��ǰ���ڵ��滻Ҫɾ���Ľڵ�
//			deleteNode(root->lchild, pre->data); // �ݹ�ɾ�����滻�Ľڵ�
//		}
//		else if (root->rchild != nullptr) {
//			node* post = GetRightMin(root->rchild);
//			root->data = post->data; // ʹ�ú�̽ڵ��滻Ҫɾ���Ľڵ�
//			deleteNode(root->rchild, post->data); // �ݹ�ɾ�����滻�Ľڵ�
//		}
//	}
//}
//
//int main() {
//
//	return 0;
//}
