/**
 * Solution to Duplicate Zeros at LeetCode in Java
 *
 * author: Jiahuei99
 * ref: https://leetcode.com/problems/duplicate-zeros/
 */

class Solution {
    public void duplicateZeros(int[] arr) {
       int numberOfZero = 0;
        int arrLength = arr.length-1;

        for(int i = 0;i<=arrLength-numberOfZero;i++){
            if(arr[i] == 0){
                if(i==arrLength-numberOfZero){
                    arr[arrLength] = 0;
                    arrLength -=1;
                    break;
                 }
                 numberOfZero++;
            }
        }

        int arrEnd = arrLength-numberOfZero;

        for(int i = arrEnd; i>=0; i--){
            if(arr[i]==0){
                arr[i+numberOfZero] = 0;
                numberOfZero -= 1;
                if(i+numberOfZero <=0){
                    break;
                }
                arr[i+numberOfZero] = 0;

            }else {
                arr[i + numberOfZero] = arr[i];
            }
        }
    }
}