//
// Created by lh on 2018/9/9.
//

#include <iostream>
#include <vector>
using namespace std;


void helper(vector<vector<int>>& data,int i,int j){
    data[i][j] = 0;
    if(i>0&&data[i-1][j] == 1){
        helper(data,i-1,j);
    }
    if(j< data[i].size()-1 && data[i][j+1] == 1){
        helper(data,i,j+1);
    }
    if(j>0 && data[i][j-1] == 1){
        helper(data,i,j-1);
    }
    if(i<data.size()-1&& data[i+1][j]==1){
        helper(data,i+1,j);
    }
}
//void print(vector<vector<int>>& data){
//    for (int i = 0; i <data.size(); ++i) {
//        for (int j = 0; j <data[i].size() ; ++j) {
//            cout << data[i][j]<<" ";
//        }
//        cout << endl;
//    }
//}
//int main(){
//    int M = 0;
//    cin >> M;
//    vector<vector<int>> data(M,vector<int>(M,0));
//    vector<vector<int>> vis(M,vector<int>(M,0));
//    for (int i = 0; i < M; ++i) {
//        for (int j = 0; j <M ; ++j) {
//            cin >> data[i][j];
//        }
//    }
//    int res = 0;
//
//    for (int k = 0; k <M ; ++k) {
//        for (int i = 0; i <M ; ++i) {
//            if(data[k][i] == 1){
//                helper(data,k,i);
//                ++res;
//            }
//        }
//    }
//    cout << res;
//
//    return 0;
//}