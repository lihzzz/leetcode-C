#include <iostream>
#include <vector>
#include <string>
#include "medium/46_Backtracking.cpp"
using namespace std;


int main() {
    Solution sl;
    vector<int> nums = {1,2,3};
    //vector<int> nums2 = {2,30};
    vector<vector<char>> nums2={{'X','.','.','X'},{'.','.','.','X'},{'.','.','.','X'}};
    //nums.push_back(data);
    vector<string> strs = {"5","2","C","D","+"};
    string s = "aaaaa";
    sl.permute(nums);
    return 0;
}
