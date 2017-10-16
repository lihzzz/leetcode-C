//
// Created by lh on 2017/10/16.
//

#include "../DataStruct.h"
#include <vector>
#include <stack>
using namespace std;
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        return helper(root,k);
    }
    int helper(TreeNode* root,int& k){
        if(!root)
            return -1;
        int val = helper(root->left,k);
        if(k==0) return val;
        if(--k==0){
            return root->val;
        }
        return helper(root->right,k);
    }
};


//class Solution {
//public:
//    int kthSmallest(TreeNode* root, int k) {
//        int cnt = 0;
//        stack<TreeNode*> s;
//        TreeNode* r = root;
//        while (r || !s.empty()){
//            while(r){
//                s.push(r);
//                r = r->left;
//            }
//            r = s.top();
//            s.pop();
//            cnt ++;
//            if(cnt == k)
//                return r->val;
//            r = r->right;
//        }
//    }
//};
