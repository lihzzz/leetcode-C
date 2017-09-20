#include <iostream>
#include <vector>
#include <string>
#include "easy/409_HashTable.cpp"
using namespace std;
int main() {
    Solution sl;
    int data1[] = {5,4,3,2,1};
    int target = 4;
    vector<int> nums(begin(data1),end(data1));
    vector<vector<int>> num_2={{2,3,4},{5,6,7},{8,9,10},{11,12,13},{14,15,16}};
    //nums.push_back(data);
    //vector<string> strs = {""};
    string str ="ccc";
    cout << sl.longestPalindrome(str);
    //cout << sl.twoSum(nums,target);
    return 0;
}