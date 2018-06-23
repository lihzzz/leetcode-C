//
// Created by lihzz on 2018/6/23.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {

        if(people.empty())
            return vector<pair<int,int>>();
        sort(people.begin(),people.end(),[](pair<int,int> p1,pair<int,int>p2){
            return p1.first > p2.first || (p1.first == p2.first && p1.second < p2.second);
        });
        vector<pair<int,int>> res;
        for(auto& a:people){
            res.insert(res.begin()+a.second,a);
        }
        return res;
    }
};