//
// Created by lh on 2017/8/28.
//
#include <string>
using namespace std;
//class Solution{
//public:
//    bool isMatch(string s,string p){
//
//        if(p.empty()) return s.empty();
//        if(p.length() == 1){
//            return (s.length() == 1 && (s[0] == p[0] || p[0] == '.'));
//        }
//        if(p[1] != '*'){
//            if(s.empty()) return false;
//            return (s[0] == p[0] || p[0] == '.') && isMatch(s.substr(1),p.substr(1));
//        }
//        while (!s.empty() && (s[0] == p[0] || p[0] =='.')){
//            if(isMatch(s,p.substr(2))) return true;
//            s = s.substr(1);
//        }
//        return isMatch(s,p.substr(2));
//    }
//};

//class Solution{
//public:
//    bool isMatch(string s,string p){
//        if(p.empty()) return s.empty();
//        if(p.length() > 1 && p[1] == '*'){
//            return isMatch(s,p.substr(2)) || (!s.empty() && (s[0] == p[0] || p[0] =='.') && isMatch(s.substr(1),p));
//        }else{
//            return !s.empty() && (s[0] == p[0] || p[0] == '.') && isMatch(s.substr(1), p.substr(1));
//        }
//    }
//};

class Solution{
public:
    bool isMatch(string s,string p){
        if(s.length() == 0 && p.length() ==0) return true; //同为空，返回true
        if(p.length() == 0) return false; // s不为空，p为空，返回false

        bool res[s.length()+1][p.length()+1];  //状态矩阵，res[i][j] 表示的是s[0,i-1]和p[0,j-1]是否匹配
        for (int k = 0; k <=s.length() ; ++k) {  //状态矩阵初始化
            for (int i = 0; i <=p.length() ; ++i) {
                res[k][i] = false;
            }
        }
        res[0][0] = true; //同为空串为真

        for (int i = 0; i <p.length() ; ++i) {
            if(p[i] == '*'){
                if(i >0 && res[0][i-1]) {
                    res[0][i+1] =true; //i为* 此情况表示的是删除*和*前的字符，即*代表重复0次
                }//repeat 0 times
                if(i<1) continue;
                //分两种清空   *前为. 和 *前不为.
                if(p[i-1] != '.'){
                    for (int j = 0; j <s.length() ; ++j) {
                        //1.res[j+1][i] repeat one time,即直接去掉*
                        // 2.res[j+1][i-1] repeat 0 time,去掉*和*前面的字符
                        // 3.s[0,j) 和p[0,i+1)匹配即匹配到*号 此时如果s[j]和它前一个字符相等
                        // s[j] == s[j-1],并且它们重复的字符为*前一个字符s[j-1] == p[i-1](需要判断他们重复的字符是否是*前一个字符是因为*可能代表取0的情况)
                        if(res[j+1][i] || i>0&&res[j+1][i-1] || (j>0 && i>0 && res[j][i+1] && s[j] == s[j-1] && s[j-1] ==p[i-1])){
                            res[j+1][i+1] = true;
                        }
                    }
                }else{
                    int j=0;
                    //如果*前为. 如果s[j]和p[i-2] 匹配 或者和p[i-1]匹配则可以匹配任意字符
                    while(i>0&&j<s.length()&&!res[j+1][i-1] && !res[j+1][i]){
                        j++;
                    }
                    for(;j<s.length();j++){
                        res[j+1][i+1] = true;
                    }
                }
            }else{
                for (int j = 0; j <s.length() ; ++j) {
                    if(s[j] == p[i] || p[i] == '.'){
                        res[j+1][i+1] = res[j][i];
                    }
                }
            }
        }
        return res[s.length()][p.length()];
    }
};

