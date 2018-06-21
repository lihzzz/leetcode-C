//
// Created by lh on 2017/9/21.
//
#include <string>
using std::string;

class Solution {
public:
    bool checkRecord(string s) {
        int AA = 0,LL=0;
        for(auto a:s){
            if(a=='A') {
                ++AA;
                LL = 0;
            }
            else if(a=='L') ++LL;
            else LL = 0;

            if(AA > 1 || LL >2){
                return false;
            }
        }
        return true;
    }
};