// my profile : https://leetcode.com/u/AI-Cortex/
// Leetcode solution github repository : https://github.com/AI-Cortex/LeetCode_Solution
//////////////////////////////////////////////////////////////////////
// name : Insert Greatest Common Divisors in Linked List
// link : https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/

class Solution
{
public:
    ListNode *insertGreatestCommonDivisors(ListNode *head)
    {
        ListNode *root = head;
        while (head->next != nullptr)
        {
            int n = GCD(head->val, head->next->val);
            ListNode *node = new ListNode(n, head->next);
            head->next = node;

            head = node->next;
        }
        return root;
    }
    int GCD(int a, int b)
    {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};