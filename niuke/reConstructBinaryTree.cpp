//
// Created by lh on 2018/3/11.
//
#include "../DataStruct.h"
#include <vector>
using namespace std;
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        if(pre.size() == 0 || vin.size() == 0)
            return NULL;
        return helper(pre.begin(),pre.end()-1,vin.begin(),vin.end());
    }
    TreeNode* helper(const vector<int>::iterator it1start,const vector<int>::iterator it1end, const  vector<int>::iterator it2start,const vector<int>::iterator it2end ){
        int rootval = *it1start;
        TreeNode* root = new TreeNode(rootval);

        root->left = root->right = nullptr;

        if(it1start == it1end ){
            if(it2start == it2end && *it1start == *it2start){
                return root;
            }
        }

        vector<int>::iterator rootInorder = it2start;

        while (it2start<=it2end && *rootInorder != rootval){
            ++rootInorder;
        }

//        if(it2start == it2end && *rootInorder != rootval){
//        }

        int leftlen = rootInorder - it2start;
        vector<int>::iterator leftPreEnd = it1start + leftlen;
        if(leftlen > 0){
            root->left = helper(it1start+1,leftPreEnd,it2start,rootInorder-1);
        }
        if(leftlen < it1end - it1start){
            root->right = helper(leftPreEnd+1,it1end,rootInorder+1,it2end);
        }
        return root;

    }
};