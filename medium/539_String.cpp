//
// Created by lh on 2017/10/12.
//
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;
//class Solution {
//public:
//    int findMinDifference(vector<string>& timePoints) {
//        int res = 1441;
//        sort(timePoints.begin(),timePoints.end());
//        for (int i = 1; i <=timePoints.size(); ++i) {
//            int loc1 = i%timePoints.size();
//            int loc2 = (i-1)%timePoints.size();
//            string time1 = timePoints[loc2],time2 = timePoints[loc1];
//            int index = time1.find(":");
//            int hour =stoi(time1.substr(0,index)),_min = stoi(time1.substr(index+1));
//            int min1 = hour*60 + _min;
//            index = time2.find(":");
//            hour = stoi(time2.substr(0,index)),_min = stoi(time2.substr(index+1));
//            int min2 = hour*60 + _min;
//            int diff = min(max(min1,min2)-min(min1,min2),min(min1,min2)+1440-max(min1,min2));
//            res =min(diff,res);
//        }
//
//
//        return res;
//    }
//};

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> mask(1440,0);
        for(auto a : timePoints){
            int h = stoi(a.substr(0,2)),m = stoi(a.substr(3));
            if(mask[h*60+m] == 1)
                return 0;
            mask[h*60+m] = 1;
        }
        int res = 1441;
        int first = INT_MAX,last = INT_MIN,pre = 0;
        for (int i = 0; i <1440 ; ++i) {
            if(mask[i] == 1){
                if(first!= INT_MAX){
                    res = min(res,i-pre);
                }
                first = min(first,i);
                last = max(last,i);
                pre = i;
            }
        }
        return min(res,1440+first-last);
    }
};


