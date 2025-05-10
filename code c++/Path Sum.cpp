// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Path Sum
// link : https://leetcode.com/problems/path-sum/

class Solution
{
public:
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        bool end = false;
        if (root)
            f(root, targetSum, 0, end);
        return end;
    }
    void f(TreeNode *root, int targetSum, int current_sum, bool &end)
    {
        if (end || root == nullptr)
            return;

        int sum = current_sum + root->val;
        if (targetSum == sum && root->left == nullptr && root->right == nullptr)
            end = 1;
        else
        {
            f(root->left, targetSum, sum, end);
            f(root->right, targetSum, sum, end);
        }
    }
};