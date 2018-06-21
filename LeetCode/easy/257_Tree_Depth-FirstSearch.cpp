//
// Created by lh on 2017/9/23.
//
#include <iostream>
#include <vector>
#include <string>
using std::string;
using std::vector;
using std::to_string;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if(!root)
            return res;
        string tmp = to_string(root->val);
        helper(root->left,res,tmp);
        helper(root->right,res,tmp);
        return res;
    }
    void helper(TreeNode* t,vector<string>& res,string tmp){
        if(!t){
            return;
        }
        tmp += "->" + to_string(t->val);
        if(!t->left && !t->right){
            res.push_back(tmp);
            return;
        }
        helper(t->left,res,tmp);
        helper(t->right,res,tmp);
    }
};