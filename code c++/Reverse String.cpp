// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Reverse String
// link : https://leetcode.com/problems/reverse-string/

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int len = s.size() - 1;
        for (int i = 0; i <= len / 2; i++)
            swap(s[i], s[len - i]);
    }
};