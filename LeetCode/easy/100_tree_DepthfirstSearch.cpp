//
// Created by lh on 2017/9/20.
//
#include <iostream>
#include <stack>
using std::stack;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
//class Solution {
//public:
//    bool isSameTree(TreeNode* p, TreeNode* q) {
//        if(!p && !q)
//            return true;
//        if(!p&& q|| p&&!q || p->val != q->val)
//            return false;
//        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
//    }
//};

class Solution{
public:
    bool isSameTree(TreeNode*p,TreeNode* q){
        stack<TreeNode*> m,n;
        if(p)m.push(p);
        if(q)n.push(q);
        while (!m.empty() && !n.empty()){
            TreeNode* t1 = m.top();
            m.pop();
            TreeNode* t2 = n.top();
            n.pop();

            if(t1->val != t2->val) return false;
            if(t1->left)m.push(t1->left);
            if(t2->left)n.push(t2->left);
            if(m.size()!= n.size()) return false;
            if(t1->right)m.push(t1->right);
            if(t2->right)n.push(t2->right);
            if(m.size()!=n.size())return false;
        }
        return m.size()==n.size();
    }
};