/**
 * Solution to Number of Islands at LeetCode in <language>
 *
 * author: YokaiEmporer
 * ref: https://leetcode.com/problems/number-of-islands/
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void bfs(vector<vector<char>>& grid,int i, int j,int rowmax,int colmax)
    {
        vector<pair<int,int>>queue;
        queue.emplace_back(i,j);
        pair<int,int> p1;
        while(queue.size()>0)
        {
            p1=queue.back();
            queue.pop_back();
            grid[p1.first][p1.second]='0';
            if(p1.first+1<rowmax&&grid[p1.first+1][p1.second]=='1')
                queue.emplace_back(p1.first+1,p1.second);
            if(p1.second+1<colmax&&grid[p1.first][p1.second+1]=='1')
                queue.emplace_back(p1.first,p1.second+1);
            if(p1.first-1>=0&&grid[p1.first-1][p1.second]=='1')
                queue.emplace_back(p1.first-1,p1.second);
            if(p1.second-1>=0&&grid[p1.first][p1.second-1]=='1')
                queue.emplace_back(p1.first,p1.second-1);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int cnt=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1'){
                    bfs(grid,i,j,grid.size(),grid[0].size());
                    cnt++;
            }
        }
        }
        return cnt;
        
    }
};