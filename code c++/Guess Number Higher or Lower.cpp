// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Guess Number Higher or Lower
// link : https://leetcode.com/problems/guess-number-higher-or-lower/

class Solution
{
public:
    int guessNumber(int n)
    {
        long long a = 1, b = n;
        int g = (a + b) / 2;
        int out = guess(g);
        while (out != 0)
        {
            if (out < 0)
                b = g - 1;
            else
                a = g + 1;
            g = (a + b) / 2;
            out = guess(g);
        }
        return g;
    }
};