/* Longest Increasing Subsequence. leetcode problem no. 300

author : AnkitaM84
ref : https://leetcode.com/problems/longest-increasing-subsequence/
*/

class Solution {
    public int lengthOfLIS(int[] nums) {
        int n = nums.length;
        int m = 1;
        if(n == 0) {
            return 0;
        }
        int dp[] = new int[n];
        dp[0] = 1;
        for(int i = 1; i < n; i++) {
            int max = -1;
            for(int j = 0; j < i; j++) {
                if(nums[j] < nums[i] && dp[j] > max) {
                    max = dp[j];
                }
            }
            dp[i] = Math.max(1, max+1);
            m = Math.max(m, dp[i]);
        }
        return m;
    }
}
