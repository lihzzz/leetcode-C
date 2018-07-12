//
// Created by lihzz on 2018/7/12.
//

#include <vector>
#include "../../DataStruct.h"
using namespace std;

class Solution {
public:
    typedef vector <vector<int>> vec;
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vec res;
        if(!root)
            return res;
        vector<int>  tmp;
        helper(res,root,sum,tmp);
        return res;
    }

private:
    void helper(vec& res,TreeNode* root,int sum,vector<int> tmp){
        if(!root)
            return;
        tmp.push_back(root->val);
        if(sum == root->val && !root->left && !root->right){
            res.push_back(tmp);
            return;
        }

        if(root->left){
            helper(res,root->left,sum-root->val,tmp);
        }
        if(root->right){
            helper(res,root->right,sum-root->val,tmp);
        }

    }
};