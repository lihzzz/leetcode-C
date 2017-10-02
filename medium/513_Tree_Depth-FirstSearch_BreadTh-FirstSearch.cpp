//
// Created by lh on 2017/10/2.
//

#include "../DataStruct.h"
#include <queue>
using std::queue;
//class Solution {
//public:
//    int findBottomLeftValue(TreeNode* root) {
//        int level = 1,left,maxlevel=0;
//        helper(root,1,maxlevel,left);
//        return left;
//    }
//    void helper(TreeNode* r,int level,int& maxlevel,int & left){
//        if(!r)
//            return;
//        if(level>maxlevel){
//            left = r->val;
//            maxlevel = level;
//        }
//        helper(r->left,level+1,maxlevel,left);
//        helper(r->right,level+1,maxlevel,left);
//    }
//};

class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        if(!root)
            return 0;
        int res = 0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            for (int i = 0; i <n ; ++i) {
                TreeNode* tmp = q.front();
                q.pop();
                if(i==0)
                    res = tmp->val;
                if(tmp->left)q.push(tmp->left);
                if(tmp->right)q.push(tmp->right);
            }
        }
        return res;
    }
};

