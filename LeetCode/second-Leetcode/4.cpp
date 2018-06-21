//
// Created by lh on 2018/3/31.
//

#include <vector>
using  namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>::iterator it1 ,it2;
        it1 = nums1.begin(),it2 = nums2.begin();
        int n = nums1.size() + nums2.size();
        int mid = 0;
        mid = n&1?n/2:(n-1)/2;

        while (mid){
            if(it1!=nums1.end() && it2!=nums2.end() && *it1<=*it2 || it2 == nums2.end()){
                it1++;
            }else if(it1!=nums1.end() && it2!=nums2.end() && *it1>*it2  || it1==nums1.end()){
                it2++;
            }
            mid --;
        }



    }
};