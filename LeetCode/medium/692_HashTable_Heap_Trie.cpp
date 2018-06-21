//
// Created by lh on 2017/12/1.
//
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> res;
        vector<pair<string,int> > v;
        unordered_map<string,int> m;
        for(auto& a: words){
            m[a] ++;
        }
        for(auto& a: m){
            v.push_back(make_pair(a.first,a.second));
        }
        sort(v.begin(),v.end(),[](pair<string,int>& a,pair<string,int>& b){
            if(a.second>b.second){
                return true;
            }else if(a.second == b.second){
                return a.first<b.first;
            } else{
                return false;
            }
        });
        for (int i = 0; i <k ; ++i) {
            res.push_back(v[i].first);
        }
        return res;
    }
};