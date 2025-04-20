// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Palindrome Number
// link : https://leetcode.com/problems/palindrome-number/

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0 || (x % 10 == 0 && x > 0))
            return false;

        int n = 0;
        while (n < x)
        {
            n = n * 10 + x % 10;
            x /= 10;
        }
        return x == n || x == n / 10;
    }
};