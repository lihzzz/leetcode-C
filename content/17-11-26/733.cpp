//
// Created by lh on 2017/11/26.
//
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n = image.size(),m = image[0].size();
        vector<vector<int>> res(n,vector<int>(m,0));
        vector<vector<int>> vis(n,vector<int>(m,0));
        for (int i = 0; i <n ; ++i) {
            for (int j = 0; j <m ; ++j) {
                res[i][j] = image[i][j];
            }
        }
        helper(image,sr,sc,image[sr][sc],newColor,res,vis);
        return res;
    }
    void helper(vector<vector<int>> image,int sr,int sc,int startcolor,int newColor,vector<vector<int>>& res,vector<vector<int>>&vis){
        if(sr<0 || sr>=image.size() || sc <0 || sc>=image[0].size()){
            return;
        }
        if(image[sr][sc] == startcolor && vis[sr][sc] == 0){
            res[sr][sc] = newColor;
            vis[sr][sc] = 1;
            helper(image,sr-1,sc,startcolor,newColor,res,vis);
            helper(image,sr,sc-1,startcolor,newColor,res,vis);
            helper(image,sr+1,sc,startcolor,newColor,res,vis);
            helper(image,sr,sc+1,startcolor,newColor,res,vis);
        } else{
            return;
        }
    }
};