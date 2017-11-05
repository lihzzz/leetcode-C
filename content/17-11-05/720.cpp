//
// Created by lh on 2017/11/5.
//
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
public:
    string longestWord(vector<string>& words) {
        sort(words.begin(),words.end());
        int wordsize = 0;
        for (int i = words.size()-1; i >=0 ; --i) {
            string curstr = words[i];

        }
    }
    bool helper(vector<string> words,string w){
        for (int i = 0; i <w.size()-1 ; ++i) {
            string tmp = "";

            while(w[i] == w[i+1]){
                tmp += w[i];
                if(find(words.begin(),words.end(),tmp) == words.end());

            }
        }
    }
};