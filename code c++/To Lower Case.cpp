// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : To Lower Case
// link : https://leetcode.com/problems/to-lower-case/

class Solution
{
public:
    string toLowerCase(string s)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        return s;
    }
};