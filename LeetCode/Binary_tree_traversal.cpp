//#include<iostream>
//#include<vector>
//using namespace ::std;
//struct TreeNode {
//	int val;
//	struct TreeNode* left;
//	struct TreeNode* right;
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}//�൱�ڹ��캯����ð�ź����ǳ�ʼ�������б�
//};
//
////ǰ��
//void pre_dfs(TreeNode* Node) {
//	if (Node == nullptr)
//		return;
//	cout << Node->val << " ";
//	//res.push_back(Node->val);
//	pre_dfs(Node->left);
//	pre_dfs(Node->right);
//	//return res;
//}
//
////����
//void mid_dfs(TreeNode* Node) {
//	if (Node == nullptr)
//		return;
//
//	//res.push_back(Node->val);
//	mid_dfs(Node->left);
//	cout << Node->val << " ";
//	mid_dfs(Node->right);
//	//return res;
//}
//
////����
//void pos_dfs(TreeNode* Node) {
//	if (Node == nullptr)
//		return;
//
//	//res.push_back(Node->val);
//	pos_dfs(Node->left);
//	pos_dfs(Node->right);
//	cout << Node->val << " ";
//	//return res;
//}
//
////��ӡ������
//void Print_Tree(TreeNode* node, int depth) {
//	int i = 0;
//	if (node == NULL)
//		return;
//
//	if (node->left == NULL && node->right == NULL) {
//		for (i = 0; i < depth; i++)
//			printf("     ");
//		printf("- -->%-2d\n", node->val);
//	}
//	else {
//		Print_Tree(node->right, depth + 1);
//		for (i = 0; i < depth; i++)
//			printf("     ");
//		printf("- -->%-2d\n", node->val);
//
//		Print_Tree(node->left, depth + 1);
//	}
//}
//
//int main()
//{
//	TreeNode* head = new TreeNode(5);
//	head->left = new TreeNode(3);
//	head->right = new TreeNode(8);
//	head->left->left = new TreeNode(2);
//	head->left->right = new TreeNode(4);
//	head->left->left->left = new TreeNode(1);
//	head->right->left = new TreeNode(7);
//	head->right->left->left = new TreeNode(6);
//	head->right->right = new TreeNode(10);
//	head->right->right->left = new TreeNode(9);
//	head->right->right->right = new TreeNode(11);
//	Print_Tree(head, 4);
//	cout << endl;
//	cout << endl;
//	pre_dfs(head);
//	cout << endl;
//	mid_dfs(head);
//	cout << endl;
//	pos_dfs(head);
//	cout << endl;
//	system("pause");
//	return 0;
//}