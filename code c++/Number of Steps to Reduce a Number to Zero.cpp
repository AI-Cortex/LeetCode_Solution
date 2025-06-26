// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Number of Steps to Reduce a Number to Zero
// link : https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

class Solution
{
public:
    int numberOfSteps(int num)
    {
        int t = 1;
        while (num > 1)
        {

            if (num & 1)
                t++;
            t++;
            num /= 2;
        }
        if (num == 0)
            return 0;
        return t;
    }
};