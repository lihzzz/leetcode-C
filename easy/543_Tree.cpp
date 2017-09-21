//
// Created by lh on 2017/9/21.
//
#include <iostream>
#include <unordered_map>

using std::max;
using std::unordered_map;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

//class Solution {
//public:
//    int diameterOfBinaryTree(TreeNode* root) {
//        if(!root) return 0;
//        int res = getHeigth(root->left) + getHeigth(root->right);
//        return max(res,max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right)));
//    }
//    int getHeigth(TreeNode* t) {
//        if (!t) return 0;
//        if (m.count(t)) return m[t];
//        int h = 1 + max(getHeigth(t->left),getHeigth(t->right));
//        return m[t] = h;
//
//    }
//
//private:
//    unordered_map<TreeNode*,int> m;
//};

//class Solution {
//public:
//    int diameterOfBinaryTree(TreeNode* root) {
//        if(!root) return 0;
//        int res = 0;
//        maxlength(root,res);
//        return res;
//    }
//
//    int maxlength(TreeNode* t,int &res){
//        if(!t) return 0;
//        int left = maxlength(t->left,res);
//        int right = maxlength(t->right,res);
//        res = max(res,left+right);
//        return max(left,right) + 1;
//    }
//};



class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int res = 0;
        maxlength(root,res);
        return res;
    }

    int maxlength(TreeNode* t,int &res){
        if(!t) return 0;
        if(m.count(t))
            return m[t];
        int left = maxlength(t->left,res);
        int right = maxlength(t->right,res);
        res = max(res,left+right);
        return m[t]=max(left,right) + 1;
    }

private:
    unordered_map<TreeNode* ,int> m;
};