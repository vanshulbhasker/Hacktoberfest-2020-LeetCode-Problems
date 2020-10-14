/**
 * Solution to House-Robber-II at LeetCode in C++
 *
 * author: AasthaVarma
 * ref: https://leetcode.com/problems/house-robber-ii/
 */

class Solution {
public:
    
    int solve(vector<int> a){
        int n = a.size();
        int dp[n+1];
        dp[0] = a[0];
        dp[1] = max(a[0], a[1]);
        
        for(int i=2; i<n; i++){
            dp[i] = max(dp[i-1], dp[i-2]+a[i]);
        }
        return dp[n-1];
    }
    
    int rob(vector<int>& a) {
        int n = a.size();
        if(n==0)
            return 0;
        if(n==1)
            return a[0];
        if(n==2)
            return max(a[0], a[1]);
        
        vector<int> a1(a.begin(), a.end()-1);
        vector<int> a2(a.begin()+1, a.end());
        
        return max(solve(a1), solve(a2));
    }
};
