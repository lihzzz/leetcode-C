//
// Created by lh on 2017/11/20.
//

#include <ntdef.h>
#include "../DataStruct.h"

class Solution {
public:
    bool IsBalanced_Solution(TreeNode* pRoot) {
        bool res = true;
        helper(pRoot,1,res);
        return res;
    }
    int helper(TreeNode* node,int level,bool& isbalance){
        if(node == NULL){
            return level;
        }
        int lh = helper(node->left,level+1,isbalance);
        if(!isbalance){
            return level;
        }

        int rh = helper(node->right,level+1,isbalance);
        if(!isbalance){
            return level;
        }

        if(abs(lh-rh) > 1){
            isbalance = false;
        }
        return max(lh,rh);
    }
};