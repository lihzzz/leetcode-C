//
// Created by lh on 2017/9/22.
//
#include <vector>
#include <unordered_map>
using std::vector;
using std::unordered_map;
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> res;
        if(nums.empty())return {};
        int n = nums.size();
        for(auto a:nums){
            if(++m[a] == 2)
                res.push_back(a);
        }
        for (int i = 1; i <=n ; ++i) {
            if(!m.count(i)){
                res.push_back(i);
                break;
            }
        }
        return res;
    }
};