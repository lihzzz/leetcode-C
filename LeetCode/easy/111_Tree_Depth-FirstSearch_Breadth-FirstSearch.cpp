//
// Created by lh on 2017/9/28.
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
//    int minDepth(TreeNode* root) {
//        if(!root)
//            return 0;
//        int _min = INT_MAX;
//        helper(root,_min,1);
//        return _min;
//    }
//    void helper(TreeNode* r,int& _min,int Depth){
//        if(!r)return;
//        if(!r->right && !r->left){
//            _min = std::min(_min,Depth);
//        }
//        helper(r->left,_min,1+Depth);
//        helper(r->right,_min,1+Depth);
//    }
//};

class Solution {
public:
    int minDepth(TreeNode* root) {
        if (!root)
            return 0;
        if(!root->left && !root->right) return 1;
        if(root->left == NULL) return minDepth(root->right) + 1;
        else if(root->right == NULL) return minDepth(root->left) + 1;
        else return 1+std::min(minDepth(root->right),minDepth(root->left));
    }
};