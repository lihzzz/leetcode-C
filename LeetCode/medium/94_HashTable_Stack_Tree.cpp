//
// Created by lh on 2017/10/7.
//

#include "../DataStruct.h"
#include <vector>
#include <stack>
using namespace std;
//class Solution {
//public:
//    vector<int> inorderTraversal(TreeNode* root) {
//        vector<int> res;
//        helper(root,res);
//        return res;
//    }
//    void helper(TreeNode* t,vector<int>& res){
//        if(!t)
//            return;
//        helper(t->left,res);
//        res.push_back(t->val);
//        helper(t->right,res);
//    }
//};

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> s;
        TreeNode* p = root;
        while (p || !s.empty()){
            while (p){
                s.push(p);
                p = p->left;
            }
            p =s.top();
            s.pop();
            res.push_back(p->val);
            p = p->right;
        }
        return res;
    }
};

