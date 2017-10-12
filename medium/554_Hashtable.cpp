//
// Created by lh on 2017/10/12.
//
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        int res = 0;
        unordered_map<int,int> m;
        for(auto a:wall){
            int sum = 0;
            for (int i = 0; i <a.size()-1 ; ++i) {
                sum += a[i];
                ++m[sum];
                res = max(res,m[sum]);
            }
        }
        return wall.size()-res;
    }
};