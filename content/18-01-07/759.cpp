//
// Created by lh on 2018/1/7.
//

#include "../../DataStruct.h"
#include <vector>
#include <map>
#include <climits>
#include <algorithm>
using namespace std;
//class Solution {
//public:
//    vector<Interval> employeeFreeTime(vector<vector<Interval>>& avails) {
//        vector<Interval> res;
//        res.push_back(Interval(-1,INT_MAX));
//        int empnum = avails.size();
//        for (int i = 0; i <empnum ; ++i) {
//            for(auto &a : avails[i]){
//                helper(res,a);
//            }
//        }
//        sort(res.begin(),res.end(),[](Interval& a,Interval& b){
//            return a.start <= b.start;
//        });
//        res.erase(res.begin());
//        res.erase(res.end()-1);
//        return res;
//    }
//    void helper(vector<Interval>& res,Interval t){
//        vector<Interval>::iterator it = res.begin();
//        int n = res.size();
//        vector<Interval>tmp;
//        for(int i = 0;i<n;i++){
//            if(max(res[i].start,t.start) < min(res[i].end,t.end)){
//                int start = res[i].start;
//                int end = res[i].end;
//                res.erase(it+i);
//                if(start < t.start && end > t.end){
//                    tmp.push_back(Interval(min(start,t.start),max(start,t.start)));
//                    tmp.push_back(Interval(min(end,t.end),max(end,t.end)));
//                }else if(t.end > end){
//                    tmp.push_back(Interval(min(start,t.start),max(start,t.start)));
//                }
//                else{
//                    tmp.push_back(Interval(min(end,t.end),max(end,t.end)));
//                };
//                //res.push_back(Interval(min(start,t.start),max(start,t.start)));
//            }
//        }
//        res.insert(res.begin(),tmp.begin(),tmp.end());
//    }
//};


class Solution {
public:
    vector<Interval> employeeFreeTime(vector<vector<Interval>>& avails) {
        vector<Interval> res;
        map<int,int> m;
        for (int i = 0; i <avails.size() ; ++i) {
            for (int j = 0; j <avails[i].size() ; ++j) {
                m[avails[i][j].start] ++;
                m[avails[i][j].end]--;
            }
        }
        int person = 0;
        for(auto& a:m){
            person += a.second;
            if(!person) res.push_back(Interval(a.first,0));
            if(person && !res.empty() && !res.back().end) res.back().end = a.first;
        }
        if(!res.empty()) res.pop_back();
        return res;
    }
};