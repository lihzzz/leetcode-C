//
// Created by lh on 2017/9/20.
//
#include <vector>
#include <unordered_map>
using std::unordered_map;
using std::vector;
using std::pair;
class Solution {
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int res = 0;
        for (int i = 0; i <points.size() ; ++i) {
            unordered_map<int,int> m;
            for (int j = 0; j <points.size() ; ++j) {
                int a = points[i].first-points[j].first;
                int b = points[i].second-points[j].second;
                ++m[a*a+b*b];
            }

            for (auto a:m) {
                res += a.second*(a.second-1);
            }
        }
        return res;
    }
};