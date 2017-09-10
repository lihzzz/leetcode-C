#include <iostream>
#include <vector>
#include <string>
#include "code/53.cpp"
using namespace std;
int main() {
    Solution sl;
    int data[] = {1,2};
    vector<int> nums(begin(data),end(data));
    //nums.push_back(data);
    cout << sl.maxSubArray(nums);
    return 0;
}