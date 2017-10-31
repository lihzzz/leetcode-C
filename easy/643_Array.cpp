//
// Created by lh on 2017/9/25.
//
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>

using std::accumulate;
using std::max;
using std::vector;
//class Solution {
//public:
//    double findMaxAverage(vector<int>& nums, int k) {
//        int index = 0;
//        double res =INT_MIN ;
//        double sum = 0;
//        int flag = 1;
//        vector<double> dp(nums.size(),0);
//        for (int i = 0; i <nums.size() ; ++i) {
//            sum += nums[i];
//            if(index != k)
//                index ++;
//            else{
//                sum -= nums[i-k];
//                if(flag){
//                    res = sum /index;
//                    flag = 0;
//                }
//            }
//            if((sum / index) > res){
//                res = sum/index;
//            }
//        }
//        return res;
//    }
//};

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        double res = INT_MIN;
        int index = 0;
        if(nums.size()<k){
            for (int i = 0; i < nums.size(); ++i) {
                sum +=nums[i];
                ++index;
                res = max(res,sum/index);
            }
            return res;
        }
        sum = accumulate(nums.begin(),nums.begin()+k,0);
        res = sum;
        for (int i = k; i <nums.size() ; ++i) {
            sum += nums[i]-nums[i-k];
            res = max(sum,res);
        }
        return res / k;
    }
};