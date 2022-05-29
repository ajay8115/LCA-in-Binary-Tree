#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define forn for (int i = 0; i < n; i++)
#define srt(v) sort(v.begin(), v.end());
#define rev(v) reverse(v.begin(), v.end());
#define kk '\n'
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

class Solution
{
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (!p and !q)
        {
            return NULL;
        }

        if (root->val == p->val or root->val == q->val)
        {
            return root;
        }

        TreeNode *left = NULL;
        TreeNode *right = NULL;

        if (root->left)
        {
            left = lowestCommonAncestor(root->left, p, q);
        }

        if (root->right)
        {
            right = lowestCommonAncestor(root->right, p, q);
        }

        if (left != NULL and right != NULL)
        {
            return root;
        }

        if (left==NULL)
        {
            return right;
        }

        return left;
        
    }
};