// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Length of Last Word
// link : https://leetcode.com/problems/length-of-last-word/

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int t = 0;
        for (auto ch = s.rbegin(); ch != s.rend(); ch++)
            if (*ch == ' ' && t == 0)
                continue;
            else if (*ch == ' ')
                break;
            else
                t++;
        return t;
    }
};