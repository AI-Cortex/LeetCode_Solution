// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Reverse Linked List
// link : https://leetcode.com/problems/reverse-linked-list/

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        if (head == nullptr)
            return head;
        ListNode *start, *link, *t;
        start = nullptr;

        while (head)
        {
            t = head;
            head = head->next;
            t->next = start;
            start = t;
        }
        return start;
    }
};