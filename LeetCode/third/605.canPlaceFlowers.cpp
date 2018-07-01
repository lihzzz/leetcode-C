//
// Created by lihzz on 2018/7/1.
//
#include <vector>

using namespace std;
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n < 1)
            return true;
        if((flowerbed.size()-1)/2 < n){
            return false;
        }

        for (int i = 0; i <flowerbed.size() &&  n>0 ; ++i) {
            if(flowerbed[i] == 1)
                continue;

            int pre = i == 0 ? 0:flowerbed[i-1];
            int next = i == flowerbed.size()-1?0:flowerbed[i+1];

            if(pre == 0 && next == 0){
                --n;
                flowerbed[i] = 1;
            }
        }
        return n==0;
    }
};