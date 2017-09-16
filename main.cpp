#include <iostream>
#include <vector>
#include <string>
#include "code2/15.cpp"
using namespace std;
int main() {
    Solution sl;
    int data[] = {-1,0,1,2,-1,-4};
    int target = 4;
    vector<int> nums(begin(data),end(data));
//    vector<vector<int>> num_2={nums};
    //nums.push_back(data);
    vector<string> strs = {""};
    sl.threeSum(nums);
    //cout << sl.twoSum(nums,target);
    return 0;
}