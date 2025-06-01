// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Power of Two
// link : https://leetcode.com/problems/power-of-two/

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        return n > 0 && (n & (n - 1)) == 0;
    }
};
