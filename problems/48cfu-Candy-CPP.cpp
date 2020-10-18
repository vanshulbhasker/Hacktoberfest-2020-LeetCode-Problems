/**
 * Solution to Candy at LeetCode in C++
 *
 * author: 48cfu
 * ref: https://leetcode.com/problems/candy/
 */
#define _max(a, b) a > b ? a : b
class Solution {
public:
    int candy(vector<int>& g) {
        size_t n = g.size();
        vector<int> c (n, 1);
        bool updated = false;
        int j = 1;
        int sum = 0;
        for (int i = 0; i < n - 1; i++){
            //check right left neighbor
            if(g[j + i] > g[i]){
                c[j + i] = c[i] + 1;
                //updated = false;
            }
        }
        for (int i = n - 2; i >=0; i--){
            //check greater than right neighbor
            if(g[i] > g[i + 1]){
                //c[i]++;
                c[i] = _max(c[i], c[i + 1] + 1);
                updated = false;
            }
        }
        for (int i = 0; i < n; i++)
            sum += c[i];
        return sum;
    }
};
