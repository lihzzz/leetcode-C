#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include "DataStruct.h"
#include "tool/tool.h"
//#include "content/18-01-14/765.cpp"
//#include "LiLi.cpp"
//#include "lintcode/sort.cpp"
#include "work/KMP.cpp"
//#include "LeetCode/third/Unique Paths II.cpp"
//#include "Datastruct/stackAndQueue/reverseBetween.cpp"
//#include "hard/719_Array_BinarySearch_Heap.cpp"
//#include "niuke/maxInWindows.cpp"

using namespace std;

template <typename T>
void printer(vector<T> data){
    int size = data.size();
    for (int i = 0; i < size ; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;
}

//int main() {
//    //Solution sl;
//    ListNode* t1 = new ListNode(1);
//    ListNode* t2 = new ListNode(2);
//    ListNode* t3 = new ListNode(3);
//    ListNode* t4 = new ListNode(4);
//    ListNode* t5 = new ListNode(5);
//    t1->next = t2;
//    t2->next = t3;
//    t3->next = t4;
//    t4->next = t5;
//    vector<int> nums = {5,4,3,2,1};
//
//    //vector<int> nums2 = {2,30};
//    vector<vector<int>> nums2={{1,0}};
//    //nums.push_back(data);
//    vector<string> strs = {"measure","other","every","base","according","level","meeting","none","marriage","rest"};
//    string t ="mississippi";
//
//    Solution sl;
//    vector<int> prefix(t.length(),0);
//    sl.strStr(t,"issip");
////    TreeNode* root = new TreeNode(10);
////    TreeNode* a = new TreeNode(5);
////    TreeNode* b = new TreeNode(12);
////    TreeNode* c = new TreeNode(4);
////    TreeNode* d = new TreeNode(7);
////    root->left = a;
////    root->right = b;
////    a->left = c;
////    a->right = d;
////    int times = 200000;
////    for (int i = 10000; i < 200000; ++i) {
////        vector<int> data = generateRandomArray(i,10000000);
////        sl.InversePairs(nums);
////    }
//
//
//
//
//    return 0;
//}

