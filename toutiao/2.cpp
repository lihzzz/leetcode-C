//
// Created by lh on 2018/4/15.
//

//#include <iostream>
//#include <vector>
//#include <set>
//using namespace std;
//
//int main(){
//    int n1 = 0,n2 = 0,m = 0;
//
//    while (cin >> n1 >> n2>>m){
//        vector<int> coin1(n1);
//        set<int> coin2;
//
//        for (int i = 0; i <n1 ; ++i) {
//            cin >> coin1[i];
//        }
//        for (int j = 0; j <n2 ; ++j) {
//            int tmp = 0;
//            cin  >> tmp;
//            coin2.insert(tmp);
//        }
//        vector<vector<int>> dp(n1+1,vector<int>(m+1,0));
//        for (int n = 0; n <=n1 ; ++n) {
//            dp[n][0] = 1;
//        }
//        for (int k = 1; k <=m ; ++k) {
//            dp[0][k] = 0;
//        }
//        for (int l = 1; l <=n1 ; ++l) {
//            bool flag = false;
//            if(coin2.count(coin1[l-1])){
//                flag =
//            }
//            for (int i = 1; i <=m ; ++i) {
//               dp[l][i] = 0;
//                for (int j = 0; j <= i/coin1[l-1] ; ++j) {
//                    dp[l][i] += dp[l-1][i-j*coin1[l-1]];
//                }
//            }
//        }
//    }
//}