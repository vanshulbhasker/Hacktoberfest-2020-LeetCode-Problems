/* Leetcode question 509. Fibonacci Number

auth: AnkitaM84
ref: https://leetcode.com/problems/fibonacci-number/
*/


class Solution {
    public int[][] mul(int m1[][], int m2[][]) {
        int ans[][] = new int[2][2];
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {
                for(int k = 0; k < 2; k++) {
                    ans[i][j] = ans[i][j] + m1[i][k]*m2[k][j];
                }
            }
        }
        return ans;
    }
    
    public int fib(int N) {
        if(N == 0 || N == 1){
            return N;
        }
        int mat[][] = new int[2][2];
        mat[0][0] = mat[0][1] = mat[1][0] = 1;
        mat[1][1] = 0;
        int ans[][] = new int[2][2];
        ans[0][0] = ans[1][1] = 1;
        ans[0][1] = ans[1][0] = 0;
        while(N != 1) {
            if(N%2 != 0) {
                ans = mul(mat,ans);
                N--;
            } else {
                mat = mul(mat,mat);
                N = N/2;
            }
        }
        ans = mul(ans, mat);
        return ans[0][1];
    }
}
