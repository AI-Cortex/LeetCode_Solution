// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Robot Return to Origin
// link : https://leetcode.com/problems/robot-return-to-origin/

class Solution
{
public:
    bool judgeCircle(string moves)
    {
        int x(0), y(0);

        for (auto ch : moves)
            switch (ch)
            {
            case 'U':
                y++;
                break;
            case 'D':
                y--;
                break;
            case 'R':
                x++;
                break;
            case 'L':
                x--;
                break;
            }
        return (x || y) == 0;
    }
};