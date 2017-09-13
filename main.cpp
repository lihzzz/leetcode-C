#include <iostream>
#include <vector>
#include <string>
#include "code2/74.cpp"
using namespace std;
int main() {
    Solution sl;
    int data[] = {1};
    int target = 8;
    vector<int> nums(begin(data),end(data));
    vector<vector<int>> num_2={nums};
    //nums.push_back(data);
    cout << sl.searchMatrix(num_2,2);
    return 0;
}