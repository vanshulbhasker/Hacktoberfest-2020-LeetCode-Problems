class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        priority_queue<pair<int,pair<int, int>>, vector<pair<int,pair<int, int>>>, greater<pair<int,pair<int, int>>>> pq;
        unordered_map<int, vector<pair<int,int>>> m;
        for(int i = 0;i<flights.size();i++){
            m[flights[i][0]].push_back({flights[i][2], flights[i][1]});
        }
        bool* vis = new bool[n];
        int ans = -1;
        pq.push({0,{src,0}});
        while(!pq.empty()){
            int wt = pq.top().first;
            int v = pq.top().second.first;
            int curr = pq.top().second.second;
            pq.pop();
            
            if(curr>K+1)
                continue;
            
            if(v == dst){
                return wt;
            }
            
            for(auto child : m[v]){
                pq.push({child.first + wt,{child.second, curr+1}});
            }
            cout<<pq.size()<<endl;
        }
        return ans;
    }
};
