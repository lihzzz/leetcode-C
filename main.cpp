#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include "DataStruct.h"
//#include "content/17-12-17/750.cpp"
#include "medium/334.cpp"
//#include "hard/719_Array_BinarySearch_Heap.cpp"
//#include "niuke/Hanoi_Problem.cpp"
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
    vector<int> nums = {0,4,2,1,0,-1,-3};
    //vector<int> nums2 = {2,30};
    vector<vector<int>> nums2={{1,1,1},{1,1,1},{1,1,1}};
    //nums.push_back(data);
    vector<string> strs = {"measure","other","every","base","according","level","meeting","none","marriage","rest"};
    string t = "10";
    Solution sl;
    sl.increasingTriplet(nums);
//    MyCalendarTwo MyCalendar;
//    cout << MyCalendar.book(24, 40); // returns true
//    cout << MyCalendar.book(43, 50); // returns true
//    cout << MyCalendar.book(27, 43); // returns true
//    cout << MyCalendar.book(5, 21); // returns false
//    cout<< MyCalendar.book(30, 40); // returns true
//    cout << MyCalendar.book(14, 29); // returns true
//    cout << MyCalendar.book(3, 19);
//    cout << MyCalendar.book(3, 14);
//    cout << MyCalendar.book(25, 39);
//    cout << MyCalendar.book(6, 19);
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

