// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Summary Ranges
// link : https://leetcode.com/problems/summary-ranges/

class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        if (nums.size() == 0)
            return {};

        vector<pair<int, int>> v;
        pair<int, int> p;
        p.first = nums[0];

        for (size_t i = 1; i < nums.size(); i++)
        {
            if (nums[i] - 1 != nums[i - 1])
            {
                p.second = nums[i - 1];
                v.push_back(p);
                p.first = nums[i];
            }
        }
        p.second = nums.back();
        v.push_back(p);
        vector<string> s;

        for (auto p : v)
        {
            if (p.first == p.second)
                s.push_back(to_string(p.first));
            else
                s.push_back(to_string(p.first) + "->" + to_string(p.second));
        }

        return s;
    }
};