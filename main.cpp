#include <iostream>
#include <vector>
#include <string>
#include "easy/101_Tree_Depth-FirstSearch_BreadTh-FirstSearch.cpp"
using namespace std;


int main() {
    Solution sl;
    TreeNode* q = new TreeNode(1);
    TreeNode* q1 = new TreeNode(2);
    q->left = q1;
    int data1[] = {4,1,2,7,5,3,1};
    int target = 4;
    vector<int> nums(begin(data1),end(data1));
    vector<vector<int>> num_2={{2,3,4},{5,6,7},{8,9,10},{11,12,13},{14,15,16}};
    //nums.push_back(data);
    //vector<string> strs = {""};
    int number = 11;
    cout << sl.isSymmetric(q);
    //cout << sl.twoSum(nums,target);
    return 0;
}
