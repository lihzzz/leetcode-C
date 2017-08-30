//
// Created by lh on 2017/8/30.
//
#include <string>
using namespace std;
class Solution{
public:
    bool isMatch(string s,string p){
        if(p.empty())return s.empty();
        if(p.size() == 1  && p[0] == '*') return true;
        if(p.size() == 1 && p[0]!='*') return(s.size()==1 && (s[0] == p[0] || p[0] == '?'));
        if(p[0] == '*'){
            if (p[1] == '*') return isMatch(s,p.substr(1));
            if(s.empty()) return isMatch(s,p.substr(1));
            if(s[0] == p[1] || p[1] == '?')
                return isMatch(s.substr(1),p);
            else
                return isMatch(s.substr(1),p);

        }else{
            if(!s.empty() && ( s[0] == p[0] || p[0] == '?'))
                return isMatch(s.substr(1),p.substr(1));
            else
                return false;
        }
    }
};