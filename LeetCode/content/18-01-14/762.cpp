//
// Created by lh on 2018/1/14.
//

class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        int res = 0;
        int count = 0;
        for (int i = L; i <R ; ++i) {
            int j = i;
            while (j){
                if(j&1)
                    count ++;
                j = j>>1;
            }
            if(isprime(count))
                res++;
            count = 0;
        }
        return res;
    }
    bool isprime(int n){
        if(n<1)
            return false;
        for (int i = 2; i <n ; ++i) {
            if(n%i == 0)
                return false;
        }
        return true;
    }
};