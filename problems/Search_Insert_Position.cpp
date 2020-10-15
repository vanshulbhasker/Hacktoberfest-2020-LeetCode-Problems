LeetCode Problem Link: https://leetcode.com/problems/search-insert-position/


class Solution {   
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo=0,hi=nums.size()-1;
        while(lo <= hi){   //most efficient solution in C++ using only 1 while loop
            int mid = lo + (hi-lo)/2;
            if(target == nums[mid]) return mid;  //Taking if condition
            else if(target > nums[mid]) lo = mid+1;
            else hi = mid-1;
        }
        return lo;
    }
};



Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
