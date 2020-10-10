/**
 * Solution to Wiggle sort II at LeetCode in CPP
 *
 * author: ashima0699
 * ref:https:https://leetcode.com/problems/wiggle-sort-ii/
 */
 /**
 class Solution {
public:
    void wiggleSort(vector<int>& nums) {
         vector<int> temp = nums;
        sort(temp.begin(), temp.end());
        
        int i = (temp.size()-1)/2;
        int j = temp.size()-1;
        int k = 0;
        while(k < nums.size())
        {
            if(k&1)
                nums[k++] = temp[j--];
            else
                nums[k++] = temp[i--];
        }
    }
};
