//
// Created by lh on 2017/9/19.
//
#include <vector>
#include <set>
#include <unordered_set>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> res;
        unordered_set<int> vec(nums1.begin(),nums1.end());
        for (int i = 0; i <nums2.size() ; ++i) {
            if(vec.count(nums2[i]))
                res.insert(nums2[i]);
        }
        return vector<int>{res.begin(),res.end()};
    }
};