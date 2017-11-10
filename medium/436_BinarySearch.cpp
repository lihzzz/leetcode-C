//
// Created by lh on 17-11-10.
//

#include "../DataStruct.h"
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <climits>

using namespace std;
//class Solution {
//public:
//    vector<int> findRightInterval(vector<Interval>& intervals) {
//        int n = intervals.size();
//        vector<int> res(n,0);
//        for (int i = 0; i <n ; ++i) {
//            int _min = INT_MAX;
//            int index = 0;
//            for (int j = 0; j <n ; ++j) {
//                int sub = intervals[j].start - intervals[i].end;
//                if(j == i || sub<0 )
//                    continue;
//                else if(sub < _min){
//                    _min = sub;
//                    index = j;
//                    if(sub == 0)
//                        break;
//                }
//            }
//            if(_min == INT_MAX)
//                res[i] = -1;
//            else
//                res[i] = index;
//        }
//        return res;
//    }
//};


//class Solution {
//public:
//    vector<int> findRightInterval(vector<Interval>& intervals) {
//        unordered_map<int,int> m;
//        vector<int> res,v;
//        int n = intervals.size();
//        for (int i = 0; i < n; ++i) {
//            m[intervals[i].start] = i;
//            v.push_back(intervals[i].start);
//        }
//        sort(v.begin(),v.end(),greater<int>());
//        for(auto a:intervals){
//            int i = 0;
//            for (; i <n ; ++i) {
//                if(v[i] < a.end){
//                    break;
//                }
//            }
//            res.push_back((i>0)? m[v[i-1]]:-1);
//        }
//        return res;
//    }
//};


class Solution {
public:
    vector<int> findRightInterval(vector<Interval>& intervals) {
        map<int,int> m;
        vector<int> res;
        int n = intervals.size();
        for (int i = 0; i < n; ++i) {
            m[intervals[i].start] = i;
        }
        for(auto a:intervals){
            auto it = m.lower_bound(a.end);
            if(it == m.end()) res.push_back(-1);
            else res.push_back(it->second);
        }
        return res;
    }
};