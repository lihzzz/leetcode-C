//
// Created by lh on 2017/9/19.
//
#include <iostream>
#include <cmath>
using std::abs;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    int findTilt(TreeNode* root) {
        long long res = 0;
        helper(root,res);
        return res;
    }
    int helper(TreeNode* root,long long& res){
        if(!root)
            return 0;
        int leftnum = helper(root->left,res);
        int rightnum = helper(root->right,res);

        res += abs(leftnum-rightnum);
        return leftnum + rightnum + root->val;

    }
};