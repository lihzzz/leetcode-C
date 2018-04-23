//
// Created by lh on 2018/4/9.
//

//#include<iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//
//int main(){
//    string str = "";
//    while (cin >> str){
//        int len = str.length();
//        vector<vector<int>>dp(len,vector<int>(len));
//        for (int i = 0; i <len ; ++i) {
//            dp[i][i] = 1;
//            for (int j = i-1; j >=0 ; --j) {
//                dp[j][i] = dp[j+1][i]+dp[j][i-1]-dp[j+1][i-1];
//                if(str[i]==str[j])
//                    dp[j][i]+=1+dp[j+1][i-1];
//            }
//        }
//        cout <<  dp[0][len-1] <<endl;
//    }
//}