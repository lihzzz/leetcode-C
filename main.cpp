#include <iostream>
#include <vector>
#include <string>
#include "DataStruct.h"
#include "medium/547_Depth-FirstSearch_UnionFind.cpp"
using namespace std;


int main() {
    Solution sl;
    TreeNode* t = new TreeNode(5);
    TreeNode* t1 = new TreeNode(2);
    TreeNode* t2 = new TreeNode(-3);
    t->left = t1;
    t->right = t2;
    vector<int> nums = {1,3,5,7,9};
    //vector<int> nums2 = {2,30};
    vector<vector<int>> nums2={{1,1,0},{1,1,0},{0,0,1}};
    //nums.push_back(data);
    vector<string> strs = {"5","2","C","D","+"};
    string s = "aaaaa";
    cout << sl.findCircleNum(nums2);
    return 0;
}
