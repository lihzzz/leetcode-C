//
// Created by lh on 2017/10/6.
//
#include <vector>
#include <algorithm>
using namespace std;
//class Solution {
//public:
//    int findCircleNum(vector<vector<int>>& M) {
//        int m = M.size();
//        vector<int> vis(m,0);
//        int res = 0;
//        vector<int>::iterator it = find(vis.begin(),vis.end(),0);
//        while (it!=vis.end()){
//            res ++;
//            int dis = distance(vis.begin(),it);
//            DFS(M,vis,dis,m);
//            it = find(vis.begin(),vis.end(),0);
//        }
//        return res;
//    }
//    void DFS(vector<vector<int>>& M,vector<int>& vis,int pos,int sum){
//        vis[pos] = 1;
//        for (int i = 0; i <sum ; ++i) {
//            if(i!=pos && M[pos][i] && !vis[i]){
//                DFS(M,vis,i,sum);
//            }
//        }
//    }
//};




class Solution {
public:
    int findCircleNum(vector<vector<int>>& M) {
        int m = M.size(),res = m;
        vector<int> root(m,0);
        for (int i = 0; i <m ; ++i) {
            root[i] = i;
        }
        for (int j = 0; j <m ; ++j) {
            for (int i = j+1; i <m ; ++i) {
                if(M[j][i]){
                    int A = getroot(root,i);
                    int B = getroot(root,j);
                    if(A!=B){
                        --res;
                        root[B] = A;
                    }
                }
            }
        }
        return res;
    }
    int getroot(vector<int>& root,int pos){
        return root[pos] == pos?pos:getroot(root,root[pos]);
    }
};

