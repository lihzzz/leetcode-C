//
// Created by lihzz on 2018/7/19.
//

#include "../../DataStruct.h"
using namespace std;
class Solution {
public:
    bool IsBalanced_Solution(TreeNode* pRoot) {
        return helper(pRoot->left) != -1;
    }

    int helper(TreeNode* root){
        if(!root){
            return 0;
        }
        int left = helper(root->left);

        if(left == -1) return -1;

        int right = helper(root->right);

        if(right == -1) return -1;

        return abs(left-right) > 1?-1:1+max(left,right);
    }
};