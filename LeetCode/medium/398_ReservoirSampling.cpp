//
// Created by lh on 2017/10/19.
//
#include <vector>
#include <cstdlib>

using namespace std;
class Solution {
public:
    Solution(vector<int> nums) {
        vec = nums;
    }

    int pick(int target) {
        int res = 0,cnt = 0;
        for (int i = 0; i <vec.size() ; ++i) {
            if(vec[i] == target){
                ++cnt;
                int r = rand()%cnt;
                if(r == 0) res = i;
            }

        }
        return res;
    }

private:
    vector<int> vec;
};