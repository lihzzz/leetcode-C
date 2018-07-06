//
// Created by lihzz on 2018/7/3.
//
#include <vector>
#include <deque>
using namespace std;
class Solution {
public:
    /*
     * @param nums: A list of integers
     * @param k: An integer
     * @return: The maximum number inside the window at each moving
     */
    vector<int> maxSlidingWindow(vector<int> nums, int k) {
        // write your code here
        vector<int> res;
        if(nums.size() < k){
            return res;
        }
        deque<int> q;
        int count = 0;
        for(int i = 0 ;i< nums.size();++i){
            if(!q.empty()){
                ++count;
                while(!q.empty() && nums[q.back()] <  nums[i]){
                    q.pop_back();
                }
                q.push_back(i);
            }else{
                ++count;
                q.push_back(i);
            }
            if(q.front()<i-k+1)
                q.pop_front();
            if(count == k){
                res.push_back(nums[q.front()]);
                --count;
            }
        }
        return res;

    }
};