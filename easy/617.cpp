//
// Created by lh on 2017/9/16.
//
#include <vector>
using std::vector;
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
//class Solution {
//public:
//    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
//        TreeNode* res;
//        serach(t1,t2,res);
//        return res;
//    }
//
//    void serach(TreeNode* t1,TreeNode* t2,TreeNode* &res){
//        if(!t1 && !t2)
//            return;
//        else if(t1 && !t2){
//            res = new TreeNode(t1->val);
//            serach(t1->left,NULL,res->left);
//            serach(t1->right,NULL,res->right);
//        } else if(!t1 && t2){
//            res = new TreeNode(t2->val);
//            serach(NULL,t2->left,res->left);
//            serach(NULL,t2->right,res->right);
//        } else{
//            res = new TreeNode(t1->val + t2->val);
//            serach(t1->left,t2->left,res->left);
//            serach(t1->right,t2->right,res->right);
//        }
//    }
//};

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {

        if(!t1) return t2;
        if(!t2) return t1;

        TreeNode* res = new TreeNode(t1->val+t2->val);
        res -> left = mergeTrees(t1->left,t2->left);
        res -> right = mergeTrees(t1->right,t2->right);

        return res;
    }
};