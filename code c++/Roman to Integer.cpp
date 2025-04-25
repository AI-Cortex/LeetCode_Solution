// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Roman to Integer
// link : https://leetcode.com/problems/roman-to-integer/

class Solution
{

public:
    int romanToInt(string s)
    {
        int n = 0;

        for (size_t n = 0; n < s.size(); ++n)
        {
            switch (s[n])
            {
            case 'M':
                n += 1000;
                break;
            case 'D':
                n += 500;
                break;
            case 'C':
                n += 100 * ((s[n + 1] == 'M' || s[n + 1] == 'D') ? -1 : 1);
                break;
            case 'L':
                n += 50;
                break;
            case 'X':
                n += 10 * ((s[n + 1] == 'C' || s[n + 1] == 'L') ? -1 : 1);
                break;
            case 'V':
                n += 5;
                break;
            case 'I':
                n += 1 * ((s[n + 1] == 'X' || s[n + 1] == 'V') ? -1 : 1);
                break;
            }
        }
        return n;
    }
};