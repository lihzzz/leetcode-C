//
// Created by lh on 2017/9/22.
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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(!s)return false;
        if(isSameTree(s,t)) return true;
        return isSubtree(s->left,t) || isSubtree(s->right,t);
    }
    bool isSameTree(TreeNode* s,TreeNode* t){
        if(!s && !t) return true;
        if(!s || !t) return false;
        if(s->val != t->val) return false;
        return isSameTree(s->left,t->left) && isSameTree(s->right,t->right);
    }
};
