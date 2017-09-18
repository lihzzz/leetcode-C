#include <iostream>
#include <vector>
#include <string>
#include "easy/566.cpp"
using namespace std;
int main() {
    Solution sl;
    int data1[] = {-1,0,1,2,-1,-4};
    int target = 4;
    //vector<int> nums(begin(data),end(data));
    vector<vector<int>> num_2={{1,2,3,4}};
    //nums.push_back(data);
    //vector<string> strs = {""};
    //string str ="abca";//"aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga"; //"eeccccbebaeeabebccceea";
    sl.matrixReshape(num_2,2,2);
    //cout << sl.twoSum(nums,target);
    return 0;
}