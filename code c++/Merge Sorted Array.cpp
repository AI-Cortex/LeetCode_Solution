// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Merge Sorted Array
// link : https://leetcode.com/problems/merge-sorted-array/

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = m + n - 1;
        int i1 = m - 1;
        int i2 = n - 1;

        while (i2 >= 0 && i1 >= 0)
        {
            if (nums2[i2] > nums1[i1])
                nums1[i--] = nums2[i2--];
            else
                nums1[i--] = nums1[i1--];
        }
        while (i2 >= 0)
            nums1[i--] = nums2[i2--];
    }
};