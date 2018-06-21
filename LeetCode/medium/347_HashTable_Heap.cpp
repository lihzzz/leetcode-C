//
// Created by lh on 2017/10/6.
//
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        priority_queue<pair<int,int>>q;
        vector<int> res;
        for(auto a:nums)++m[a];
        for(auto a:m){
            q.push({a.second,a.first});
        }
        while (k>0 && !q.empty()){
            auto a = q.top();
            q.pop();
            res.push_back(a.second);
            --k;
        }
        return res;
    }
};