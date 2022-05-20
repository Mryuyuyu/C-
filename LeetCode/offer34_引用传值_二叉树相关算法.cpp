//#include<iostream>
//#include<vector>
//#include<unordered_map>
//#include<string>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode(int x) :val(x), left(nullptr), right(nullptr) {}
//};
//
////返回等于target的子树，从根到叶子
//void f(vector<vector<int>>& vv, vector<int>& v, TreeNode* root, int target)
//{
//	if (root == nullptr)
//		return;
//
//	v.push_back(root->val);
//	target -= root->val;
//	if (target == 0 && root->left == nullptr && root->right == nullptr)
//		vv.push_back(v);
//
//	f(vv, v, root->left, target);
//	f(vv, v, root->right, target);
//
//	v.pop_back();
//}
//
//class Solution {
//public:
//	string dfs(TreeNode* root, vector<TreeNode*>& res, unordered_map<string, int>& mp) {
//		if (root == NULL) return "";
//		//二叉树先序序列化
//		string str = to_string(root->val) + "," + dfs(root->left, res, mp) + "," + dfs(root->right, res, mp);
//
//		if (mp[str] == 1) {
//			res.push_back(root);
//		}
//		mp[str]++;
//		return str;
//	}
//
//	vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
//		vector<TreeNode*> res;
//		unordered_map<string, int> mp;
//		dfs(root, res, mp);
//		return res;
//	}
//
//};
//
////打印二叉树
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
////unordered_map的打印函数模板
//template<typename T1, typename T2>
//using unordered_MapIterator = typename unordered_map<T1, T2>::const_iterator;
//template<typename T1, typename T2>
//void printunordered_Map(const unordered_map<T1, T2>& themap) {
//	unordered_MapIterator<T1, T2> ite;
//
//	cout << endl << "unordered_map:" << endl;
//	for (ite = themap.begin(); ite != themap.end(); ++ite) {
//		cout << "key:" << ite->first << "\t" << "value:" << ite->second << endl;
//	}
//}
//
//int main()
//{
//	//如何给一个二叉树的层序遍历的序列，构造出这个二叉树，反序列化，待实现
//	
//	//**********************************************************
//	//vector<vector<int>> vv;
//	//vector<int> v ;
//	////v.push_back(3);
//	////vv.push_back(v);
//	//TreeNode* head = new TreeNode(5);
//	//head->left = new TreeNode(3);
//	//head->right = new TreeNode(1);
//	//head->left->left = new TreeNode(2);
//	//head->left->right = new TreeNode(4);
//	////head->left->left->left = new TreeNode(1);
//	//head->right->left = new TreeNode(3);
//	//head->right->left->left = new TreeNode(2);
//	////head->right->left->right = new TreeNode(6);
//	//head->right->right = new TreeNode(10);
//	//head->right->right->left = new TreeNode(9);
//	//head->right->right->right = new TreeNode(11);
//	//Print_Tree(head, 4);
//	//***********************************************************************
//	TreeNode* head = new TreeNode(1);
//	head->left = new TreeNode(2);
//	head->right = new TreeNode(3);
//	head->left->left = new TreeNode(4);
//	//head->left->left->left = new TreeNode(1);
//	head->right->left = new TreeNode(2);
//	head->right->left->left = new TreeNode(4);
//	//head->right->left->right = new TreeNode(6);
//	head->right->right = new TreeNode(4);
//	Print_Tree(head, 4);
//	//***********************************************************************
//	//int n = 10;
//	//f(vv, v, head, n);
//	//for (vector<vector<int>>::iterator ite = vv.begin(); ite != vv.end(); ite++)
//	//{
//	//	for (vector<int>::iterator it = (*ite).begin(); it != (*ite).end(); it++)
//	//	{
//	//		cout << *it << " ";
//	//	}
//	//	cout << endl;
//	//	//cout << "test" << endl;
//	//}
//	Solution solution;
//	string s;
//	vector<TreeNode*> res;
//	unordered_map<string, int> mp;
//	s=solution.dfs(head, res, mp);
//	printunordered_Map(mp);
//	return 0;
//}