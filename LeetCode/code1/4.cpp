#include<algorithm>
#include<vector>
//
// Created by lh on 2017/8/22.
//
using namespace std;
//class Solution {
//public:
//    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//        vector<int> v3 = merge(nums1,nums2);
//        sort(v3.begin(),v3.end());
//        int len = v3.size();
//        if (len % 2 == 0){
//            int med = len /2;
//            return (v3[med] + v3[med-1])/2.0;
//        } else{
//            int med = len/2;
//            return v3[med];
//        }
//    }
//
//    vector<int> merge(vector<int> v1,vector<int> v2){
//        v1.insert(v1.end(),v2.begin(),v2.end());
//        return  v1;
//    }
//};


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len = nums1.size() + nums2.size();
        if(len & 0x1){
            return findkth(nums1,nums2,len/2+1);
        }else{
            return (findkth(nums1,nums2,len/2) + findkth(nums1,nums2,len/2 +1))/2.0;
        }
    }

    int findkth(vector<int> nums1,vector<int> nums2,int k){
        int size1 = nums1.size();
        int size2 = nums2.size();
        if(size1>size2) return findkth(nums2,nums1,k);
        if(size1 == 0) return nums2[k-1];
        if(k == 1) return min(nums1[0],nums2[0]);

        int part1 = min(k/2,size1),part2 = k-part1;
        if(nums1[part1-1] > nums2[part2-1]) {
            vector<int> tmp;
            tmp.insert(tmp.begin(),nums2.begin()+part2,nums2.end());
            return findkth(nums1,tmp,k-part2);
        }else if(nums1[part1-1] < nums2[part2-1]){
            vector<int> tmp;
            tmp.insert(tmp.begin(),nums1.begin()+part1,nums1.end());
            return findkth(tmp,nums2,k-part1);
        }else{
            return nums1[part1-1];
        }
    }
};
