// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Best Time to Buy and Sell Stock
// link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0;
        int buy = prices[0];

        for (auto n : prices)
        {
            if (n - buy < 0)
                buy = n;

            else if (n - buy > profit)
                profit = n - buy;
        }
        return profit;
    }
};