// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Number of Good Pairs
// link : https://leetcode.com/problems/number-of-good-pairs/

class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int n = 0;
        for (size_t i = 0; i < nums.size(); i++)
            for (size_t j = i + 1; j < nums.size(); j++)
                if (nums[i] == nums[j])
                    n++;
        return n;
    }
};