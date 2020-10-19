/**
 * Solution to <problem-name> at LeetCode in <language>
 *
 * author: git-aryan
 * ref: https://leetcode.com/problems/remove-element/
 */

 class Solution {
    public int removeElement(int[] nums, int val) {
        int j=0;
        for(int i=0; i<nums.length; i++)
        {
            if(nums[i]!=val)
            {
                nums[j] = nums[i];
                j++;
            }
        }
        for(int i=0; i<j; i++)
        {
            System.out.println(nums[i]);
        }
        return j;
    }
}
