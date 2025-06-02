// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Missing Number
// link : https://leetcode.com/problems/missing-number/

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size() * (nums.size() + 1) / 2;
        n -= accumulate(nums.begin(), nums.end(), 0);
        return n;
    }
};