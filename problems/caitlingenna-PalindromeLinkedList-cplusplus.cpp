/**
 * Solution to Palindrome Linked List problem at LeetCode in C++
 *
 * author: caitlingenna
 * ref: https://leetcode.com/problems/palindrome-linked-list
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
 
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int size = 0;
        string s;
        ListNode* tempHead = head;
        bool pal = true;
        while(tempHead != NULL)
        {
            size++;
            int tempVal = tempHead->val;
            s.push_back(tempVal);
            tempHead = tempHead->next;
        }
        if(size == 1)
            return true;
        tempHead = head;
        for(int i = size-1; i >= size/2 && pal == true; i--)
        {
            char tempVal = tempHead->val;
            char tempS = s[i];
            cout << tempS << " "<<tempVal;
            if(tempS != tempVal)
                pal = false;
            tempHead = tempHead->next;
        }
        return pal;
    }
};
