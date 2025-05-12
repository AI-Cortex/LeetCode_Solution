// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Binary Tree Preorder Traversal
// link : https://leetcode.com/problems/binary-tree-preorder-traversal/

class Solution
{
public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> v;
        move(root, v);
        return v;
    }
    void move(TreeNode *root, vector<int> &v)
    {
        if (root == nullptr)
            return;
        v.push_back(root->val);
        move(root->left, v);
        move(root->right, v);
    }
};