//
// Created by lh on 2017/9/28.
//
#include <vector>
using std::vector;
//class Solution {
//public:
//    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//       int a = 0,b = 0;
//        vector<int> res;
//        for (int i = 0; i <m+n ; ++i) {
//            if(a<m && b<n){
//                if(nums1[a] < nums2[b]) {
//                    res.push_back(nums1[a]);
//                    ++a;
//                }
//                else {
//                    res.push_back(nums2[b]);
//                    ++b;
//                }
//            }else if(a<m && b>= n){
//                res.push_back(nums1[a]);
//                ++a;
//            }else if(a>=m && b<=n){
//                res.push_back(nums2[b]);
//                ++b;
//            }
//        }
//        for (int j = 0; j <m+n ; ++j) {
//            nums1[j] = res[j];
//        }
//    }
//};


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int last = m+n-1;
        int a = m-1,b = n-1;
        while(a>=0 && b>=0){
            nums1[last--] = nums1[a]>nums2[b]?nums1[a--]:nums2[b--];
        }
        while(b>=0){
            nums1[last--] = nums2[b--];
        }
    }
};