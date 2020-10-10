/**
 * Solution to shuffle the array at LeetCode in c++
 *
 * author: Bharat chhipa
 * ref: https://leetcode.com/problems/shuffle-the-array/
 **/
 class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>a;
        int j=nums.size()/2;
        for(int i=0;i<nums.size()/2 &&  j<nums.size();i++)
        {
            a.push_back(nums[i]);
            a.push_back(nums[j]);
            j++;
        }
        return a;
        
    }
};
