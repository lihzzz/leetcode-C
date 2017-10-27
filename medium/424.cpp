//
// Created by lh on 2017/10/27.
//
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;


class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        if(n<k)
            return n;
        vector<int> count(26,0);
        int start = 0,curmax = 0,res = 0;
        for (int i = 0; i <n ; ++i) {
            curmax = max(curmax,++count[s[i]-'A']);
            if (i-start+1-curmax > k){
                --count[s[start]-'A'];
                ++start;
            }
            res = max(res,i-start+1);
        }
    }
};