//
// Created by lh on 2017/10/6.
//
#include <vector>
using std::vector;

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int res = 0;
        if(timeSeries.empty())
            return res;
        int n = timeSeries.size();
        for (int i = 0; i <n-1 ; ++i) {
            int diff = timeSeries[i+1] - timeSeries[i];
            if(diff >= duration){
                res += duration;
            } else{
                res += diff;
            }
        }
        res += duration;
        return res;
    }
};