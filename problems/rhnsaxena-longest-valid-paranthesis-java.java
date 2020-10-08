/**
 * Solution to Longest Valid Parentheses at LeetCode in Java
 *
 * author: rhnsaxena
 * ref: https://leetcode.com/problems/longest-valid-parentheses/
 */

class Solution {
    public int longestValidParentheses(String s) {
        int current=0, ans=0;
        Stack<Integer> stack = new Stack<Integer>();
        for(int i=0;i<s.length();i++){
            char cc=s.charAt(i);
            if(cc=='('){
                stack.push(current);
                current=0;
            }else{
                if(stack.isEmpty()){
                    current=0;
                }else{
                    current=current+stack.peek()+2;
                    ans=Math.max(ans,current);
                    stack.pop();
                }
            }
        }
        return ans;
    }
}