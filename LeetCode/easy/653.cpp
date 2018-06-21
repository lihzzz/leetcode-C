//
// Created by lh on 2017/9/19.
//
#include <iostream>
#include <vector>
#include <unordered_set>
using std::vector;
using std::unordered_set;
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> record;
        return help(root,k,record);
    }
    bool help(TreeNode* root,int k ,unordered_set<int>& record){
        if(!root)
            return false;
        if(record.count(k-root->val)){
            return true;
        } else
            record.insert(root->val);
        return help(root->left,k,record) || help(root->right,k,record);

    }
};