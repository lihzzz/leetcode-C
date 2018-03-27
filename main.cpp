#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include "DataStruct.h"
#include "tool.h"
//#include "content/18-01-14/765.cpp"
//#include "LiLi.cpp"
#include "lintcode/sort.cpp"
// #include "niuke/InversePairs.cpp"
//#include "medium/334.cpp"
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
    vector<int> nums = {3,2,1,4,5};
    //vector<int> nums2 = {2,30};
    vector<vector<int>> nums2={{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
    //nums.push_back(data);
    vector<string> strs = {"measure","other","every","base","according","level","meeting","none","marriage","rest"};
    string t ="abcXYZdef";

    Solution sl;
    vector<vector<Interval>> time = {{Interval(1,2),Interval(5,6)},{Interval{1,3}},{Interval{4,10}}};
//    TreeNode* root = new TreeNode(10);
//    TreeNode* a = new TreeNode(5);
//    TreeNode* b = new TreeNode(12);
//    TreeNode* c = new TreeNode(4);
//    TreeNode* d = new TreeNode(7);
//    root->left = a;
//    root->right = b;
//    a->left = c;
//    a->right = d;
    sl.sortIntegers(nums);
//    int times = 200000;
//    for (int i = 10000; i < 200000; ++i) {
//        vector<int> data = generateRandomArray(i,10000000);
//        sl.InversePairs(nums);
//    }




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

