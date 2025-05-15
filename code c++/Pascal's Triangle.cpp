// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Pascal's Triangle
// link : https://leetcode.com/problems/pascals-triangle/

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> triangle;
        triangle.push_back({1});

        for (int i = 1; i < numRows; i++)
        {
            vector<int> v(i + 1, 1);
            for (size_t j = 1; j < i; j++)
                v[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            triangle.push_back(v);
        }
        return triangle;
    }
};