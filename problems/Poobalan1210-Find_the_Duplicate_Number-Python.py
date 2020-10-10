'''
 * Solution to Find the Duplicate Number at LeetCode in Python
 *
 * author: Poobalan1210
 * ref: https://leetcode.com/problems/find-the-duplicate-number/
 '''
 
 class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        from collections import Counter
        d=dict(Counter(nums))
        for i,j in d.items():
            if j > 1:
                return i
            
                                
