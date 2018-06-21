//
// Created by lh on 2017/10/13.
//
#include <vector>
using namespace std;
//class Solution {
//public:
//    bool PredictTheWinner(vector<int>& nums) {
//        int sum1 = 0 ,sum2 = 0;
//        return helper(nums,sum1,sum2,0);
//    }
//    bool helper(vector<int>nums,int sum1,int sum2,int who){
//        if(nums.empty()) return sum1>=sum2;
//        if(nums.size() == 1){
//            if(who == 0){
//                return sum1+nums[0] >= sum2;
//            } else{
//                return sum2+nums[0] > sum1;
//            }
//        }
//
//        vector<int> lv(nums.begin()+1,nums.end());
//        vector<int> rv(nums.begin(),nums.end()-1);
//        if(who == 0)
//            return !helper(lv,sum1+nums[0],sum2,1) || !helper(rv,sum1+nums.back(),sum2,1);
//        else
//            return !helper(lv,sum1,sum2+nums[0],0) || !helper(rv,sum1,sum2+nums.back(),0);
//
//    }
//};


class Solution {
public:
    bool PredictTheWinner(vector<int>& nums) {
        int sum1 = 0 ,sum2 = 0;
        return helper(nums,sum1,sum2,0);
    }
    bool helper(vector<int>nums,int sum1,int sum2,int who){


    }
};