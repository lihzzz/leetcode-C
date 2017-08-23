#include <iostream>
#include <vector>
#include "code/4.cpp"
using namespace std;
int main() {
    Solution sl;
    vector<int> v1,v2;
    v1.push_back(1);
    //v1.push_back(3);
    v2.push_back(1);
    //v2.push_back(4);
    cout << sl.findMedianSortedArrays(v1,v2);
    return 0;
}