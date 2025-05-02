// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Find the Index of the First Occurrence in a String
// link : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if (haystack.size() < needle.size())
            return -1;
        size_t len = haystack.size() - needle.size() + 1;
        for (size_t i = 0; i < len; i++)
        {
            if (haystack[i] == needle[0])
            {
                bool flag = true;
                for (size_t j = 1; j < needle.size(); j++)
                    if (haystack[i + j] != needle[j])
                    {
                        flag = false;
                        break;
                    }
                if (flag)
                    return i;
            }
        }
        return -1;
    }
};