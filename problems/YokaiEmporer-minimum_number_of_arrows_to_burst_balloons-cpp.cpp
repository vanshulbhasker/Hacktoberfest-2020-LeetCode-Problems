/**
 * Solution to Minimum number of arrows to burst balloons at LeetCode in C++
 *
 * author: YokaiEmporer
 * ref: https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/
 */

#include<bits/stdc++.h>
using namespace std;
class Solution {
    
public:
    static bool comp(const vector<int> &t1,const vector<int> &t2)
{
	return (t1[1]<t2[1]) ;
}
    
	int findMinArrowShots(vector<vector<int>>& points) {
    
    
    if(points.size()==0) return 0;
    
    if(points.size()==1) return 1;
    
    
    sort(points.begin(),points.end(),comp);
    
    int count=1;
    int prev=points[0][1];
    
    for(int i=1;i<points.size();i++)
    {
        if(points[i][0]<=prev) continue;
        
        count++;
        prev=points[i][1];
    }

    return count;
    }
};