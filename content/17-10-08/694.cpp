//
// Created by lh on 2017/10/8.
//
#include <vector>
#include <stack>
using namespace std;
class Solution {
public:
    int numDistinctIslands(vector<vector<int>>& grid) {
        int res ;
        int n = grid.size(),m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        vector<vector<int>> connect;
        if(!n || !m)
            return res;
        stack<pair<int,int>>s;
        for (int i = 0; i <n ; ++i) {
            for (int j = 0; j <m ; ++j) {
                if(grid[i][j] == 1 && !vis[i][j]){
                    s.push({i,j});
                    vis[i][j] = 1;
                    connect.push_back(getarea(s,grid,vis));
                }
            }
        }
        res = connect.size();
        for (int k = 0; k <connect.size() ; ++k) {
            for (int i = k+1; i <connect.size() ; ++i) {
                if(connect[k] == connect[i])
                    --res;
            }
        }
        return res;
    }
    vector<int> getarea(stack<pair<int,int>>& s,vector<vector<int>> grid,vector<vector<int>>& vis){
        vector<int> res;
        int weight = s.top().second,height = s.top().first;
        while(!s.empty()){
            int i = s.top().first,j= s.top().second;
            s.pop();
            if(i>0 && grid[i-1][j]&&!vis[i-1][j]){
                s.push({i-1,j});
                res.push_back(grid[i-1][j]);
                vis[i-1][j] = 1;
            }
            if(j<grid[0].size()-1&& grid[i][j+1]  && !vis[i][j+1]){
                s.push({i,j+1});
                weight++;
                res.push_back(grid[i][j+1]);
                vis[i][j+1] = 1;
            }
            if(i<grid.size()-1&& grid[i+1][j] && !vis[i+1][j]){
                s.push({i+1,j});
                height++;
                res.push_back(grid[i+1][j]);
                vis[i+1][j] = 1;
            }
            if(j>0&&grid[i][j-1] && !vis[i][j-1]) {
                s.push({i, j - 1});
                res.push_back(grid[i][j-1]);
                weight++;
                vis[i][j - 1] = 1;
            }
        }
        return res;
    }
};