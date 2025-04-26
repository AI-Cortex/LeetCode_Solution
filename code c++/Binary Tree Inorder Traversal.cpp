// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Binary Tree Inorder Traversal
// link : https://leetcode.com/problems/binary-tree-inorder-traversal/

class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> v;
        f(root, v);
        return v;
    }
    void f(TreeNode *root, vector<int> &v)
    {
        if (root == nullptr)
            return;
        f(root->left, v);
        v.push_back(root->val);

        f(root->right, v);
    }
};