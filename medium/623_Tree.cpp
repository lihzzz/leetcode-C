//
// Created by lh on 2017/10/7.
//
#include "../DataStruct.h"
#include <queue>
using namespace std;
//class Solution {
//public:
//    TreeNode* addOneRow(TreeNode* root, int v, int d) {
//       if(d == 1){
//           TreeNode* node = new TreeNode(v);
//           node->left = root;
//           return node;
//       }else{
//           queue<TreeNode*>q;
//           q.push(root);
//           while (!q.empty()){
//               int n = q.size();
//               d--;
//               if(d == 0) return root;
//               for (int i = 0; i <n ; ++i) {
//                   TreeNode *cur = q.front();
//                   q.pop();
//                   if (d == 1) {
//                       TreeNode *leftNode = cur->left;
//                       TreeNode *rightNode = cur->right;
//                       cur->left = new TreeNode(v);
//                       cur->right = new TreeNode(v);
//                       cur->left->left = leftNode;
//                       cur->right->right = rightNode;
//                   }else{
//                       if(cur->left)q.push(cur->left);
//                       if(cur->right)q.push(cur->right);
//                   }
//               }
//           }
//           return root;
//       }
//    }
//};


class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        if(d == 0 || d==1){
            TreeNode* newNode = new TreeNode(v);
            (d?newNode->left:newNode->right) = root;
            return newNode;
        }
        if(root&& d>1){
            root->left = addOneRow(root->left,v,d>2?d-1:1);
            root->right = addOneRow(root->right,v,d>2?d-1:0);
        }
        return root;
    }
};