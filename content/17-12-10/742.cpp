//
// Created by lh on 2017/12/10.
//

#include "../../DataStruct.h"
#include <queue>
using namespace std;
class Solution {
public:
    int findClosestLeaf(TreeNode* root, int k) {
        TreeNode* Equ;
        TreeNode* res;
        queue<TreeNode*> q;
        Equ = findnode(root,k);
        q.push(Equ);
        res = findminleaf(q);
        return res->val;
    }
    TreeNode* findnode(TreeNode* root,int k){
        if(root->val == k){
            return root;
        }else{
            findnode(root->left,k);
            findnode(root->right,k);
        }
    }
    TreeNode* findminleaf(queue<TreeNode*> q){
        while (!q.empty()) {
            int n = q.size();
            for (int i = 0; i < n; ++i) {
                TreeNode *node = q.front();
                q.pop();
                if (!node->left && !node->right) {
                    return node;
                }
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
        }
    }
};
