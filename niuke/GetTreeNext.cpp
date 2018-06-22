//
// Created by lihzz on 2018/6/22.
//

#include "../DataStruct.h"


class Solution {
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode)
    {
        if(!pNode)
            return NULL;
        if(pNode->right){
            TreeLinkNode* node = pNode->right;
            while (node->left){
                node = node->left;
            }
            return node;
        }
        while (pNode->next){
            TreeLinkNode* node = pNode->next;
            if(node->left == pNode){
                return node;
            }
            pNode = pNode->next;
        }

        return NULL;
    }
};