//
// Created by lh on 2017/9/21.
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

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int res =
    }
    int getHeigth(TreeNode* t){
        if(!t) return 0;

    }
};