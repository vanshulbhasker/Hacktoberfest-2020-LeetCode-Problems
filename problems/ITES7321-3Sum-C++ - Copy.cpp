/**
 * Solution to 3Sum in CPP
 *
 * author: ITES7321
 * ref:https://leetcode.com/problems/3sum/
 */

class Solution {
public:
    // iterate for each element and for each element find the remaining two elemnets such that a + b + c = 0 , (Use TWO_SUM)
    // Do it like K sum problem 
    
    vector<vector<int>> two_sum(vector<int> & arr , int start , int target){
        vector<vector<int>> ans;
        
        int n = arr.size();
        
        int lo = start ,  hi = n - 1; 
        
        while(lo < hi){
            int sum = arr[lo] + arr[hi];
            
            if(sum < target || lo > start && arr[lo - 1] == arr[lo])
                lo++;
            else if(sum > target || hi < n - 1 && arr[hi] == arr[hi + 1])
                hi--;
            else{
                ans.push_back({arr[lo++] , arr[hi--]});   
            }
        }
    
            return ans;
    }
    
    vector<vector<int>> ksum(vector<int> &arr , int start , int k , int target){
        vector<vector<int>> ans;
        int n = arr.size();
        
        if(start == arr.size() || k*arr[start] > target || k*arr.back() < target )
            return ans;
        
        if(k == 2)
            return two_sum(arr , start , target);
        
        for(int i = start ; i < n ;i++){
            
      if(i == start || arr[i-1] != arr[i]){ //no duplicates allowed as we require unique triplets
          
          for(auto it: ksum(arr ,  i+1 , k-1 , target - arr[i] )){
             // we are sure that we get a two_sum for current arr[i] otherwise it will be a null vector and the control wont reach here
                    ans.push_back({arr[i]});
                    ans.back().insert(end(ans.back()) , it.begin() , it.end());
                }
            }
        }
            return ans;
    }
    
    vector<vector<int>> threeSum(vector<int>& arr) {
        int n = arr.size();
       sort(arr.begin() , arr.end());
        
        return ksum(arr , 0 , 3 , 0);   // 0 starting index , 3 = k sum , 0 target
    }
};