#include <iostream>
#include <vector>
#include <string>
#include "easy/551_String.cpp"
using namespace std;
int main() {
    Solution sl;
    int data1[] = {1,2,5,3,4};
    int target = 4;
    vector<int> nums(begin(data1),end(data1));
    vector<vector<int>> num_2={{2,3,4},{5,6,7},{8,9,10},{11,12,13},{14,15,16}};
    //nums.push_back(data);
    //vector<string> strs = {""};
    string str ="LALL";
    cout << sl.checkRecord(str);
    //cout << sl.twoSum(nums,target);
    return 0;
}
//int main(){
//    string a ="abcd";
//    string d ="ee";
//    a.insert(a.begin(),'f');
//    string::iterator it;
//    for (it = a.begin(); it!=a.end(); ++it) {
//        cout << *it;
//    }
//}