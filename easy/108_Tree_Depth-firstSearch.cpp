//
// Created by lh on 2017/9/21.
//
#include <iostream>
#include <vector>
#include <cmath>
using std::pow;
using std::vector;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.empty())
            return NULL;
        return helper(nums,0,nums.size()-1);
    }

    TreeNode* helper(vector<int> &num,int a,int b){
        if(a>b) return NULL;
        int mid = (a+b)/2;
        TreeNode* t = new TreeNode(num[mid]);
        t->left = helper(num,a,mid-1);
        t->right = helper(num,mid+1,b);
        return t;
    }
};