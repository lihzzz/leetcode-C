//
// Created by lihzz on 2018/6/23.
//

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findMinArrowShots(vector<pair<int, int>>& points) {
        if(points.empty())
            return 0;
        sort(points.begin(),points.end(),[](pair<int,int>a,pair<int,int>b){
            return a.second<b.second;
        });

        int cnt = 1;
        int end = points[0].second;
        for (int i = 1; i < points.size(); ++i) {
            if(points[i].first<=end){
                continue;
            }
            end = points[i].second;
            ++cnt;
        }
        return cnt;
    }
};