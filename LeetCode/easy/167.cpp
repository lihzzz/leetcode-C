//
// Created by lh on 2017/9/19.
//
#include <vector>
using std::vector;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0,right = numbers.size()-1;
        while (true){
            int sum = numbers[left] + numbers[right];
            if( sum == target)
                return {left+1,right+1};
            else if(sum < target){
                left ++;
            } else{
                right --;
            }
        }
    }
};