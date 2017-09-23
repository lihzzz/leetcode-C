//
// Created by lh on 2017/9/23.
//
#include <iostream>
#include <queue>
#include <vector>
using std::vector;
using std::queue;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
//class Solution {
//public:
//    bool isSymmetric(TreeNode* root) {
//        if(!root) return true;
//
//        return helper(root->left,root->right);
//    }
//    bool helper(TreeNode* t,TreeNode* n){
//        if(!t && !n) return true;
//        if(t && !n || !t &&n || t->val != n->val) return false;
//        return helper(t->left,n->right) && helper(t->right,n->left);
//    }
//};


class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        q.push(root->left);
        t.push(root->right);

        while (!q.empty() && !t.empty()){
            TreeNode* q1 = q.front();
            TreeNode* q2 = t.front();
            q.pop();
            t.pop();

            if((!q1 && q2) || (q1 && !q2) ) return false;
            if(q1){
                if(q1->val != q2->val) return false;
                q.push(q1->left);
                q.push(q1->right);
                t.push(q2->right);
                t.push(q2->left);
            }
        }
        return true;
    }
private:
    queue<TreeNode*> q;
    queue<TreeNode*> t;
};