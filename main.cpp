#include <iostream>
#include <vector>
#include <string>
#include "easy/189_Array.cpp"
using namespace std;


int main() {
    Solution sl;
    vector<int> nums = {1,2,3,4,5,6};
    vector<int> nums2 = {2,30};
    //vector<vector<int>> nums2={{2,3,4},{5,6,7},{8,9,10},{11,12,13},{14,15,16}};
    //nums.push_back(data);
    vector<string> strs = {"5","2","C","D","+"};

    sl.rotate(nums,3);
    //cout << sl.twoSum(nums,target);
    return 0;
}
