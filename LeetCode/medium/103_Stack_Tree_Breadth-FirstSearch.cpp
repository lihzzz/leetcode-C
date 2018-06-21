//
// Created by lh on 2017/12/1.
//

#include "../DataStruct.h"
#include <vector>
#include <stack>
#include <queue>
using namespace std;
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        stack<TreeNode*> stack1;
        stack<TreeNode*> stack2;
        vector<vector<int > >res;
        if(!root)
            return res;
        stack1.push(root);
        int direc = 0;
        while (!stack1.empty() || !stack2.empty()){
            int n = direc == 0?stack1.size() : stack2.size();
            vector<int> v;
            if(direc == 0){
                for (int i = 0; i <n ; ++i) {
                    TreeNode* node = stack1.top();
                    stack1.pop();
                    v.push_back(node->val);
                    if(node->left) stack2.push(node->left);
                    if(node->right) stack2.push(node->right);
                }
                direc = 1;
            }else{
                for (int i = 0; i <n ; ++i) {
                    TreeNode* node = stack2.top();
                    stack2.pop();
                    v.push_back(node->val);
                    if(node->right) stack1.push(node->right);
                    if(node->left) stack1.push(node->left);
                }
                direc = 0;
            }
            res.push_back(v);
        }
        return res;
    }
};