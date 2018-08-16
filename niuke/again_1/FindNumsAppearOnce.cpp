//
// Created by lihzz on 2018/7/19.
//
#include <vector>

using namespace std;
class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
        if(data.empty()){
            return;
        }
        int res = 0;
        for (int i = 0; i < data.size(); ++i) {
            res ^= data[i];
        }
        int shift = 0;
        while (res!=0 && (res&1) == 0){
            res >>= 1;
            ++shift;
        }
        for (int j = 0; j < data.size(); ++j) {
            if((data[j] >> shift) & 1){
                *num1 ^= data[j];
            }else{
                *num2 ^= data[j];
            }
        }

    }
};