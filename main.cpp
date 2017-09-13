#include <iostream>
#include <vector>
#include <string>
#include "code1/34.cpp"
using namespace std;
int main() {
    Solution sl;
    int data[] = {5,7,7,8,8,10};
    int target = 8;
    vector<int> nums(begin(data),end(data));
    //nums.push_back(data);
    sl.searchRange(nums,target);
    return 0;
}