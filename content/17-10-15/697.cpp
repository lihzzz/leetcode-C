//
// Created by lh on 2017/10/15.
//
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;


class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        if(nums.empty())
            return 0;
        unordered_map<int,int> m;
        vector<int> maxv;
        int maxcount=0;
        for(auto a: nums)
            ++m[a];
        for(auto a:m)
            maxcount = max(maxcount,a.second);
        if(maxcount == 1)
            return 1;
        for(auto a:m){
            if(a.second == maxcount)
                maxv.push_back(a.first);
        }
        int minlen = INT_MAX;
        for(auto a:maxv){
            int begin = find(nums.begin(),nums.end(),a)-nums.begin();
            for (int i = nums.size()-1; i > begin;--i) {
                if(nums[i] == a){
                    minlen = min(minlen,i-begin+1);
                    break;
                }

            }
        }
        return minlen;
    }
};

