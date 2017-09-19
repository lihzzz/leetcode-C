//
// Created by lh on 2017/9/19.
//
#include <iostream>
#include <vector>
#include <queue>
using std::vector;
using std::queue;
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        queue<TreeNode*> node;
        node.push(root);
        while (!node.empty()){
            long tmp = 0;
            int curnum = node.size();
            for (int i = 0; i <curnum ; ++i) {
                TreeNode* q = node.front();
                node.pop();
                if(q->left) node.push(q->left);
                if(q->right) node.push(q->right);
                tmp += q->val;
            }
            res.push_back((double)tmp/curnum);
        }
        return res;
    }
};