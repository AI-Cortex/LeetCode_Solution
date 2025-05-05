// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Same Tree
// link : https://leetcode.com/problems/same-tree/

class Solution
{
public:
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        bool b = true;
        issametree(p, q, b);
        return b;
    }
    void issametree(TreeNode *p, TreeNode *q, bool &b)
    {
        if (b == false)
            return;

        if (p == nullptr && q == nullptr)
            return;

        if (p == nullptr || q == nullptr || p->val != q->val)
        {
            b = false;
            return;
        }

        issametree(p->left, q->left, b);
        issametree(p->right, q->right, b);
    }
};