#include <iostream>
#include <vector>
#include <string>
#include "easy/26_Array_TwoPoint.cpp"
using namespace std;


int main() {
    Solution sl;
    int data1[] = {1,1,1};
    int target = 4;
    vector<int> nums(begin(data1),end(data1));
    vector<vector<int>> num_2={{2,3,4},{5,6,7},{8,9,10},{11,12,13},{14,15,16}};
    //nums.push_back(data);
    vector<string> strs = {"5","2","C","D","+"};
    int number = 11;
    string s = "abab";
    cout << sl.removeDuplicates(nums);
    //cout << sl.twoSum(nums,target);
    return 0;
}
