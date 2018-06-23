//
// Created by lihzz on 2018/6/23.
//

#include "../../DataStruct.h"
#include <vector>

using namespace std;
class Solution {
public:
    int eraseOverlapIntervals(vector<Interval>& intervals) {
        if(intervals.empty())
            return 0;
        sort(intervals.begin(),intervals.end(),[](Interval a ,Interval b){
            return a.end < b.end;
        });

        int cnt = 1;
        int end = intervals[0].end;
        for (int i = 1; i <intervals.size() ; ++i) {
            if(intervals[i].start<end){
                continue;
            }
            end = intervals[i].end;
            ++cnt;
        }

        return intervals.size()-cnt;
    }
};