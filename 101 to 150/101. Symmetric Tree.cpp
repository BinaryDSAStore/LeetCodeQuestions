#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool foo(TreeNode *p, TreeNode *q)
{
    if (!p || !q)
        return p == q;

    return p->val == q->val && foo(p->left, q->right) && foo(p->right, q->left);
}

bool isSymmetric(TreeNode *root)
{
    return foo(root->left, root->right);
}