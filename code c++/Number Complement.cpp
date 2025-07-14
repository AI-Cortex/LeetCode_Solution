// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Number Complement
// link : https://leetcode.com/problems/number-complement/

class Solution
{
public:
    int findComplement(int num)
    {
        int t = num;
        int mask = 0;
        while (t)
        {
            t >>= 1;
            mask = (mask << 1) | 1;
        }
        return num ^ mask;
    }
};