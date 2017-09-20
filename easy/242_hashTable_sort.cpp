//
// Created by lh on 2017/9/20.
//
#include <string>
#include <unordered_map>
using std::string;
using std::unordered_map;
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m,n;
        if(s.length()!=t.length())return false;
        for(auto a:s)++m[a];
        for(auto a:t)++n[a];
        for(auto a:s){
            if(m[a] != n[a])
                return false;
        }
        return true;
    }
};