// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Divisible and Non-divisible Sums Difference
// link : https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/

class Solution
{
public:
    int differenceOfSums(int n, int m)
    {
        int num1 = 0, num2 = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % m != 0)
                num1 += i;
            else
                num2 += i;
        }
        return num1 - num2;
    }
};