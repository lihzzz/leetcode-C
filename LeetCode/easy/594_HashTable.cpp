//
// Created by lh on 2017/9/22.
//
#include <vector>
#include <map>
using std::map;
using std::vector;
using std::max;
using std::next;
using std::prev;
class Solution {
public:
    int findLHS(vector<int>& nums) {
        if(nums.empty())
            return 0;
        map<int,int> m ;
        int res = 0;
        for(auto a:nums)
            ++m[a];
        for (auto it = next(m.begin());it != m.end();it++) {
            auto pre = prev(it);
            if(it->first ==  pre->first +1){
                res = max(res,it->second+pre->second);
            }
        }
        return res;
    }
};