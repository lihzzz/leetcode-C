//
// Created by lh on 2017/9/16.
//
#include <vector>
#include <set>
#include <algorithm>
using std::set;
using std::sort;
using std::vector;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> res;
        if(nums.size() < 4)
            return vector<vector<int>>();
        sort(nums.begin(),nums.end());
        for (int i = 0; i <nums.size()-3 ; ++i) {
            for (int j = i+1; j <nums.size()-2 ; ++j) {
                int left = j+1,right = nums.size()-1;
                while (left < right){
                    int sum = nums[i] + nums[j] + nums[left] + nums[right];
                    if(sum == target){
                        vector<int> tmp;
                        tmp.push_back(nums[i]);
                        tmp.push_back(nums[j]);
                        tmp.push_back(nums[left]);
                        tmp.push_back(nums[right]);
                        res.insert(tmp);
                        left ++ ;
                        right --;
                    }else if(sum < target)left ++;
                    else right --;
                }
            }
        }
        return vector<vector<int>>(res.begin(),res.end());
    }
};