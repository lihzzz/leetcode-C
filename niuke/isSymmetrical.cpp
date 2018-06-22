//
// Created by lihzz on 2018/6/22.
//

#include "../DataStruct.h"

class Solution {
public:
    bool isSymmetrical(TreeNode* pRoot)
    {
        if(!pRoot)
            return true;
        return comp(pRoot->right,pRoot->left);
    }

    bool comp(TreeNode* left,TreeNode* right){
        if(!left) return right == NULL;
        if(!right) return false;
        if(left->val != right->val) return false;
        return comp(right->left,left->right) && comp(right->right,left->left);
    }
};