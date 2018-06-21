//
// Created by lh on 2017/10/16.
//
#include <string>
#include <algorithm>
using namespace std;



class Solution {
public:
    bool isSubsequence(string s, string t) {
        int start = 0,n = t.size();
        for(auto a:s){
            start = find(t.begin()+start,t.end(),a) - t.begin();
            if(start == n){
                return false;
            }
            start ++;
        }
        return true;
    }
};