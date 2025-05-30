// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Implement Stack using Queues
// link : https://leetcode.com/problems/implement-stack-using-queues/

class MyStack
{

    void move(queue<int> &q1, queue<int> &q2)
    {
        while (q1.size() > 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
    }

public:
    queue<int> q, qt;
    MyStack() {}

    void push(int x)
    {
        q.push(x);
    }

    int pop()
    {

        int t = top();
        move(q, qt);
        q = qt;
        qt = queue<int>();
        return t;
    }

    int top()
    {
        return q.back();
    }

    bool empty()
    {
        return q.empty();
    }
};