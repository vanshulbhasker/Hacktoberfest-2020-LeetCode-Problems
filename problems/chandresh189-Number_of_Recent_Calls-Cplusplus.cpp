/**
Solution to Number of Recent Calls at LeetCode in C++
author: chandresh189-
ref: https://leetcode.com/explore/challenge/card/october-leetcoding-challenge/559/week-1-october-1st-october-7th/3480/

**/

class RecentCounter {
public:
    set <int> s;
    set <int> :: iterator itr; 
    
    RecentCounter() {
        s.clear();
    }
    
    int ping(int t) {
        s.insert(t);
        while( ( *(--s.end()) - *(s.begin()) ) > 3000)   {
            itr = s.begin();
            cout<<*itr<<"\n";
            s.erase(itr);
        }
            
        return s.size();
    }
};


