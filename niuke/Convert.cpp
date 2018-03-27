//
// Created by lh on 2018/3/19.
//

#include "../DataStruct.h"


class Solution {
public:
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        TreeNode* res,*pre= nullptr;
        if(!pRootOfTree)
            return  res;

        convertTree(pRootOfTree,pre);

        res = pRootOfTree;
        while (res->left){
            res = res->left;
        }
        return res;

    }

    void convertTree(TreeNode* root,TreeNode*& pre){
        if(!root)
            return;
        convertTree(root->left,pre);

        root->left = pre;
        if(pre)  pre->right = root;
        pre = root;
        convertTree(root->right,pre);
    }
};