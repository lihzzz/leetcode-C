//
// Created by lh on 2017/9/20.
//
#include <string>
#include <unordered_map>
using std::string;
using std::unordered_map;
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;
        for(auto a:s){
            ++m[a];
        }
        for (int i = 0; i <s.length() ; ++i) {
            if(m[s[i]] == 1)
                return i;
        }
        return -1;
    }
};