//
// Created by lh on 2017/10/8.
//
#include <vector>
#include <stack>
using namespace std;
class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res = 0;
        int n = grid.size(),m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        if(!n || !m)
            return res;
        stack<pair<int,int>> s;
        for (int i = 0; i <n ; ++i) {
            for (int j = 0; j <m ; ++j) {
                if(grid[i][j] == 1 && !vis[i][j]){
                    s.push({i,j});
                    vis[i][j] = 1;
                    int tmp= getarea(s,grid,vis);
                    res = max(tmp,res);
                }
            }
        }
        return res;
    }
    int getarea(stack<pair<int,int>>& s,vector<vector<int>> grid,vector<vector<int>>& vis){
        int res = 1;
        while(!s.empty()){
            int i = s.top().first,j= s.top().second;
            s.pop();
            if(i>0 && grid[i-1][j] && !vis[i-1][j]){
                s.push({i-1,j});
                vis[i-1][j] = 1;
                ++res;
            }
            if(j<grid[0].size()-1 && grid[i][j+1] && !vis[i][j+1]){
                s.push({i,j+1});
                vis[i][j+1] = 1;
                ++res;
            }
            if(i<grid.size()-1 && grid[i+1][j] && !vis[i+1][j]){
                s.push({i+1,j});
                vis[i+1][j] = 1;
                ++res;
            }
            if(j>0 && grid[i][j-1] && !vis[i][j-1]) {
                s.push({i, j - 1});
                vis[i][j - 1] = 1;
                ++res;
            }
        }
        return res;
    }
};