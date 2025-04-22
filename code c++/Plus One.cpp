// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Plus One
// link : https://leetcode.com/problems/plus-one

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int len = digits.size();
        while (--len > -1)
        {
            if (digits[len] + 1 > 9)
                digits[len] = 0;
            else
            {
                digits[len]++;
                break;
            }
        }
        if (digits[0] == 0)
            digits.insert(digits.begin(), 1);
        return digits;
    }
};