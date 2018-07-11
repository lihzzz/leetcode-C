//
// Created by lihzz on 2018/7/9.
//
#include <vector>
#include <unordered_map>
using namespace std;


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int res = 1;
        unordered_map<int,int> m;
        for (int i = 0; i <nums.size(); ++i) {
            if(!m.count(nums[i])){
                m[nums[i]] = 1;
                if(m.count(nums[i]-1)){
                    res = max(res,merge(m,nums[i]-1,nums[i]));
                }
                if(m.count(nums[i]+1)){
                    res = max(res,merge(m,nums[i],nums[i]+1));
                }
            }
        }
        return res;
    }
    int merge(unordered_map<int,int> &m,int key1,int key2){
        int left = key1 - m[key1] + 1;
        int right = key2 + m[key2] - 1;

        int len = right - left + 1;
        m[left] = len;
        m[right] = len;
        return len;
    }
};