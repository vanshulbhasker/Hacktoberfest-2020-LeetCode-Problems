/**
 * Solution to Destination City problem at LeetCode in C++
 *
 * author: varougm
 * ref: https://leetcode.com/problems/destination-city/
 */

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int len = int(paths.size());
        string start[len];
        string end[len];
        for (int i = 0; i < len; i++) {
            start[i] = paths[i][0];
            end[i] = paths[i][1];
        }
        for(int i = 0;i < len;i++){
            for(int j = 0; j < len;j++){
                if(start[i] == end[j]){
                    end[j] = "";
                }
            }
        }
        for(int i = 0;i < len;i++){
            if(end[i] != ""){
                return end[i];
            }
        }
        return "";
    }
};
