//
// Created by lh on 2017/10/1.
//
#include <iostream>
#include "../../DataStruct.h"
using std::max;
class Solution {
public:
    int longestUnivaluePath(TreeNode* root) {
        int res = 0;
        if(root)
            helper(root,res);
        return res;
    }
    int helper(TreeNode* t,int& res){
        int l = t->left?helper(t->left,res):0;
        int r = t->right?helper(t->right,res):0;
        int resl = t->left && t->left->val == t->val?l+1:0;
        int resr = t->right && t->right->val == t->val?r+1:0;
        res = max(res,resl+resr);
        return max(resl,resr);
    }
};

//using std::max;
//class Solution {
//public:
//    int longestUnivaluePath(TreeNode* root) {
//        int res = 0;
//        if(root){
//            helper(root,res);
//        }
//        return res;
//    }
//    int helper(TreeNode* t,int& _max){
//        int l =0,r=0;
//        int resl = 0,resr = 0;
//        if(t->left){
//           l = helper(t->left,_max);
//        }
//        if(t->right){
//            r = helper(t->right,_max);
//        }
//        if(t->left && t->left->val == t->val){
//            resl = l+1;
//        }
//        if(t->right && t->right->val == t->val){
//            resr = r+1;
//        }
//        _max = max(_max,resl+resr);
//        return max(resl,resr);
//    }
//};