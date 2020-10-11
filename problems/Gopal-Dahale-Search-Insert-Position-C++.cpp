/**
 * Solution to Search Insert Position at LeetCode in C++
 *
 * author: Gopal-Dahale
 * ref: https://leetcode.com/problems/search-insert-position/
 */

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        /*
            lower_bound(start_ptr, end_ptr, num)

            * Returns pointer to “position of num” if container contains 1 occurrence of num.
            * Returns pointer to “first position of num” if container contains multiple occurrence of num. 
            * Returns pointer to “position of next higher number than num” if container does not contain occurrence of num.
        */
        auto res = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        return res;
    }
};