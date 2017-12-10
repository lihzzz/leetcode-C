//
// Created by lh on 2017/12/10.
//
#include <vector>
#include <map>
#include <queue>
#include <set>
#include <climits>

using namespace std;
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int N, int K) {
        int res = 0;
        vector<int> waits(N+1,INT_MAX);
        map<int,map<int,int>> adj;
        for(auto& a:times){
            adj[a[0]][a[1]] = a[2];
        }
        waits[K] = 0;
        queue<int> q;
        q.push(K);
        while (!q.empty()){
            int n = q.size();
            set<int> s;
            for (int i = 0; i <n ; ++i) {
                int cur = q.front();
                q.pop();
                for(pair<int,int>& a:adj[cur]){
                    int v = a.first;
                    if(waits[cur] + adj[cur][v] < waits[v]){
                        if(!s.count(v)){
                            s.insert(v);
                            q.push(v);
                        }
                        waits[v] = waits[cur] + adj[cur][v];
                    }
                }
            }
        }
        for (int j = 1; j <=N ; ++j) {
            res = max(res,waits[j]);
        }
        return res == INT_MAX?-1:res;
    }
};