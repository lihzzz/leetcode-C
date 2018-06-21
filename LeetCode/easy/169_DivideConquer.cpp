//
// Created by lh on 2017/9/19.
//
#include <vector>
#include <unordered_map>
using std::vector;
using std::unordered_map;
//class Solution {
//public:
//    int majorityElement(vector<int>& nums) {
//        unordered_map<int,int> m;
//        for (auto a:nums) {
//            if(++m[a]>nums.size()/2)
//                return a;
//        }
//    }
//};

//class Solution {
//public:
//    int majorityElement(vector<int>& nums) {
//        int res = 0;
//        for (int i = 0; i <32 ; ++i) {
//            int ones = 0,zeros = 0;
//            for (auto a:nums) {
//                if((a & (1<<i)) != 0) ones ++;
//                else zeros++;
//            }
//            if(ones > zeros)
//                res|= (1<<i);
//        }
//        return res;
//    }
//};

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res = 0,cnt = 0;
        for(auto a:nums){
            if(cnt == 0){
                res = a;
                cnt ++;
            } else if(res == a) cnt ++;
            else{
                cnt --;
            }
        }
        return res;
    }
};