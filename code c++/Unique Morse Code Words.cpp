// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Unique Morse Code Words
// link : https://leetcode.com/problems/unique-morse-code-words/

class Solution
{
public:
    int uniqueMorseRepresentations(vector<string> &words)
    {
        vector<string> code = {".-", "-...", "-.-.", "-..", ".", "..-.",
                               "--.", "....", "..", ".---", "-.-", ".-..",
                               "--", "-.", "---", ".--.", "--.-", ".-.",
                               "...", "-", "..-", "...-", ".--", "-..-",
                               "-.--", "--.."};
        set<string> st;

        for (auto word : words)
        {
            string s;
            for (auto ch : word)
                s += code[ch - 'a'];

            st.insert(s);
        }
        return st.size();
    }
};