/**
 * Solution to Sort Array by Parity problem at LeetCode in C++
 *
 * author: varougm
 * ref: https://leetcode.com/problems/sort-array-by-parity/
 */

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) 
    {
        vector<int > v;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]%2==0)
                v.push_back(A[i]);
        }
         for(int i=0;i<A.size();i++)
        {
            if(A[i]%2!=0)
                 v.push_back(A[i]);
        }
      return v;  
    }
};
