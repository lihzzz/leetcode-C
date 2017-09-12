//
// Created by lh on 2017/9/1.
//
#include <string>
#include <cstring>
using namespace std;
//class Solution{
//public:
//    int** dp;
//    int** count;
//    int minpart = INT_MAX;
//    void partitionDFS(int start,int len,int part){
//        if(count[start][part] == 1) return;
//        if(start == len){
//            if(part < minpart){
//                minpart = part;
//            }
//            return;
//        }
//        count[start][part]=1;
//        for(int i = len-1;i>=start;i--){
//            if(dp[start][i] == 1 && part <minpart){
//                partitionDFS(i+1,len,part+1);
//            }
//        }
//    }
//    int minCut(string s){
//
//        dp = new int* [s.length()];
//        count = new int*[s.length()+1];
//        for (int k = 0; k <s.length() ; ++k) {
//            dp[k] = new int[s.length()];
//            for (int i = 0; i <s.length() ; ++i) {
//                if(k>=i) dp[k][i] = 1;
//                else dp[k][i] = 0;
//            }
//        }
//        for (int l = 0; l <=s.length() ; ++l) {
//            count[l] = new int[s.length()+1];
//            for (int i = 0; i <=s.length(); ++i) {
//                count[l][i] = 0;
//            }
//        }
//        for (int i = s.length()-2; i >=0  ; --i) {
//            for (int j = i+1; j < s.length() ; ++j) {
//                if(s[i] == s[j]){
//                    dp[i][j] = dp[i+1][j-1];
//                }
//            }
//        }
//        int part = -1;
//        partitionDFS(0,s.length(),part);
//        return minpart;
//    }
//};


class Solution{
public:
    int minCut(string s){
        int len = s.length();
        int dp[s.length()][s.length()];
        int count[s.length()+1] ;
        memset(dp,0,sizeof(dp));
        memset(count,0,sizeof(count));
        for (int i = s.length()-1; i >=0  ; --i) {
            count[i] = INT_MAX;
            for (int j = i; j < s.length() ; ++j) {
                if(s[i] == s[j] && (j-i<2 || dp[i+1][j-1])){
                    dp[i][j] = 1;
                    count[i] = min(1+count[j+1],count[i]);
                }
            }
        }
        return count[0]-1;
    }
};