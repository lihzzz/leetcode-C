#include <iostream>
#include <vector>
#include <string>
#include "DataStruct.h"
#include "content/17-10-15/696.cpp"
//#include "medium/216_Array_Backtracking.cpp"
//#include "hard/lili.cpp"
using namespace std;


int main() {
    Solution sl;
    ListNode* t1 = new ListNode(1);
//    ListNode* t2 = new ListNode(2);
//    ListNode* t3 = new ListNode(4);
//    ListNode* t4 = new ListNode(3);
//    t1->next = t2;
//    t2->next = t3;
//    t3->next = t4;

    ListNode* a2 = new ListNode(9);
    ListNode* a3 = new ListNode(9);
//    ListNode* a4 = new ListNode(4);
    a2->next = a3;
//    a3->next = a4;
    vector<int> nums = {4,14,2};
    //vector<int> nums2 = {2,30};
    vector<vector<int>> nums2={{1,2,3},{4,5,6},{7,8,9}};
    //nums.push_back(data);
    vector<string> strs = {"5","2","C","D","+"};
    string s = "00110";
    cout << sl.countBinarySubstrings(s);
    return 0;
}
