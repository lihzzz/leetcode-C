//
// Created by lh on 2017/9/25.
//
#include <string>
using std::string;
//class Solution {
//public:
//    bool repeatedSubstringPattern(string s) {
//        if(s.empty())
//            return false;
//        for (int i = s.length()/2; i >=1 ; --i) {
//            string pattern = s.substr(0,i);
//            string source = s.substr(i);
//            int plen = pattern.length();
//            int slen = source.length();
//            if(slen % plen != 0){
//                continue;
//            }
//            int len = source.length();
//            while(len != 0){
//                string tmp = source.substr(0,plen);
//                if(pattern != tmp)
//                    break;
//                if(pattern == tmp && len == plen)
//                    return true;
//                source = source.substr(plen);
//                len = source.length();
//            }
//        }
//        return false;
//    }
//};


class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if(s.empty())
            return false;
        for (int i = s.length()/2; i >=1 ; --i) {
            string pattern = s.substr(0, i);
            string source = s.substr(i);
            int plen = pattern.length();
            int slen = source.length();
            if (slen % plen != 0) {
                continue;
            }
            int count = slen/plen;
            string tmp = "";
            for (int j = 1; j <=count ; ++j) {
                tmp += pattern;
            }
            if(tmp == source)
                return true;
        }
        return false;
    }
};