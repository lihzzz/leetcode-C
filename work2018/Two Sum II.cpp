//
// Created by lihzz on 2018/8/16.
//
#include "../common_header.h"
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        vector<int> res(2,0);
        int i = 0;
        int j = n-1;
        while (i<j){
            if(numbers[i]+numbers[j]<target){
                i++;
            }else if(numbers[i]+numbers[j] > target){
                j--;
            }else{
                res[0] = i+1;
                res[1] = j+1;
                return res;
            }
        }
        return res;
    }
};