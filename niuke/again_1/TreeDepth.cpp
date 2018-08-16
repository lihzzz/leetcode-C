//
// Created by lihzz on 2018/7/19.
//

#include "../../DataStruct.h"
#include <queue>
using namespace std;
class Solution {
public:
    int TreeDepth(TreeNode* pRoot)
    {
        if(!pRoot)
            return 0;
        queue<TreeNode*> q;
        q.push(pRoot);
        int res = 0;
        while(!q.empty()){
            ++res;
            int size  = q.size();
            for (int i = 0; i < size; ++i) {
                TreeNode* cur = q.front();
                q.pop();
                if(cur->left) q.push(cur->left);
                if(cur->right)q.push(cur->right);
            }
        }
        return res;
    }
};