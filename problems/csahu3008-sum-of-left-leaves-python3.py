
#  * Solution to Linked List Cycle at LeetCode in CPP
#  *
#  * author: csahu3008
#  * ref: https://leetcode.com/problems/sum-of-left-leaves/
 



# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumOfLeftLeaves(self, root: TreeNode) -> int:
        if(root==None):
            return 0
        
        def func(root):
            sums=0
            if(root==None):
                return 0
            
            if(root.left and root.left.left==None and root.left.right==None):
                #left most node
                sums+=root.left.val
                
            elif(root.left):
                #traverse left
                sums+=func(root.left)
                pass
            
            if(root.right):
                #traverse the right
                sums+=func(root.right)

            return sums
        return func(root)