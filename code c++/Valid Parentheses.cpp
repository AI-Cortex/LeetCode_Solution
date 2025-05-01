// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Valid Parentheses
// link : https://leetcode.com/problems/valid-parentheses

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        st.push('#');
        for (auto ch : s)
        {
            if (ch == '(' || ch == '{' || ch == '[')
                st.push(ch);
            else if ((st.top() == '(' && ch == ')') || (st.top() == '[' && ch == ']') || (st.top() == '{' && ch == '}'))
                st.pop();
            else
                return 0;
        }
        return st.size() == 1;
    }
};