//
// Created by lh on 2017/10/1.
//
#include <string>
using std::string;
class Solution {
public:
    int repeatedStringMatch(string A, string B) {
        int an = A.size(),bn=B.size();
        if(an == 0)return false;
        if(bn == 0) return true;
        string tmp = "";
        int res = 0,index = 2;
        for (int i = 1;index>0; ++i) {
            tmp += A;
            ++res;
            if(tmp.size() < bn)
                continue;
            else if(tmp.size() == bn){
                if(tmp.compare(B) == 0)
                    return res;
            } else{
                index -- ;
                for (int j = 0; j <tmp.size()-bn+1 ; ++j) {
                    string t = tmp.substr(j,bn);
                    if(t.compare(B) == 0)
                        return res;
                }
            }
        }
        return -1;
    }
};