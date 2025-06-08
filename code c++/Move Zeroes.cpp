// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Move Zeroes
// link : https://leetcode.com/problems/move-zeroes/

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {

        size_t i = 0;
        for (auto n : nums)
            if (n)
                nums[i++] = n;
        for (; i < nums.size(); i++)
            nums[i] = 0;
    }
};