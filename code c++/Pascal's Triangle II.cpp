// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Pascal's Triangle II
// link : https://leetcode.com/problems/pascals-triangle-ii/

class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> row(rowIndex + 1, 1);
        for (int i = 1; i <= 4; i++)
            for (int j = i - 1; j >= 1; j--)
                row[j] = row[j - 1] + row[j];
        return row;
    }
};