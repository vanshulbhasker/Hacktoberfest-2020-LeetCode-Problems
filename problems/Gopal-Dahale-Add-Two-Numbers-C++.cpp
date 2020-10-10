/**
 * Solution to Add Two Numbers at LeetCode in C++
 *
 * author: Gopal-Dahale
 * ref: https://leetcode.com/problems/add-two-numbers/
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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {

        ListNode *t; // temporary ListNode pointer

        // holds result of sum of lists  l1 and l2
        ListNode *res = new ListNode(-1); // temporary holds -1

        // returns the head of result
        ListNode *head = res;

        int sum = 0; // holds sum
        int c = 0;   // holds carry
        while (l1 != NULL and l2 != NULL)
        {
            sum = l1->val + l2->val + c;

            // create a new node with val = sum%10 and next = nullptr
            res->next = new ListNode(sum % 10);
            c = sum / 10;    // extract the carry
            res = res->next; // move to next node

            // update l1 and l2
            l1 = l1->next;
            l2 = l2->next;
        }

        // if we reach at the end of both the linked lists
        // we add the carry to res if it is non -zero and return the head of res
        if (l1 == NULL && l2 == NULL)
        {
            if (c)
                res->next = new ListNode(c);
            return head->next;
        }
        // else we put the non NULL list pointer in 't'
        else if (l1 == NULL)
            t = l2;
        else
            t = l1;

        // we do the similar process for the remaining part of list
        while (t != NULL)
        {
            sum = t->val + c;
            res->next = new ListNode(sum % 10);
            res = res->next;
            c = sum / 10;
            t = t->next;
        }
        if (c)
            res->next = new ListNode(c);

        return head->next;
    }
};