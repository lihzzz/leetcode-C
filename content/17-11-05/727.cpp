//
// Created by lh on 17-11-14.
//
#include <string>
#include <vector>
#include <climits>

using namespace std;
class Solution {
public:
    string minWindow(string S, string T) {
        int m = S.size(),n = T.size();
        vector<vector<int>>dp(m,vector<int>(n,-1));

        for (int i = 0; i <m ; ++i) {
            if(S[i] == T[0]){
                dp[i][0] = i;
            }
        }

        for (int j = 1; j <n ; ++j) {
            int k = -1;
            for (int z = 0; z < m ; ++z) {
                if(k!=-1 && S[z] == T[j]) dp[z][j] = k;
                if(dp[z][j-1] != -1) k = dp[z][j-1];
            }
        }

        int start = -1,len = INT_MAX;
        for (int l = 0; l <m ; ++l) {
            if(dp[l][n-1]!= -1 && l-dp[l][n-1]+1<len){
                start = dp[l][n-1];
                len = l - dp[l][n-1]+1;
            }
        }
        return start==-1?"":S.substr(start,len);
    }
};