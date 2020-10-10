/**
 * Solution to Merge Two Sorted Lists at LeetCode in C++
 *
 * author: Gopal-Dahale
 * ref: https://leetcode.com/problems/merge-two-sorted-lists/
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *t; // temporary ListNode pointer

        // holds result of merged lists l1 and l2
        ListNode *res = new ListNode(-1);

        // returns the head of result
        ListNode *head = res;

        while (l1 != NULL and l2 != NULL)
        {

            // append the smaller value from l1 and l2 into res
            if (l1->val < l2->val)
            {
                res->next = new ListNode(l1->val);
                l1 = l1->next;
            }
            else
            {
                res->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            res = res->next;
        }
        // if we reach at the end of both the linked lists
        // we return head of result
        if (l1 == NULL && l2 == NULL)
        {
            return head->next;
        }
        // else we put the non NULL list pointer in 't'
        else if (l1 == NULL)
            t = l2;
        else
            t = l1;

        // append the remaining part of list
        while (t != NULL)
        {
            res->next = new ListNode(t->val);
            t = t->next;
            res = res->next;
        }
        return head->next;
    }
};