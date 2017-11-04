//
// Created by lll on 2017/11/1.
//
#include "../DataStruct.h"
#include <stack>
using namespace std;
class BSTIterator {
public:
    BSTIterator(TreeNode *root) {
        while (root){
            q.push(root);
            root = root->left;
        }
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !q.empty();
    }

    /** @return the next smallest number */
    int next() {
        TreeNode* t = q.top();
        q.pop();
        int res = t->val;
        if(t->right){
            t = t->right;
            while (t){
                q.push(t);
                t = t->left;
            }
        }
        return res;
    }

private:
    stack<TreeNode*> q;
};
