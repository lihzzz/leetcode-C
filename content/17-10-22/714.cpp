//
// Created by lh on 2017/10/22.
//
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int buyVal = prices[0];
        int sellVal = prices[0]; int profit = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] >= prices[i - 1])
            {
                sellVal = prices[i];
            }
            else
            {
                if (sellVal - buyVal > fee)
                {
                    profit += sellVal - buyVal - fee;
                }
                buyVal = prices[i];
                sellVal = prices[i];
            }
        }
        if (sellVal - buyVal > fee)
        {
            profit += sellVal - buyVal - fee;
        }
        return profit;
    }
};
