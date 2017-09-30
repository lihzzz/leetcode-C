//
// Created by lh on 2017/9/30.
//
#include <vector>
using std::vector;


class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isPrimes(n+1,true);
        isPrimes[1] = false;
        for (int i = 2; i*i<n ; ++i) {
            if(!isPrimes[i])continue;
            for (int j = i*i; j <n ; j+=i) {
                isPrimes[j] = false;
            }
        }
        int res=0;
        for (int k = 1; k <n ; ++k) {
            if(isPrimes[k])
                ++res;
        }
        return res;
    }
};
