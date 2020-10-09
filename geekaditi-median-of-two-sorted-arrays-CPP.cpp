/**
 * Solution to Median of two sorted Arrays at LeetCode in CPP
 *
 * author: geekaditi
 * ref: https://leetcode.com/problems/median-of-two-sorted-arrays/
 */
 
 class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        for(int i=0;i<n;i++){
            nums1.push_back(nums2[i]);
        }
        
        int newsize=nums1.size();
        

        
        sort(nums1.begin(),nums1.end());
    
        
        
        if(newsize%2==0){
            // cout<<(double(nums1[newsize/2]) + double(nums1[(newsize/2)-1]))/2;
            
         double ans= (double(nums1[newsize/2]) + double(nums1[(newsize/2)-1]))/2;
            return ans;
        }
        
        else{ return nums1[newsize/2];}
    }
};
