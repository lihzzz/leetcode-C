//
// Created by lh on 2017/10/22.
//
#include <vector>
#include <algorithm>
using namespace std;

//class Solution {
//public:
//    int maxProfit(vector<int>& prices, int fee) {
//        int n = prices.size();
//        if(n<=1)
//            return 0;
//        vector<int> buy(n,0);
//        vector<int> sell(n,0);
//        buy[0] = -prices[0];
//        sell[0] = 0;
//        for (int i = 1; i <n ; ++i) {
//            buy[i] = max(buy[i-1],sell[i-1]-prices[i]);
//            sell[i] = max(sell[i-1],buy[i-1]+prices[i]-fee);
//        }
//        return sell[n-1];
//    }
//};

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        if(n<0)
            return 0;
        int buy = -prices[0];
        int sell = 0; // profit

        for (int i = 1; i <n ; ++i) {
            sell = max(sell,prices[i] + buy - fee);
            buy = max(buy,sell - prices[i]);
        }
        return sell;
    }
};