// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Valid Palindrome
// link : https://leetcode.com/problems/valid-palindrome/

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string s2;
        s2.reserve(s.size());
        for (auto ch : s)
            if (isalnum(ch))
                s2.push_back(tolower(ch));
        s = s2;
        reverse(s2.begin(), s2.end());
        return s2 == s;
    }
};