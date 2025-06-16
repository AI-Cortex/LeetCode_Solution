// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : N-Repeated Element in Size 2N Array
// link : https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

class Solution
{
public:
    int repeatedNTimes(vector<int> &nums)
    {
        unordered_set<int> st;
        for (auto n : nums)
        {
            if (st.count(n))
                return n;
            st.insert(n);
        }
        return 0;
    }
};