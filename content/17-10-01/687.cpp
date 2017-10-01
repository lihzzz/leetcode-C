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


class Solution {
public:
    int longestUnivaluePath(TreeNode* root) {
        if(!root)
            return 0;
        int _max = -1,curval = root->val,curlen = -1,curmax=0;
        helper(root,_max,curval,curlen);
        return _max;
    }
    void helper(TreeNode* t,int& _max,int curval,int curlen){
        if(!t) return;
        bool ileft= false,iright= false;
        if(t->left){
            if(t->left->val == curval){
                ileft = true;
                curlen++;
            }
        }
        if(t->right){
            if(t->right->val==curval){
                curlen++;
                iright = true;
            }
        }
        helper(t->left,_max,t->left->val,curlen);
        _max  = std::max(_max,curlen);

    }
};