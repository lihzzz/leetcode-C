//
// Created by lh on 2017/10/4.
//
#include "../DataStruct.h"
#include <vector>
#include <queue>
using std::queue;
using std::vector;
//class Solution {
//public:
//    vector<int> largestValues(TreeNode* root) {
//        vector<int> res;
//        if(!root)
//            return res;
//        queue<TreeNode*> q;
//        q.push(root);
//        while (!q.empty()){
//            int n = q.size();
//            TreeNode* t = q.front();
//            if(t->left)q.push(t->left);
//            if(t->right)q.push(t->right);
//            q.pop();
//            int maxnum = t->val;
//            for (int i = 1; i <n ; ++i) {
//                t = q.front();
//                q.pop();
//                if(t->left)q.push(t->left);
//                if(t->right)q.push(t->right);
//                maxnum = std::max(maxnum,t->val);
//            }
//            res.push_back(maxnum);
//        }
//        return res;
//    }
//};



class Solution{
public:
    vector<int> largestValues(TreeNode* root){
        vector<int> res;
        helper(root,1,res);
        return res;
    }
    void helper(TreeNode* root,int depth,vector<int> & res){
        if(!root)
            return;
        if(depth > res.size()){
            res.push_back(root->val);
        } else{
            res[depth-1] = std::max(res[depth-1],root->val);
        }
        helper(root->left,depth+1,res);
        helper(root->right,depth+1,res);
    }
};