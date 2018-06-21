//
// Created by lh on 2018/1/7.
//
#include <vector>
#include <string>
#include <set>
using namespace std;
class Solution {
public:
    string boldWords(vector<string>& words, string S) {
        if(words.empty()){
            return S;
        }
        int n = S.size();
        set<string> dict(words.begin(),words.end());
        vector<int> count(n,0);
        for (int i = 0; i <n ; ++i) {
            for (int j = i; j <n&&j - i < 10 ; ++j) {
                if(!dict.count(S.substr(i,j+1-i))) continue;
                for (int k = i; k <=j ; ++k) {
                    count[k] ++;
                }
            }
        }
        string res;
        for (int l = 0; l <n ; ++l) {
            if(count[l] && (l == 0 || !count[l-1])) res += "<b>";
            res += S[l];
            if(count[l] && (l == n-1 || !count[l+1])) res += "</b>";
        }
        return res;
    }
};