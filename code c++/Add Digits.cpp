// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Add Digits
// link : https://leetcode.com/problems/add-digits/

class Solution
{
public:
    int addDigits(int num)
    {
        if (num < 10)
            return num;

        int sum = 0;
        while (num)
        {
            sum += num % 10;
            num /= 10;
        }
        return addDigits(sum);
    }
};