//
// Created by lh on 2017/12/1.
//

#include "../DataStruct.h"
#include <vector>
#include <queue>
using namespace std;
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int > > res;
        if(!root)
            return res;
        q.push(root);
        while (!q.empty()){
            int n = q.size();
            vector<int> v;
            for (int i = 0; i <n ; ++i) {
                TreeNode* node = q.front();
                q.pop();
                v.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            res.push_back(v);
        }
        return res;
    }
};