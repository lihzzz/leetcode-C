//
// Created by lh on 17-12-3.
//
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
//class Solution {
//public:
//    int deleteAndEarn(vector<int>& nums) {
//        if(nums.empty()){
//            return 0;
//        }
//        map<long long,long long> m;
//        for (auto& a: nums) {
//            m[a] += a;
//        }
//        int n = m.size();
//        vector<long long> dp(n,0);
//        int index = 0;
//        map<long long,long long>::iterator iter = m.begin();
//        dp[index++] = iter->second;
//        iter++;
//        if(iter == m.end()){
//            return dp[index-1];
//        }
//        dp[index++] = iter->second;
//        iter++;
//        if(iter == m.end()){
//            return max(dp[index-1],dp[index-2]);
//        }
//        for (; iter !=m.end() ; ++iter) {
//            dp[index] = max(dp[index-1],dp[index-2] + iter->second);
//            index++;
//        }
//        return dp[index-1];
//    }
//};

class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        sort(nums.begin(),nums.end());
        vector<long long> v(nums.back()+1,0);
        for (auto& a: nums) {
            v[a] += a;
        }
        int n = nums.back()+1;
        if(n==1){
            return v[0];
        }
        if(n==2){
            return max(v[0],v[1]);
        }
        vector<long long> dp(nums.back()+1,0);
        dp[0] = v[0];
        dp[1] = v[1];
        for (int i = 2; i <n ; ++i) {
            dp[i] = max(dp[i-1],dp[i-2]+v[i]);
        }
        return dp.back();
    }
};