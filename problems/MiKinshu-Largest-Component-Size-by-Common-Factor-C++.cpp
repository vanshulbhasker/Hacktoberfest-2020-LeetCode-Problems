/**
 * Solution to Largest Component Size by Common Factor at LeetCode in C++
 *
 * author: MiKinshu
 * ref: https://leetcode.com/problems/largest-component-size-by-common-factor/
 */
class Solution {
public:
    
    int findpar(int ele, unordered_map<int, int> &par) {
        if(ele == par[ele]) return par[ele];
        return par[ele] = findpar(par[ele], par);
    }
    
    void uni(int j, int ai, unordered_map<int, int> &par, unordered_map<int, int> &size) {
        int par1 = findpar(j, par);
        int par2 = findpar(ai, par);
        if(par1 != par2) {
            if(size[par1] >= size[par2]) {
                par[par2] = par1;
                size[par1] += size[par2];
            }
            else {
                par[par1] = par2;
                size[par2] += size[par1];
            }
        }
    }
    
    int largestComponentSize(vector<int>& A) {
        unordered_map<int, int> size;
        unordered_map<int, int> parent;
        for(auto i : A) {
            parent[i] = i;
            size[i] = 1;
        }
        for(int i = 0; i < (int)A.size(); i++) {
            for(int j = 2; j * j <= A[i]; j++) {
                if(A[i] % j == 0) {
                    if(parent.find(j) == parent.end()) parent[j] = A[i];
                    else uni(j, A[i], parent, size);
                    if(parent.find(A[i] / j) == parent.end()) parent[A[i] / j] = A[i];
                    else uni(A[i] / j, A[i], parent, size);
                }
            }
        }
        int ans = 0;
        for(auto i : size) ans = max(ans, i.second);
        return ans;
    }
};