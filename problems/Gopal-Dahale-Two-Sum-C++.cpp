/**
 * Solution to Two sum at LeetCode in C++
 *
 * author: Gopal-Dahale
 * ref: https://leetcode.com/problems/two-sum/
 */
class Solution
{
public:
    vector<int> twoSum(vector<int> &v, int target)
    {
        map<int, int> m; // holds value,index pair of the given vector
        vector<int> res; // holds the indices of the two numbers that add up to target

        for (int i = 0; i < v.size(); i++)
        {

            // if the difference of v[i] from target is not present in the map
            // we add v[i] and its index to the map as a pair
            if (m.find(target - v[i]) == m.end())
            {
                m.insert({v[i], i});
            }

            // else if the difference of v[i] from target is present
            // we add the indices of v[i] and (target - v[i])
            else
            {
                auto ele = m.find(target - v[i]);
                res.push_back(ele->second);
                res.push_back(i);
                break;
            }
        }
        return res;
    }
};