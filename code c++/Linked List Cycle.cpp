// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Linked List Cycle
// link : https://leetcode.com/problems/linked-list-cycle/

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        ListNode *one = head, *two = head;
        while (two && two->next)
        {
            one = one->next;
            two = two->next->next;
            if (one == two)
                return 1;
        }
        return 0;
    }
};