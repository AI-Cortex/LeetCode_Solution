// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Isomorphic Strings
// link : https://leetcode.com/problems/isomorphic-strings/

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        int map_s_to_t[256] = {0};
        int map_t_to_s[256] = {0};

        for (int i = 0; i < s.size(); i++)
        {
            char c1 = s[i];
            char c2 = t[i];

            if (map_s_to_t[c1] == 0 && map_t_to_s[c2] == 0)
            {
                map_s_to_t[c1] = c2;
                map_t_to_s[c2] = c1;
            }
            else
            {
                if (map_s_to_t[c1] != c2 || map_t_to_s[c2] != c1)
                    return false;
            }
        }
        return true;
    }
};