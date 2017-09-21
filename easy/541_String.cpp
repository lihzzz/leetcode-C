//
// Created by lh on 2017/9/21.
//
#include <string>
#include <algorithm>
using std::reverse;
using std::string;
class Solution {
public:
    string reverseStr(string s, int k) {
        int cnt = s.size()/k;
        for (int i = 0; i <=cnt ; ++i) {
            if(i%2 == 0){
                if(i*k + k <s.size()){
                    reverse(s.begin()+i*k , s.begin()+i*k+k);
                } else{
                    reverse(s.begin()+i*k,s.end());
                }
            }
        }
        return s;
    }
};