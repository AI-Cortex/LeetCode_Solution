// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Word Pattern
// link : https://leetcode.com/problems/word-pattern/

class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        map<char, string> m;
        map<string, char> m2;
        stringstream ss(s);
        string word;

        for (auto ch : pattern)
        {
            if (!(ss >> word))
                return false;
            if (m.count(ch) == 0 && m2.count(word) == 0)
            {
                m[ch] = word;
                m2[word] = ch;
            }
            else if (m[ch] != word || m2[word] != ch)
                return false;
        }

        if ((ss >> word))
            return false;
        return true;
    }
};