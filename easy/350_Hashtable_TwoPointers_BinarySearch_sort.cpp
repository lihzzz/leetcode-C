//
// Created by lh on 2017/9/20.
//

#include <vector>
#include <unordered_map>
using std::unordered_map;
using std::vector;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.empty() || nums2.empty())
            return {};
        vector<int> res;
        unordered_map<int,int> m;
        for(auto a:nums1) ++m[a];

        for(auto a:nums2){
            if(m[a]){
                --m[a];
                res.push_back(a);
            }
        }
        return res;
    }
};