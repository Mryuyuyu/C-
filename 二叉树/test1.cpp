#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) :val(x), left(nullptr), right(nullptr) {}
};



//打印二叉树
void Print_Tree(TreeNode* node, int depth) {
	int i = 0;
	if (node == NULL)
		return;

	if (node->left == NULL && node->right == NULL) {
		for (i = 0; i < depth; i++)
			printf("     ");
		printf("- -->%-2d\n", node->val);
	}
	else {
		Print_Tree(node->right, depth + 1);
		for (i = 0; i < depth; i++)
			printf("     ");
		printf("- -->%-2d\n", node->val);

		Print_Tree(node->left, depth + 1);
	}
}

//vector通用打印函数
template<typename T>
using VectorIterator = typename vector<T>::const_iterator;
template<typename T>
void printVector(const vector<T>& v) {
	VectorIterator <T> ite;
	for (ite = v.begin(); ite != v.end(); ite++)
	{
		cout << *ite << " ";
	}
	cout << endl;
}

//vector<vector<>>通用打印函数
template<typename T>
using Vector2 = typename vector<vector<T>>::const_iterator;
template<typename T>
void printVector2(const vector<vector<T>>& v) {
	Vector2 <T> ite;
	for (ite = v.begin(); ite != v.end(); ite++) {
		printVector(*ite);
	}
	cout << endl;
}

//前序遍历迭代法
vector<int> preorderTraversal(TreeNode* root)
{
	stack<TreeNode*> stk;
	vector<int> result;
	if (root == nullptr)return result;
	stk.push(root);
	while (!stk.empty())
	{
		TreeNode* node = stk.top();
		stk.pop();
		result.push_back(node->val);

		if (node->right != nullptr)stk.push(node->right);
		if (node->left != nullptr)stk.push(node->left);
	}
	return result;
}

//中序遍历迭代法
vector<int> inorderTraversal(TreeNode* root)
{
	stack<TreeNode*> stk;
	vector<int> result;
	TreeNode* cur = root;
	while (cur != nullptr || !stk.empty())
	{
		if (cur != nullptr)
		{
			stk.push(cur);
			cur = cur->left;
		}
		else
		{
			cur = stk.top();
			stk.pop();
			if (cur != nullptr)result.push_back(cur->val);
			cur = cur->right;
		}
	}
	return result;
}


//后序遍历迭代法
vector<int> postorderTraversal(TreeNode* root)
{
	stack<TreeNode*> stk;
	vector<int> result;
	if (root == nullptr) return result;
	stk.push(root);

	while (!stk.empty())
	{
		TreeNode* node = stk.top();
		stk.pop();
		result.push_back(node->val);

		if (node->left) stk.push(node->left);
		if (node->right) stk.push(node->right);
	}
	reverse(result.begin(), result.end());
	return result;
}

//层序遍历（广度优先遍历）
vector<vector<int>> levelOrder(TreeNode* root)
{
	queue<TreeNode*>que;
	if (root != nullptr) que.push(root);
	vector<vector<int>> result;
	while (!que.empty())
	{
		int size = que.size();
		vector<int> v;
		for (int i = 0; i < size; i++)
		{
			TreeNode* node = que.front();
			que.pop();
			v.push_back(node->val);
			if (node->left) que.push(node->left);
			if (node->right) que.push(node->right);
		}
		result.push_back(v);
	}
	return result;
}

//二叉树从根节点到叶子节点的最大子路径和1
int maxlengthsum(TreeNode* root, int ret)
{
	if (!root) return 0;
	int l = maxlengthsum(root->left,ret);
	int r = maxlengthsum(root->right, ret);
	ret = max(ret, max(max(0, l) + root->val, max(0, r) + root->val));
	return ret;

}
//二叉树从根节点到叶子节点的最大子路径和2
int maxlengthsum2(TreeNode* root)
{
	if (!root) return 0;
	int l = maxlengthsum2(root->left);
	int r = maxlengthsum2(root->right);
	int x = root->val + max(l, r);
	return x;

}
int main()
{

	TreeNode* head = new TreeNode(5);
	head->left = new TreeNode(4);
	head->right = new TreeNode(3);
	head->left->left = new TreeNode(1);
	head->left->right = new TreeNode(2);
	Print_Tree(head, 4);

	//vector<int> result;
	//vector<vector<int>> res;
	////result = preorderTraversal(head);
	////result = inorderTraversal(head);
	////result = postorderTraversal(head);
	////printVector(result);

	//res = levelOrder(head);
	//printVector2(res);

	//int res = maxlengthsum(head, INT_MIN);
	int res = maxlengthsum2(head);
	cout << res;
	
	return 0;
}