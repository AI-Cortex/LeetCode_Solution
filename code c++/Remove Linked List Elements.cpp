// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Remove Linked List Elements
// link : https://leetcode.com/problems/remove-linked-list-elements/

class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *a, *current;
        a = new ListNode(0);
        a->next = head;
        current = a;

        while (current->next)
        {
            if (current->next->val == val)
                current->next = current->next->next;
            else
                current = current->next;
        }
        return a->next;
    }
};