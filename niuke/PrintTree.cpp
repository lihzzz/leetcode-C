//
// Created by lihzz on 2018/6/22.
//
#include <vector>
#include <queue>
#include "../DataStruct.h"

using namespace std;
class Solution {
public:
    vector<vector<int> > Print(TreeNode* pRoot) {
        vector<vector<int>> res;

        if(!pRoot)
            return res;
        bool leftToRight = true;
        queue<TreeNode*> q;
        q.push(pRoot);
        while(!q.empty()){
            int size = q.size();
            vector<int> data(size,0);
            int index = 0;
            if(leftToRight){
                index = 0;
            }else{
                index = size-1;
            }
            for (int i = 0; i <size ; ++i) {
                TreeNode* node = q.front();
                data[index] = node->val;
                if(leftToRight)
                    index++;
                else
                    index--;
                q.pop();
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            leftToRight = !leftToRight;
            res.push_back(data);
        }
        return res;
    }
};