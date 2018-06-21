//
// Created by lh on 2017/12/17.
//
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        unordered_map<char,int> m;
        for (auto& a:licensePlate) {
            if((a>='a' && a<='z') ||(a>='A' && a<='Z') ){
                a = tolower(a);
                m[a]++;
            }
        }
        int minlen = INT_MAX;
        string res = "";
        for (auto& str:words) {
            int flag = 0;
            if(str.size() >=minlen)
                continue;
            unordered_map<char,int> tm;
            for (auto& word:str) {
                tm[word] ++;
            }
            for(auto& b:m){
                if(tm[b.first] < b.second){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                minlen = str.size();
                res = str;
            }
        }
        return res;
    }
};