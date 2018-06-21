//
// Created by lh on 2017/12/19.
//
#include <vector>
#include <unordered_map>
using namespace std;
//class Solution {
//public:
//    bool increasingTriplet(vector<int>& nums) {
//        int m1 = INT_MAX,m2 = INT_MAX;
//        for(auto& a:nums){
//            if(m1>=a) m1 = a;
//            else if(m2 >=a) m2 = a;
//            else return true;
//        }
//        return false;
//    }
//};

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        if(n<3)
            return false;
        vector<int> front(n,nums.front());
        vector<int> back(n,nums.back());
        for (int i = 1; i <n ; ++i) {
            front[i] = min(front[i-1],nums[i]);
        }

        for (int j = n-2; j >=0 ; --j) {
            back[j] = max(back[j+1],nums[j]);
        }

        for (int k = 0; k <n ; ++k) {
            if(nums[k] > front[k] && nums[k]< back[k])
                return true;
        }
        return false;
    }
};