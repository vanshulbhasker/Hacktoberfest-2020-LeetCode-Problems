  
/**
 * Solution to Binary Tree Maximum Path Sum at LeetCode in CPP
 *
 * author: ashima0699
 * ref:https://leetcode.com/problems/binary-tree-maximum-path-sum/
 */
 /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans;
    int helper(TreeNode*curr){
        if(curr==NULL)
            return 0;
        
        int ansL=helper(curr->left);
        int ansR=helper(curr->right);
        ansL=max(ansL,0);
        ansR=max(ansR,0);
        ans=max(ans,curr->val+ansL+ansR);
         return max(ansL,ansR)+curr->val;
    }
    int maxPathSum(TreeNode* root) {
        ans=INT_MIN;
        helper(root);
        return ans;
        
    }
};
