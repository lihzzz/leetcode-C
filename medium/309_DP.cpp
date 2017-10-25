//
// Created by lh on 2017/10/25.
//
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n<1)
            return 0;
        int buy = -prices[0];
        int sell_pre = 0,sell = 0;
        for (int i = 1; i <n ; ++i) {
            int sell_old = sell;
            sell = max(sell,buy+prices[i]);
            buy = max(buy,sell_pre-prices[i]);
            sell_pre = sell_old;
        }
        return sell;

    }
};