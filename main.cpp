#include <iostream>
#include <vector>
#include <string>
#include "DataStruct.h"
//#include "content/17-10-08/694.cpp"
//#include "medium/592_Math.cpp"
#include "medium/343_Math_DP.cpp"
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
    vector<vector<int>> nums2={{1,1,0,0},{1,1,0,0},{0,0,1,1},{0,0,1,1}};
    //nums.push_back(data);
    vector<string> strs = {"5","2","C","D","+"};
    string s = "1+2*3+(4*5+6)*7";
    cout << sl.integerBreak(5);
    return 0;
}
