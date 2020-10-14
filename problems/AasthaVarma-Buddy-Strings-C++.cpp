/**
 * Solution to Buddy Strings at LeetCode in C++
 *
 * author: AasthaVarma
 * ref: https://leetcode.com/problems/buddy-strings/
 */

class Solution {
public:
    bool buddyStrings(string A, string B) {
        int n = A.length();
        int nb = B.length();
        if(n!=nb)
            return false;
        int cnt=0;
        unordered_map<char, int> m1, m2;
        for(int i=0; i<n; i++){
            if(A[i] != B[i])
                cnt++;
            m1[A[i]]++;
            m2[B[i]]++;
        }
        if(m1==m2){
             if(cnt==2){
                return true;
            }

            if(cnt==0){
                for (auto x:m1){
                    if(x.second>=2)
                        return true;
                }
            }
        }
                
       
        return false;
    }
};
