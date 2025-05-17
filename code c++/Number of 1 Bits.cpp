// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Number of 1 Bits
// link : https://leetcode.com/problems/number-of-1-bits/

class Solution
{
public:
    int hammingWeight(int n)
    {
        int t = 0;
        while (n)
        {
            n &= n - 1;
            t++;
        }
        return t;
    }
};