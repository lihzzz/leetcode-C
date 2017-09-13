#include <iostream>
#include <vector>
#include <string>
#include "code2/33.cpp"
using namespace std;
int main() {
    Solution sl;
    int data[] = {0,1,2,3,4,5,6};
    int target = 4;
    vector<int> nums(begin(data),end(data));
//    vector<vector<int>> num_2={nums};
    //nums.push_back(data);
    cout << sl.search(nums,target);
    return 0;
}