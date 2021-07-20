// question link : https: //leetcode.com/problems/reverse-linked-list/

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode *temp = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;

        return temp;
    }
};