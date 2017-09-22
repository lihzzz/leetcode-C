//
// Created by lh on 2017/9/22.
//
#include <iostream>
#include <unordered_map>
using std::unordered_map;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

//class Solution {
//public:
//    int pathSum(TreeNode* root, int sum) {
//        int res = 0;
//        helper(root,sum,res);
//        if(root->left)
//            res += pathSum(root->left,sum);
//        if(root->right)
//            res += pathSum(root->right,sum);
//        return res;
//    }
//    void helper(TreeNode* t,int sum,int& res){
//        if(!t)return;
//        if(sum == 0){
//            ++res;
//            return;
//        }
//        helper(t->left,sum-t->val,res);
//        helper(t->right,sum-t->val,res);
//    }
//};

