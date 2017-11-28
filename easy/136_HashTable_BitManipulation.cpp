//
// Created by LH on 2017/11/28.
//
#include <vector>
#include <unordered_map>
using namespace std;
//class Solution {
//public:
//    int singleNumber(vector<int>& nums) {
//        unordered_map<int,int> m;
//        for(auto& a:nums){
//            m[a]++;
//        }
//        for(auto& a:m){
//            if(a.second == 1)
//                return a.first;
//        }
//    }
//};

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int tmp = 0;
        for(auto& a:nums){
            tmp ^= a;
        }
        return tmp;
    }
};