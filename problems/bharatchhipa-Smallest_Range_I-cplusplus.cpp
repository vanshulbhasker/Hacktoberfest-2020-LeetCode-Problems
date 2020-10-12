/**
 * Solution to Smallest Range I at LeetCode in C++
 *
 * author: Bharat chhipa
 * ref: https://leetcode.com/problems/smallest-range-i/
 */


class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        
        int maxv = *max_element(A.begin(),A.end());
        int minv = *min_element(A.begin(),A.end());
    
        return max(0,maxv-K-minv-K);
    }
};
