//
// Created by lihzz on 2018/6/23.
//
#include <vector>

using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int res = 0;
        for(auto& a:s){
            if(g[res]<=a){
                ++res;
            }
            if(res == g.size())
                break;
        }
        return res;
    }
};