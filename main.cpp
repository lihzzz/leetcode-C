#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include "DataStruct.h"
//#include "content/17-11-05/721.cpp"
#include "medium/78_Array_Backtracking_BitManipulation.cpp"
//#include "hard/719_Array_BinarySearch_Heap.cpp"
using namespace std;


int main() {
    //Solution sl;
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
    vector<int> nums = {1,2,3};
    //vector<int> nums2 = {2,30};
    vector<vector<int>> nums2={{1,2,3},{4,5,6},{7,8,9}};
    //nums.push_back(data);
    vector<string> strs = {"5","2","C","D","+"};
    string s = "leeeeetcode";
    string t = "ss";
    vector<vector<string>> ss = {{"David","David0@m.co","David4@m.co","David3@m.co"},{"David","David5@m.co","David5@m.co","David0@m.co"},{"David","David1@m.co","David4@m.co","David0@m.co"},
                                 {"David","David0@m.co","David1@m.co","David3@m.co"},{"David","David4@m.co","David1@m.co","David3@m.co"}};
    Solution sl;
    sl.subsets(nums);
//    RangeModule rm;
//    rm.addRange(10,180);
//    rm.addRange(150,200);
//    rm.addRange(250,500);
//    cout<< rm.queryRange(50,100);
//    cout << rm.queryRange(180,300);
//    cout << rm.queryRange(600,1000);
//    rm.removeRange(50,100);
//    cout << rm.queryRange(50,100);
    return 0;
}
