// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Minimum Depth of Binary Tree
// link : https://leetcode.com/problems/minimum-depth-of-binary-tree/

class Solution
{
public:
    int minDepth(TreeNode *root)
    {
        if (root == nullptr)
            return 0;

        queue<TreeNode *> q;
        q.push(root);
        q.push(nullptr);
        int n = 1;
        TreeNode *node;

        while (true)
        {
            node = q.front();
            q.pop();
            if (node == nullptr)
            {
                q.push(nullptr);
                n++;
            }
            else if (node->left == nullptr && node->right == nullptr)
                return n;

            else
            {
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
        }
    }
};