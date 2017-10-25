//
// Created by lh on 2017/10/25.
//
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        if(n<1)
            return 0;
        int res = 0;
        if(k> n>>1){
            int buy = -prices[0];
            int sell = 0;
            for (int i = 1; i < n; ++i) {
                sell = max(sell,buy+prices[i]);
                buy = max(buy,sell - prices[i]);
            }
            res = sell;
        }else{
            vector<int> buy(k,-prices[0]);
            vector<int> sell(k,0);
            for (int i = 1; i <n ; ++i) {
                for (int j = k; j >0 ; -- j) {
                    sell[j] =  max(sell[j],buy[j]+prices[i]);
                    buy[j] = max(buy[j],sell[j-1]-prices[i]);
                }
            }
            res = sell[k];
        }
        return res;
    }
};