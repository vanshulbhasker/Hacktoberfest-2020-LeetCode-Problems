
#  * Solution to minimum depth of binary tree at leetcode in python3
#  *
#  * author: csahu3008
#  * ref: https://leetcode.com/problems/minimum-depth-of-binary-tree/
 

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDepth(self, root: TreeNode) -> int:
        if(root==None):
            return 0
        left_min=0
        right_min=0
        
        if(root.right==None and root.left==None):
            return 1

        left_min=self.minDepth(root.left)
        right_min=self.minDepth(root.right)
        if(left_min!=0 and right_min!=0):
            return min(left_min,right_min)+1
        elif(right_min==0):
            return left_min+1
        else:
            return right_min+1
