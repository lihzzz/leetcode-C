//
// Created by LH on 2017/12/12.
//
#include "../DataStruct.h"

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if (!root)
            return true;
        else if(isValidBST(root->left) && isValidBST(root->right) &&
                (!root->left || root->left && isNodeValid(root->val,root->left,0) ) &&
                (!root->right || root->right && isNodeValid(root->val,root->right,1)  ))
            return true;
        else
            return false;
    }
    bool isNodeValid(int num,TreeNode* t,int flag){
        if(!t)
            return true;
        if(flag){
            return (num<t->val && isNodeValid(num,t->left,flag) && isNodeValid(num,t->right,flag));
        }else{
            return (num > t->val && isNodeValid(num,t->left,flag) && isNodeValid(num,t->right,flag));
        }
    }
};
