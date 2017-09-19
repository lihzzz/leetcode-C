//
// Created by lh on 2017/9/19.
//
#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int res = 0;
        helper(root,res);
        return res;
    }
    void helper(TreeNode* root,int& res){
        if(!root)
            return;
        if(root->left){
            if(!root->left->left && !root->left->right){
                res += root->left->val;
            }
        }
        helper(root->left,res);
        helper(root->right,res);
    }
};
