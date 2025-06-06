// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : First Unique Character in a String
// link : https://leetcode.com/problems/first-unique-character-in-a-string/

class Solution
{
public:
    int firstUniqChar(string s)
    {
        vector<int> v(26);
        for (auto ch : s)
            v[ch - 'a']++;
        for (size_t i = 0; i < s.size(); i++)
            if (v[s[i] - 'a'] == 1)
                return i;
        return -1;
    }
};