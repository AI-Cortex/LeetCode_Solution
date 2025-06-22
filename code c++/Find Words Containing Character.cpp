// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Find Words Containing Character
// link : https://leetcode.com/problems/find-words-containing-character/

class Solution
{
public:
    vector<int> findWordsContaining(vector<string> &words, char x)
    {
        vector<int> v;
        int i = 0;
        for (auto word : words)
        {
            if (word.find(x) != string::npos)
                v.push_back(i);
            i++;
        }
        return v;
    }
};