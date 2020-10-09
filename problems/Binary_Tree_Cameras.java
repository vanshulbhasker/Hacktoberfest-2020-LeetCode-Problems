/* Binary Tree Cameras. leetcode problem 968

author: AnkitaM84
ref: https://leetcode.com/problems/binary-tree-cameras/


/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int count = 0;
    public int minCameraCover(TreeNode root) {
        if(root.left == null && root.right == null) {
            return 1;
        }
        int t = cameras(root);
        if(t == 1) {
            count++;
        }
        return count;
    }
    
    public int cameras(TreeNode root) {
        if(root == null) {
            return 3;
        }
        int t1 = cameras(root.left);
        int t2 = cameras(root.right);
        if(t1 == 1 || t2 == 1) {
            count++;
            return 2;
        }
        if(t1 == 2 || t2 == 2) {
            return 3;
        }
        return 1;
    }
}
