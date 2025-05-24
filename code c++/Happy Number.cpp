// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Happy Number
// link : https://leetcode.com/problems/happy-number/

class Solution
{
public:
    bool isHappy(int n)
    {
        set<int> s;
        while (1)
        {
            if (n == 1)
                return true;
            if (s.count(n))
                return false;
            s.insert(n);
            n = f(n);
        }
    }
    int f(int n)
    {
        int sum = 0;
        int r;
        while (n)
        {
            r = n % 10;
            sum += r * r;
            n /= 10;
        }
        return sum;
    }
};