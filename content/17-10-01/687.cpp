//
// Created by lh on 2017/10/1.
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
//    int longestUnivaluePath(TreeNode* root) {
//        if(!root)
//            return 0;
//        int _max = -1,curval = root->val,curlen = -1;
//        helper(root,_max,curval,curlen);
//        return _max;
//    }
//    void helper(TreeNode* t,int& _max,int curval,int &curlen){
//        if(!t) return;
//        if(t->val == curval)
//            curlen++;
//        else{
//            curval = t->val;
//            curlen = 0;
//        }
//        if(curlen > _max){
//            _max = curlen;
//        }
//        helper(t->left,_max,curval,curlen);
//        helper(t->right,_max,curval,curlen);
//    }
//};

using std::max;
class Solution {
public:
    int longestUnivaluePath(TreeNode* root) {
        int res = 0;
        if(root){
            helper(root,res);
        }
        return res;
    }
    int helper(TreeNode* t,int& _max){
        int l =0,r=0;
        int resl = 0,resr = 0;
        if(t->left){
           l = helper(t->left,_max);
        }
        if(t->right){
            r = helper(t->right,_max);
        }
        if(t->left && t->left->val == t->val){
            resl = l+1;
        }
        if(t->right && t->right->val == t->val){
            resr = r+1;
        }
        _max = max(_max,resl+resr);
        return max(resl,resr);
    }
};