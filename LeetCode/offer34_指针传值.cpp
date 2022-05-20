//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode(int x):val(x),left(nullptr),right(nullptr){}
//};
//
//void f(vector<vector<int>>* vv,vector<int>* v,TreeNode* root, int target)
//{
//    if (root == nullptr)
//        return;
//
//    (*v).push_back(root->val);
//    target -= root->val;
//    if (target == 0 && root->left == nullptr && root->right == nullptr)
//        (*vv).push_back(*v);
//
//    f(vv,v,root->left, target);
//    f(vv,v,root->right, target);
//
//    (*v).pop_back();
//}
//
////´òÓ¡¶þ²æÊ÷
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
//    vector<vector<int>> *vv = new vector<vector<int>>;
//    vector<int> *v = new vector<int>;
//	//v.push_back(3);
//	//vv.push_back(v);
//    TreeNode* head = new TreeNode(5);
//	head->left = new TreeNode(3);
//	head->right = new TreeNode(8);
//	head->left->left = new TreeNode(2);
//	head->left->right = new TreeNode(4);
//	//head->left->left->left = new TreeNode(1);
//	head->right->left = new TreeNode(7);
//	head->right->left->left = new TreeNode(6);
//	//head->right->left->right = new TreeNode(6);
//	head->right->right = new TreeNode(10);
//	head->right->right->left = new TreeNode(9);
//	head->right->right->right = new TreeNode(11);
//	Print_Tree(head, 11);
//    int n = 10;
//    f(vv, v, head, n);
//    for (vector<vector<int>>::iterator ite = (*vv).begin(); ite != (*vv).end(); ite++)
//    {
//        for (vector<int>::iterator it = (*ite).begin(); it != (*ite).end(); it++)
//        {
//            cout << *it << " ";
//        }
//        cout << endl;
//		cout << "test" << endl;
//    }
//	return 0;
//}