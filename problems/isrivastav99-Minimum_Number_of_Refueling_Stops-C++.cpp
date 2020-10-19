/**
 * Solution to 871. Minimum Number of Refueling Stops at LeetCode in C++
 *
 * author: Ishaan Srivastav
 * ref: https://leetcode.com/problems/minimum-number-of-refueling-stops/
 */



class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int n = stations.size();
        if(startFuel<target && (n==0 ||startFuel<stations[0][0]))
            return -1;
        else if(n == 0 )
            return 0;
       
        int ans  = 0;
        priority_queue<int> pq;
        for(int i = 0;i<n;i++){
            if(stations[i][0]<=startFuel){
                pq.push(stations[i][1]);
            }
            else{
                while(startFuel<stations[i][0] && !pq.empty()){                
                startFuel +=pq.top();
                pq.pop();
                ans += 1;
                 }
                if(startFuel>=stations[i][0]){
                   pq.push(stations[i][1]); 
                }
            }
            if(startFuel>=target){
                break;
            }
            
        }
        while(startFuel<target && !pq.empty()){
            cout<<startFuel;
            startFuel +=pq.top();
                pq.pop();
                ans += 1;
        }
        cout<<startFuel;
        if(startFuel>=target)
        return ans;
        else
            return -1;
    }
};
