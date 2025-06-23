// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Find Closest Person
// link : https://leetcode.com/problems/find-closest-person/

class Solution
{
public:
    int findClosest(int x, int y, int z)
    {
        int d1 = abs(x - z);
        int d2 = abs(y - z);
        if (d1 == d2)
            return 0;
        if (d1 < d2)
            return 1;
        return 2;
    }
};