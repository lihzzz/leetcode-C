//
// Created by lh on 2017/10/13.
//

#include "../DataStruct.h"
#include <vector>
#include <stack>
#include <queue>
using namespace std;

//class Solution {
//public:
//    vector<int> preorderTraversal(TreeNode* root) {
//        vector<int> res;
//        helper(root,res);
//        return res;
//    }
//    void helper(TreeNode* root,vector<int>& res){
//        if(!root)
//            return;
//        res.push_back(root->val);
//        helper(root->left,res);
//        helper(root->right,res);
//    }
//};


class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        if(!root)
            return res;
        stack<TreeNode*> s;
        s.push(root);
        while (!s.empty()){
            TreeNode* cur = s.top();
            s.pop();
            res.push_back(cur->val);
            if(cur->right)s.push(cur->right);
            if(cur->left)s.push(cur->left);

        }
        return res;
    }
};