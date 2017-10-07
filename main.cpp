#include <iostream>
#include <vector>
#include <string>
#include "DataStruct.h"
#include "medium/477_BitManipulation.cpp"
using namespace std;


int main() {
    Solution sl;
    TreeNode* t = new TreeNode(5);
    TreeNode* t1 = new TreeNode(2);
    TreeNode* t2 = new TreeNode(-3);
    t->left = t1;
    t->right = t2;
    vector<int> nums = {4,14,2};
    //vector<int> nums2 = {2,30};
    vector<vector<int>> nums2={{1,1,0},{1,1,0},{0,0,1}};
    //nums.push_back(data);
    vector<string> strs = {"5","2","C","D","+"};
    string s = "aaaaa";
    cout << sl.totalHammingDistance(nums);
    return 0;
}
