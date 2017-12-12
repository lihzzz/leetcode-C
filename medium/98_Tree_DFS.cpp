//
// Created by LH on 2017/12/12.
//
#include "../DataStruct.h"
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if(!root || (isValidBST(root->left) && isValidBST(root->right)))
            return true;
        if(root->left){

        }
    }


};