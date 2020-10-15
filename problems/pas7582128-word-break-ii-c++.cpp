/**
 * Solution to 140. Word Break II at LeetCode in <language>
 *
 * author: pas7582128
 * ref: https://leetcode.com/problems/word-break-ii/
 */

class Solution {
public:
    unordered_map<string,vector<string>> m;
    vector<string> con(string s,vector<string> v)
    {
        for(auto &it:v)
        {
            it+=" "+s;
        }
        return v;
    }
    vector<string> wordBreak2(string s, unordered_set<string>& dic) {
        if(m.count(s)) return m[s];
        vector<string> res;
        if(dic.count(s)) 
        {
            res.push_back(s);
        }
        for(int i=1;i<s.size();i++)
        {
            string cur=s.substr(i);
            if(dic.find(cur)!=dic.end())
            {
                string rem=s.substr(0,i);
                vector <string> tp=con(cur,wordBreak2(rem,dic));
                res.insert(res.end(),tp.begin(),tp.end());
            }
        }
        return m[s]=res;
    }
    vector<string> wordBreak(string s,vector<string> &v)
    {
        unordered_set<string> d;
        for(auto it:v)
        {
            d.insert(it);
        }
        vector<string> res=wordBreak2(s,d);
        sort(res.begin(),res.end());
        return res;
    }
};