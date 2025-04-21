// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Remove Duplicates from Sorted Array
// link : https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        size_t len = nums.size();
        int past = -101, j = 0;
        for (size_t i = 0; i < len; i++)
        {
            if (nums[i] != past)
            {
                nums[j++] = nums[i];
                past = nums[i];
            }
        }
        return j;
    }
};