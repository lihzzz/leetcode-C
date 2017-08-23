//
// Created by lh on 2017/8/23.
//
#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length() == 0)
            return "";
        if(s.length() == 1)
            return s;
        int len = s.length();
        bool res[len][len];
        for (int i = 0; i <len ; ++i) {
            for (int j = 0; j <len ; ++j) {
                if(i >= j) res [i][j] = true;
                else res[i][j] = false;
            }
        }
        int tar = 0;
        int maxlen = 0,start =0 ,end=0;
        for (int k = 1; k< s.length(); ++k) {
            for (int j = 0; j <s.length() ; ++j) {
                tar = j+k;
                if(tar >= s.length()) break;
                if(s[j] != s[tar]) res[j][tar] = false;
                else{
                    res[j][tar] = res[j+1][tar-1];
                    if(res[j][tar]){
                        maxlen = k+1;
                        start = j;
                        end = k;
                    }
                }
            }
        }
        cout << s.substr(start,end+1);
        return s.substr(start,end+1);
    }
};
