//
// Created by lh on 2018/3/15.
//

#include "../DataStruct.h"
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        vector<vector<int> > res;
        vector<int> tmp;
        helper(root,expectNumber,res,tmp);
        return res;
    }
    void helper(TreeNode* root,int ex,vector<vector<int> >& res,vector<int> tmp){

        if(!root || ex < 0){
            return;
        }
        tmp.push_back(root->val);
        ex = ex -root->val;
        if(ex == 0 && !root->left && !root->right){
            res.push_back(tmp);
            return;
        }
        if(root->left){
            helper(root->left,ex,res,tmp);
        }
        if(root->right){
            helper(root->right,ex,res,tmp);
        }
    }
};