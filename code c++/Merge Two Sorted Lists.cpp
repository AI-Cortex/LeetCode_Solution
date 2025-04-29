// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Merge Two Sorted Lists
// link : https://leetcode.com/problems/merge-two-sorted-lists/

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *head = new ListNode(0);
        ListNode *root = head;
        while (list1 != nullptr && list2 != nullptr)
        {
            if (list1->val < list2->val)
            {
                root->next = list1;
                list1 = list1->next;
            }
            else
            {
                root->next = list2;
                list2 = list2->next;
            }
            root = root->next;
        }
        while (list1 != nullptr)
        {
            root->next = list1;
            list1 = list1->next;
            root = root->next;
        }
        while (list2 != nullptr)
        {
            root->next = list2;
            list2 = list2->next;
            root = root->next;
        }
        return head->next;
    }
};