//**
Solution to Destination City at LeetCode in C++
author: chandresh189
ref: https: https://leetcode.com/problems/destination-city/

**/

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        vector <vector<string>>:: iterator vit ;
        list <string> l1, l2; 
        list <string> :: iterator it1,it2,it3; 
  
        for (int i = 0; i < paths.size(); i++) {  
            l1.push_back(paths[i][1]);
            l2.push_back(paths[i][0]);
            }
        for(it2 = l2.begin(); it2 != l2.end(); ++it2) {
            for(it1 = l1.begin(); it1 != l1.end(); ++it1) {
                if(*it1 == *it2) {
                    // cout<<"Erasing "<<*it1<<endl;
                    l1.erase(it1);
                    // cout<<"New list 1";
                    // for(it3 = l1.begin(); it3 != l1.end(); ++it3) cout<<*it3<<" ";
                    // cout<<endl;
                    // cout<<"New list 2";
                    // for(it3 = l2.begin(); it3 != l2.end(); ++it3) cout<<*it3<<" ";
                    // cout<<endl;
                    // cout<<endl;
                    break;
                }
            }
        }
        
    return l1.front();
    }
};


