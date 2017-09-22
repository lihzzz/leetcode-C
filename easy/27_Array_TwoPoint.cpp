//
// Created by lh on 2017/9/22.
//
#include <vector>
using std::vector;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>::iterator it = nums.begin();
        while (it!=nums.end()){
            if(*it == val)
                it = nums.erase(it);
            else it++;
        }
        return nums.size();
    }
};