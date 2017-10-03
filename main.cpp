#include <iostream>
#include <vector>
#include <string>
#include "medium/540.cpp"
using namespace std;


int main() {
    Solution sl;
    vector<int> nums = {1,1,2,2,3,3};
    //vector<int> nums2 = {2,30};
    vector<vector<char>> nums2={{'X','.','.','X'},{'.','.','.','X'},{'.','.','.','X'}};
    //nums.push_back(data);
    vector<string> strs = {"5","2","C","D","+"};

    cout << sl.singleNonDuplicate(nums);
    return 0;
}
