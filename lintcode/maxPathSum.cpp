//
// Created by lihzz on 2018/7/6.
//
#include <iostream>
#include "../DataStruct.h"
using namespace std;
class Solution {
public:
    /**
     * @param root: The root of binary tree.
     * @return: An integer
     */
    int maxPathSum(TreeNode * root) {
        // write your code here
        int res = INT_MIN;
        helper(root,res);
        return res;

    }

    int helper(TreeNode* root,int& res){
        if(!root)
            return 0;
        int left = max(helper(root->left,res),0);
        int right = max(helper(root->right,res),0);
        res = max(res,left+right+root->val);
        return max(left,right) + root->val;
    }
};