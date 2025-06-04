// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Power of Three
// link : https://leetcode.com/problems/power-of-three/

class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        return n > 0 && 1162261467 % n == 0;
    }
};