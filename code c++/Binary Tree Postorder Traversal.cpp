// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Binary Tree Postorder Traversal
// link : https://leetcode.com/problems/binary-tree-postorder-traversal/

class Solution
{
public:
    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> v;
        move(root, v);
        return v;
    }
    void move(TreeNode *root, vector<int> &v)
    {
        if (root == nullptr)
            return;
        move(root->left, v);
        move(root->right, v);
        v.push_back(root->val);
    }
};