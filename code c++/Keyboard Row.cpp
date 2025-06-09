// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Keyboard Row
// link : https://leetcode.com/problems/keyboard-row/

class Solution
{
public:
    vector<string> findWords(vector<string> &words)
    {
        vector<set<char>> keyboard = {{'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'},
                                      {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'},
                                      {'z', 'x', 'c', 'v', 'b', 'n', 'm'}};
        vector<string> ans;
        for (auto word : words)
        {
            auto out = word;
            transform(word.begin(), word.end(), word.begin(), [](unsigned char c)
                      { return tolower(c); });
            set<char> w = set<char>(word.begin(), word.end());

            for (auto row : keyboard)
            {
                set<char> result;
                set_intersection(
                    row.begin(), row.end(),
                    w.begin(), w.end(),
                    std::inserter(result, result.begin()));
                if (result.size() == w.size())
                {
                    ans.push_back(out);
                    break;
                }
            }
        }
        return ans;
    }
};