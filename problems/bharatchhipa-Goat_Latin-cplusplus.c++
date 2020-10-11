/**
 * Solution to  Goat Latin at LeetCode in C++
 *
 * author: Bharat chhipa
 * ref: https://leetcode.com/problems/goat-latin/
 */

class Solution {
public:
    string toGoatLatin(string S) {
        unordered_set<char> uset = {'A','E','I','O','U','a','e','i','o','u'};
        int i=0;
        int j=0;
        int isvowel=-1;
        S+=" ";
        string tmp="";
        while(i<S.length()){
            if(S[i]==' '){
                tmp+="a";
                if(isvowel){
                    S = S.substr(0,j)+S.substr(j,i-j)+"ma"+tmp+S.substr(i);
                }
                else{
                    S = S.substr(0,j)+S.substr(j+1,i-j-1)+S[j]+"ma"+tmp+S.substr(i);
                }
                i+=tmp.length()+2;
                j=i+1;
                isvowel = -1;
            }else if(isvowel==-1){
                if(uset.find(S[i])!=uset.end()){
                    isvowel = 1;
                }else{
                    isvowel = 0;
                }
            }
            i++;
        }
        return S.substr(0,S.length()-1);
    }
};
