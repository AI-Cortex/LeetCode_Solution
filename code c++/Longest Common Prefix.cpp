// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Longest Common Prefix
// link : https://leetcode.com/problems/longest-common-prefix/

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string ans = "";
        int n = strs.size();
        if (n == 0)
            return ans;
        int min_len = INT_MAX;

        for (int i = 0; i < n; i++)
            min_len = min(min_len, (int)strs[i].size());

        for (int i = 0; i < min_len; i++)
        {
            for (int j = 1; j < n; j++)
                if (strs[j][i] != strs[0][i])
                    return ans;

            ans += strs[0][i];
        }
        return ans;
    }
};