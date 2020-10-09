/**
 * Solution to Linked List Cycle at LeetCode in CPP
 *
 * author: geekaditi
 * ref: https://leetcode.com/problems/linked-list-cycle/
 */
 
 Solution for Linked List Cycle problem in C++:
 
 class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast && fast->next ){
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast){
                return true;
            }
        }
        
        return false;
    }
};

