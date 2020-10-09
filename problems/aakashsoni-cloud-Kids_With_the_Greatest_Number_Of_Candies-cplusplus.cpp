/**
 * Solution to Kids With the Greatest Number of Candies at LeetCode in C++
 *
 * author: aakash_soni
 * ref: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
 */

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
          vector<bool> have(candies.size());
        int maxCandies = *max_element(candies.begin(),candies.end());
        for(int i =0 ; i < candies.size(); i++){
            if(candies.at(i)+extraCandies>=maxCandies)
                have.at(i) = true;
            else
                have.at(i) = false;
        }
        return have;
        
    }
};
