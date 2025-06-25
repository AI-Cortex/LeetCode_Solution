// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Max Consecutive Ones
// link : https://leetcode.com/problems/max-consecutive-ones/

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int t = 0;
        int m = 0;
        for (auto n : nums)
        {
            if (n)
                t++;
            else
            {
                m = max(m, t);
                t = 0;
            }
        }
        m = max(m, t);
        return m;
    }
};