// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Sqrt(x)
// link : https://leetcode.com/problems/sqrtx

class Solution
{
public:
    int mySqrt(int x)
    {
        int a = 0, b = x;
        long long mid = 0;
        while (a <= b)
        {
            mid = (a + b) / 2;
            if (mid * mid == x)
                return mid;
            if (mid * mid < x)
                a = mid + 1;
            else
                b = mid - 1;
        }
        if (mid * mid > x)
            mid--;
        return mid;
    }
};