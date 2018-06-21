//
// Created by lh on 2017/10/7.
//
#include <vector>
using namespace std;

//TLE
//class Solution {
//public:
//    int totalHammingDistance(vector<int>& nums) {
//        int n = nums.size(),res = 0;
//        for (int i = 0; i <n ; ++i) {
//            for (int j = i+1; j <n ; ++j) {
//                res += getHamming(nums[i],nums[j]);
//            }
//        }
//        return res;
//    }
//    int getHamming(int a,int b){
//        int diff = a^b;
//        int res = 0;
//        while (diff ){
//            if(diff&1)
//                ++res;
//            diff >>= 1;
//        }
//        return res;
//    }
//};

class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int n = nums.size(),res = 0;
        for (int i = 0; i <32 ; ++i) {
            int cnt = 0;
            for(int num : nums){
                if(num & (1<<i))++cnt;
            }
            res += cnt*(n-cnt);
        }
        return res;
    }
};