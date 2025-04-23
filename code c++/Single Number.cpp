// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Single Number
// link : https://leetcode.com/problems/single-number

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int k = 0;
        for (auto n : nums)
            k ^= n;
        return k;
    }
};