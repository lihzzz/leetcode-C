//
// Created by lh on 2017/8/30.
//
#include <string>
using namespace std;
//class Solution{
//public:
//    bool isMatch(string s,string p){
//        if(p.empty())return s.empty();
//        if(p[0] != '*'){
//            if(!s.empty() && ( s[0] == p[0] || p[0] == '?'))
//                return isMatch(s.substr(1),p.substr(1));
//            else{
//                return false;
//            }
//        }else {
//            int next = p.find_first_not_of('*'); //解决多个*连续的情况，多个连续的*可以当做单个*处理
//            if (next == -1)
//                return true;
//            else if(!s.empty()){
//                if(isMatch(s,p.substr(next)))  //开始对*后的字符串和源串进行对比
//                    return true;
//                else
//                    return isMatch(s.substr(1),p); //如果未匹配成功，则对源串进行后移移位，再次进行对比，前一位交给*进行处理
//            }else
//                return false;
//        }
//    }
//};

//class Solution{
//public:
//    bool isMatch(string s,string p){
//        int lens = s.length();
//        int lenp = p.length();
//
//        bool res[lens+1][lenp+1];
//        for (int i = 0; i < lens; ++i) {
//            for (int j = 0; j <lenp ; ++j) {
//                res[i][j] = false;
//            }
//        }
//
//        res[0][0] = true;
//        for(int j=1;j<lenp;j++){
//            res[0][j] = res[0][j-1] && p[j-1] == '*';
//        }
//
//        for (int i = 1; i <=lens ; ++i) {
//            for (int j = 1; j <=lenp ; ++j) {
//                if(s[i-1] == p[j-1] || p[j-1] == '?'){
//                    res[i][j] = res[i-1][j-1];
//                }else if(p[j-1] == '*'){
//                    res[i][j] = res[i-1][j] || res[i][j-1];
//                }
//            }
//        }
//        return res[lens][lenp];
//
//
//    }
//};


class Solution{
public:
    bool isMatch(string s,string p){
        int i_s=0,i_p=0,start = -1,match =0;

        while(i_s < s.length()){
            if(i_p < p.length() && (s[i_s] == p[i_p] || p[i_p] == '?')){
                i_s ++;
                i_p ++;
            }else if(i_p < p.length() && p[i_p] == '*'){
                start = i_p;
                match = i_s;
                i_p ++;
            }
            else if(start != -1){
                i_p = start + 1;
                i_s = match;
                match++;
            }else{
                return false;
            }
        }
        while (i_p < p.length() && p[i_p] == '*'){
            i_p ++;
        }
        return i_p == p.length();
    }
};