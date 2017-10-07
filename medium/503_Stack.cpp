//
// Created by lh on 2017/10/7.
//
#include <vector>
#include <stack>
using namespace std;
//class Solution {
//public:
//    vector<int> nextGreaterElements(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> res(n,-1);
//        for (int i = 0; i <n ; ++i) {
//            for (int j = i+1; j <i+n ; ++j) {
//                if(nums[j%n] > nums[i]){
//                    res[i] = nums[j%n];
//                    break;
//                }
//            }
//        }
//        return res;
//    }
//};

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n,-1);
        stack<int> s;
        for (int i = 0; i < 2*n; ++i) {
            int num = nums[i%n];
            while (!s.empty() && nums[s.top()] < num){
                res[s.top()] = num;
                s.pop();
            }
            if(i<n) s.push(i);
        }
        return res;
    }
};