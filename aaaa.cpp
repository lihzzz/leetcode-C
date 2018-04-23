//
// Created by lh on 2018/4/15.
//

//#include <iostream>
//#include <vector>
//#include <limits>
//
//using namespace std;
//
//
///*请完成下面这个函数，实现题目要求的功能*/
///******************************开始写代码******************************/
//void help(const vector<vector<int>>& matrix,int n,int m,int startX,int startY,int& res,int cur,bool up, bool down){
//    if(startY == m-1){
//        res = res>cur?cur:res;
//    }
//    if(startX>= n || startY >= m ||  startX < 0 || startY<0 ||matrix[startX][startY] == 0){
//        return;
//    }
//    int step = matrix[startX][startY];
//    cur += 1;
//    if(up){
//        help(matrix,n,m,startX-1,startY,res,cur,true,false);
//    }
//    if(down){
//        help(matrix,n,m,startX+1,startY,res,cur, false,true);
//    }
//    help(matrix,n,m,startX,startY+1,res,cur,true,true);
//}
//int jump(const vector<vector<int>> &matrix, int n, int m) {
//    int res = INT_MAX;
//    for (int i = 0; i <n ; ++i) {
//        help(matrix,n,m,i,0,res,-1,true,true);
//    }
//    return res;
//}
//
///******************************结束写代码******************************/
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//    vector<vector<int>> matrix;
//    for (int i = 0; i < n; i++) {
//        vector<int> row;
//        for (int j = 0; j < m; j++) {
//            int e;
//            cin >> e;
//            row.push_back(e);
//        }
//
//        matrix.push_back(row);
//        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//    }
//
//    cout << jump(matrix, n, m) << endl;
//
//    return 0;
//}