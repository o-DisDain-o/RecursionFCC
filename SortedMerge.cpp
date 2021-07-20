//Question Link : https://leetcode.com/problems/merge-two-sorted-lists/

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *A, ListNode *B)
    {
        if (A == NULL)
            return B;
        if (B == NULL)
            return A;

        if (A->val < B->val)
        {
            A->next = mergeTwoLists(A->next, B);
            return A;
        }
        else
            B->next = mergeTwoLists(A, B->next);

        return B;
    }
};