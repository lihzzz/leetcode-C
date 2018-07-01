//
// Created by lihzz on 2018/7/1.
//
#include <string>
#include <unordered_map>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.empty())
            return true;
        string::iterator it = t.begin();
        for(auto& a:s){
            it = find(it,t.end(),a);
            if(it == t.end())
                return false;
            it += 1;
        }
        return true;

    }
};