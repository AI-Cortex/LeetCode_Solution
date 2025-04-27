// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Remove Duplicates from Sorted List
// link : https://leetcode.com/problems/remove-duplicates-from-sorted-list/

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == nullptr)
            return nullptr;
        ListNode *past = head;
        ListNode *root = head->next;
        while (root != nullptr)
        {
            if (past->val != root->val)
            {
                past->next = root;
                past = root;
            }
            root = root->next;
        }
        past->next = root;
        return head;
    }
};