//
// Created by lh on 2017/9/27.
//


#include <string>
#include <unordered_map>
#include <set>
using std::set;
using std::string;
using std::unordered_map;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())
            return false;
        for (int i = 0; i <s.length() ; ++i) {
            if(m.count(s[i]))
                s[i] = m[s[i]];

            else if(s[i] == t[i]){
                m[s[i]] = t[i];
                n.insert(t[i]);
            }
            else if(n.count(t[i]))
                return false;
            else{
                m[s[i]] = t[i];
                n.insert(t[i]);
                s[i] = t[i];
            }
        }
        return s==t;
    }
private:
    unordered_map<char,char>m;
    set<char> n;
};
