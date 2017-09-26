//
// Created by lh on 2017/9/26.
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
//    bool isBalanced(TreeNode* root) {
//        if(!root)
//            return true;
//        if(std::abs(getDepth(root->left) - getDepth(root->right)) >1) return false;
//        return isBalanced(root->left) && isBalanced(root->right);
//    }
//    int getDepth(TreeNode* r){
//        if(!r) return 0;
//        return 1+std::max(getDepth(r->left),getDepth(r->right));
//    }
//};

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(checkDepth(root)== -1) return false;
        else return true;
    }
    int checkDepth(TreeNode* r){
        if(!r) return 0;
        int left = checkDepth(r->left);
        if(left == -1) return -1;
        int rigth = checkDepth(r->right);
        if(rigth == -1) return -1;

        int diff = std::abs(left-rigth);
        if(diff>1)return -1;
        else return 1+ std::max(left,rigth);
    }
};