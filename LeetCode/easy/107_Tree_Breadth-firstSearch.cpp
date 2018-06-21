//
// Created by lh on 2017/9/22.
//
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using std::reverse;
using std::queue;
using std::vector;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

//class Solution {
//public:
//    vector<vector<int>> levelOrderBottom(TreeNode* root) {
//        vector<vector<int>> res;
//        if(!root)
//            return res;
//
//        queue<TreeNode*> q;
//        q.push(root);
//        while (!q.empty()){
//            vector<int> tmp;
//            int size = q.size();
//            for (int i = 0; i <size ; ++i) {
//                TreeNode* t = q.front();
//                q.pop();
//                tmp.push_back(t->val);
//                if(t->left)q.push(t->left);
//                if(t->right)q.push(t->right);
//            }
//            res.insert(res.begin(),tmp);
//        }
//        return res;
//    }
//};



class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        helper(root,0,res);
        reverse(res.begin(),res.end());
        return res;
    }

    void helper(TreeNode* t,int level,vector<vector<int>> &res){
        if(!t)return;
        if(res.size() == level)
            res.push_back({});
        res[level].push_back(t->val);
        if(t->left)helper(t->left,level+1,res);
        if(t->right)helper(t->right,level+1,res);
    }

};