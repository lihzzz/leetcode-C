//
// Created by lh on 2017/10/16.
//
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int findMinArrowShots(vector<pair<int, int>>& points) {
        if(points.empty())
            return 0;
        sort(points.begin(),points.end());
        int res = 1,start = points[0].first,end = points[0].second;
        for (int i = 1; i <points.size(); ++i) {
            if(points[i].first <= end){
                end = min(end,points[i].second);
            } else{
                res ++;
                end = points[i].second;
            }
        }
        return res;
    }
};