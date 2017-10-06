//
// Created by lh on 2017/10/6.
//
#include <string>
#include <queue>
#include <unordered_map>
#include <algorithm>
using std::sort;
using std::pair;
using std::unordered_map;
using std::priority_queue;
using std::string;
//class Solution {
//public:
//    string frequencySort(string s) {
//        unordered_map<char,int>m;
//        priority_queue<pair<int,char>>q;
//        for(auto a:s)++m[a];
//        for(auto a:m) q.push({a.second,a.first});
//        string res="";
//        while (!q.empty()){
//            auto t = q.top();
//            q.pop();
//            res.append(t.first,t.second);
//        }
//        return res;
//    }
//};



class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        for(auto a:s)++m[a];
        std::sort(s.begin(),s.end(),[&](char& a,char& b){
            return m[a] > m[b] || (m[a] == m[b] && a<b);
        });
        return s;
    }
};

