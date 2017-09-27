//
// Created by lh on 2017/9/27.
//
#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
//class Solution {
//public:
//    bool hasPathSum(TreeNode* root, int sum) {
//        if(!root) return false;
//        return helper(root,sum);
//    }
//    bool helper(TreeNode* r,int sum){
//        if(!r) return false;
//        if(!r->left && !r->right && sum  == r->val)
//            return true;
//        sum -= r->val;
//        return helper(r->left,sum)|| helper(r->right,sum);
//    }
//};

class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root) return false;
        if(!root->left && !root->right && sum == root->val)
            return true;
        return hasPathSum(root->left,sum - root->val) || hasPathSum(root->right,sum-root->val);
    }
};