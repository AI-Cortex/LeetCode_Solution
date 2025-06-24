// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Convert a Number to Hexadecimal
// link : https://leetcode.com/problems/convert-a-number-to-hexadecimal/

class Solution
{
public:
    string toHex(int num)
    {
        stringstream ss;
        ss << hex << num;
        return ss.str();
    }
};