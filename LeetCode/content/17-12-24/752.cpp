//
// Created by lh on 2017/12/24.
//
#include <vector>
#include <string>
#include <unordered_set>
#include <queue>
#include <algorithm>
using namespace std;
class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        int res = 0;
        unordered_set<string> dde(deadends.begin(),deadends.end());
        unordered_set<string> vis;
        queue<string> q;
        string init = "0000";
        if(dde.find(init) != dde.end())
            return -1;
        q.push(init);
        while (!q.empty()){
            int size = q.size();
            for (int i = 0; i <size ; ++i) {
                string cur = q.front();q.pop();
                vector<string> operstr = move(opt(cur));
                for(auto& a: operstr){
                    if(a==target) return ++res;
                    if(vis.find(a) != vis.end()) continue;
                    if(dde.find(a) == dde.end()){
                        q.push(a);
                        vis.insert(a);
                    }
                }
            }
            ++res;
        }
        return -1;
    }

    vector<string> opt(string cur){
        vector<string> res;
        for (int i = 0; i <4 ; ++i) {
            string tmp = cur;
            tmp[i] = (cur[i] - '0' + 1)%10+ '0';
            res.push_back(tmp);
            tmp[i] = (cur[i] - '0' - 1 + 10) % 10 +'0';
            res.push_back(tmp);
        }
        return res;
    }
};