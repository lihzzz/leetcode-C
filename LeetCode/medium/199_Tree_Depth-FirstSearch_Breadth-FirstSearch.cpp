//
// Created by lh on 17-11-9.
//

#include <vector>
#include <stack>
#include <queue>
#include "../DataStruct.h"
using namespace std;

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*>q;
        vector<int> res;
        if(!root)
            return res;

        q.push(root);
        while (!q.empty()){
            res.push_back(q.back()->val);
            int n = q.size();

            for (int i = 0; i <n ; ++i) {
                TreeNode* t = q.front();
                q.pop();
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
        }
        return res;
    }
};