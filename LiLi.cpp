//
// Created by lh on 2017/12/30.
//
#include <vector>
#include <climits>
#include <string>
#include <algorithm>
#include "DataStruct.h"
#include <stack>
#include <queue>
using namespace std;

class Solution {
public:
    /**
     * @param root: A Tree
     * @return: Preorder in ArrayList which contains node values.
     */
    vector<int> postorderTraversal(TreeNode * root) {
        // write your code here
        vector<int>res;
        if(!root)
            return res;

        s.push(root);
        TreeNode* head = root;
        while (!s.empty()){
            TreeNode* t =s.top();
            if(!t->left && !t->right || t->left == head||t->right == head){
                res.push_back(t->val);
                s.pop();
                head = t;
            }
            else{
                if(t->right)s.push(t->right);
                if(t->left) s.push(t->left);
            }
        }
        return res;
    }

private:
    stack<TreeNode*>s;
};

