//
// Created by lh on 2017/9/19.
//
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        unordered_map<int,int> ss;
        int res = 0;
        if(s.empty())
            return res;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int cookie = 0;
        for (auto i:g) {
            while (true){
                if(cookie>= s.size())
                    return res;
                if(s[cookie] >= i){
                    ++res;
                    ++cookie;
                    break;
                } else
                    ++cookie;
            }

        }
        return res;
    }
};