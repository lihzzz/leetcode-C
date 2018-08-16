//
// Created by lihzz on 2018/6/22.
//

#include "../DataStruct.h"

class Solution {
public:
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        if(!pRoot1 || !pRoot2){
            return false;
        }

        return isSubTree(pRoot1,pRoot2) || isSubTree(pRoot1->left,pRoot2) || isSubTree(pRoot1->right,pRoot2);

    }

    bool isSubTree(TreeNode* root1,TreeNode* root2){
        if(!root2)
            return true;
        if(!root1 || root1->val != root2->val)
            return false;

        return isSubTree(root1->left,root2->left) && isSubTree(root1->right,root2->right);
    }
};