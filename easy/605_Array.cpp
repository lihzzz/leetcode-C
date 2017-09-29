//
// Created by lh on 2017/9/29.
//
#include <vector>
using std::vector;
//class Solution {
//public:
//    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
//        if(flowerbed.size()<2*n)
//            return false;
//        int size = flowerbed.size();
//        for (int i = 0; i <flowerbed.size() ; ++i) {
//            if(n==0)
//                break;
//            int left = i-1,right = i+1;
//            if(flowerbed[i] ==1)
//                continue;
//            else if(left>=0 && flowerbed[left] != 1 && right<size && flowerbed[right] != 1 || left<0 && right>=size || left<0 && right<size &&flowerbed[right]!= 1 || left>0 && right>=size&& flowerbed[left] !=1 ){
//                --n;
//                flowerbed[i] = 1;
//            }
//        }
//        return n==0;
//    }
//};


class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed.empty()) return false;
        if(flowerbed[0] == 0) flowerbed.insert(flowerbed.begin(),0);
        if(flowerbed.back() == 0) flowerbed.push_back(0);
        int len = flowerbed.size(),cnt = 0,sum=0;
        for (int i = 0; i <=len ; ++i) {
            if(i<len&&flowerbed[i]!=1)++cnt;
            else{
                sum += (cnt-1)/2;
                cnt = 0;
            }
        }
        return sum>=n;
    }
};