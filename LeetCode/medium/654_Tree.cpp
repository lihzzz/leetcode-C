//
// Created by lh on 2017/10/2.
//

#include "../DataStruct.h"
#include <vector>
#include <algorithm>
using std::vector;
using std::max_element;
using std::distance;
using std::find;
//class Solution {
//public:
//    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
//        if(nums.empty())
//            return NULL;
//        int peak = *max_element(nums.begin(),nums.end());
//        vector<int>::iterator it = find(nums.begin(),nums.end(),peak);
//        int index =distance(nums.begin(),it);
//        TreeNode* root = new TreeNode(peak);
//        vector<int> left(nums.begin(),it),right(it+1,nums.end());
//        root->left = constructMaximumBinaryTree(left);
//        root->right = constructMaximumBinaryTree(right);
//        return root;
//    }
//};

class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        vector<TreeNode*> v;
        for(auto num:nums){
            TreeNode* node = new TreeNode(num);
            while (!v.empty() && v.back()->val<num){
                node->left = v.back();
                v.pop_back();
            }
            if(!v.empty()){
                v.back()->right = node;
            }
            v.push_back(node);
        }
        return v.front();
    }
};