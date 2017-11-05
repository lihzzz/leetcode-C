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
        if(words.empty()){
            return "";
        }
        sort(words.begin(),words.end(),[](string& a,string& b){
            if(a.size()>b.size())
                return true;
            else if(a.size() == b.size())
                return a<b;
            return false;
        });
        for (int i = 0; i <words.size() ; ++i) {
            string curstr = words[i];
            int j = 1;
            for (; j <curstr.size() ; ++j) {
                string str = curstr.substr(0,j);
                if(find(words.begin(),words.end(),str) == words.end())
                    break;
            }
            if(j == curstr.size())
                return curstr;

        }
        return "";
    }
};