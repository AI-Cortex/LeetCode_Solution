// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Fibonacci Number
// link : https://leetcode.com/problems/fibonacci-number/

class Solution
{
public:
    int fib(int n)
    {
        int a = 1, b = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            c = a + b;
            tie(a, b) = make_tuple(b, c);
        }
        return c;
    }
};