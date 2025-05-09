// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Balanced Binary Tree
// link : https://leetcode.com/problems/balanced-binary-tree/

class Solution
{
public:
    bool isBalanced(TreeNode *root)
    {
        bool ans = true;
        height(root, ans);
        return ans;
    }
    int height(TreeNode *root, bool &ans)
    {
        if (root == nullptr || ans == false)
            return 0;
        int l = height(root->left, ans);
        int r = height(root->right, ans);
        if (abs(l - r) > 1)
            ans = false;
        return max(l, r) + 1;
    }
};