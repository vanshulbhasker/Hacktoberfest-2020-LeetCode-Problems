class Solution {
public:
    int xorOperation(int n, int start) {
        int num[n];
       // arr[0] = start;
        for(int i=0;i<n;i++){
            num[i] = start + 2*i;
        }
        int res = 0;
        for(int i=0;i<n;i++){
            //cout<<num[i];
          res ^= num[i];
        }
        
        return res;
    }
};
