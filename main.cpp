#include <iostream>
#include <vector>
#include <string>
#include "code/152.cpp"
using namespace std;
int main() {
    Solution sl;
    int data[] = {2,-5,-2,-4,3};
    vector<int> nums(begin(data),end(data));
    //nums.push_back(data);
    cout << sl.maxProduct(nums);
    return 0;
}