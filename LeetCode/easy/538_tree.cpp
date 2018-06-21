//
// Created by lh on 2017/9/19.
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
    TreeNode* convertBST(TreeNode* root) {
        int sum = 0;
        trave(root,sum);
        return root;
    }
    void trave(TreeNode* root,int& sum){
        if(!root)
            return;
        trave(root->right,sum);
        root->val += sum;
        sum = root->val;
        trave(root->left,sum);
    }
};