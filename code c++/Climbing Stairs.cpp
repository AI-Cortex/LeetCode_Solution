// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Climbing Stairs
// link : https://leetcode.com/problems/climbing-stairs/

class Solution
{
public:
    int climbStairs(int n)
    {
        int a = 1, b = 1, temp;
        for (int i = 2; i <= n; i++)
        {
            temp = b;
            b = a + b;
            a = temp;
        }
        return b;
    }
};