//
// Created by lh on 2017/10/18.
//

#include "../DataStruct.h"
#include <vector>
#include <unordered_map>
using namespace std;
//class Solution {
//public:
//    int rob(TreeNode* root) {
//        unordered_map<TreeNode*,int> m;
//        return helper(root,m);
//
//    }
//    int helper(TreeNode* root,unordered_map<TreeNode*,int>& m){
//        if(!root)
//            return 0;
//        if(m.count(root))
//            return m[root];
//        int val = 0;
//        if(root->left){
//            val += rob(root->left->left) + rob(root->left->right);
//        }
//        if(root->right){
//            val += rob(root->right->left) + rob(root->right->right);
//        }
//        val =  max(val + root->val,rob(root->left) + rob(root->right));
//        m[root] = val;
//        return val;
//    }
//};

class Solution{
public:
    int rob(TreeNode* root){
        vector<int> res = helper(root);
        return max(res[0],res[1]);
    }
    vector<int> helper(TreeNode* root){
        if(!root)return vector<int>(2,0);
        vector<int> left = helper(root->left);
        vector<int> right = helper(root->right);

        vector<int>res(2,0);
        res[0] = max(left[0],left[1]) + max(right[0],right[1]);
        res[1] = left[0] + right[0] + root->val;
        return res;

    }
};