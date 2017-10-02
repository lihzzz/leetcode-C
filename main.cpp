#include <iostream>
#include <vector>
#include <string>
#include "medium/419.cpp"
using namespace std;


int main() {
    Solution sl;
    vector<int> nums = {1,2,3,4,5,6};
    //vector<int> nums2 = {2,30};
    vector<vector<char>> nums2={{'X','.','.','X'},{'.','.','.','X'},{'.','.','.','X'}};
    //nums.push_back(data);
    vector<string> strs = {"5","2","C","D","+"};

    cout << sl.countBattleships(nums2);
    return 0;
}
