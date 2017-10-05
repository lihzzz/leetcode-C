//
// Created by lh on 2017/10/5.
//
#include <vector>
#include <functional>
#include <numeric>
using std::bit_xor;
using std::accumulate
using std::vector;
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int diff = accumulate(nums.begin(),nums.end(),0,bit_xor<int>());
        diff &= -diff;
        vector<int> res(2,0);
        for(auto num:nums){
            if(num & diff){
                res[0] ^= num;
            } else{
                res[1] ^= num;
            }
        }
        return res;
    }
};
