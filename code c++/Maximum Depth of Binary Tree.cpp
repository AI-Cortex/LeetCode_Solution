// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Maximum Depth of Binary Tree
// link : https://leetcode.com/problems/maximum-depth-of-binary-tree/

class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        return 1 + max(maxDepth(root->right), maxDepth(root->left));
    }
};