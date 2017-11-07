//
// Created by lh on 17-11-9.
//
#include <vector>
#include <algorithm>
#include "../DataStruct.h"
using namespace std;
class Solution {
public:
    int eraseOverlapIntervals(vector<Interval>& intervals) {
        if(intervals.empty())
            return 0;
        sort(intervals.begin(),intervals.end(),[](Interval &a,Interval& b){
            if(a.start < b.start) return true;
            else if(a.start == b.start) return a.end<=b.end;
            else return false;
        });
        int res = 0,pre = 0;
        for (int i = 1; i < intervals.size(); ++i) {
            if(intervals[i].start < intervals[pre].end){
                res ++;
                if(intervals[i].end < intervals[pre].end) pre = i;
            }else{
                pre = i;
            }
        }
        return res;
    }
};