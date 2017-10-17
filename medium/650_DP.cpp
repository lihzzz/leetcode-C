//
// Created by lh on 2017/10/17.
//
#include <vector>
using namespace std;
class Solution {
public:
    int minSteps(int n) {
        vector<int> dp(n+1,0);
        for (int i = 2; i <=n ; ++i) {
            if(!(i&1)){
                dp[i] = dp[i/2] + 2;
            }else{
                int j = 0;
                for (j = i/2; j >=2 ; --j) {
                    if(i%j == 0)
                        break;
                }
                if(j == i)
                    dp[i] = i;
                else
                    dp[i] = dp[j] + i/j;
            }
        }
        return dp[n];
    }
};