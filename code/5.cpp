//
// Created by lh on 2017/8/23.
//
#include <string>
#include <algorithm>
using namespace std;


//o(n^2)
//class Solution {
//public:
//    string longestPalindrome(string s) {
//        if(s.length() == 0)
//            return "";
//        if(s.length() == 1)
//            return s;
//        int len = s.length();
//        bool res[len][len];
//        for (int i = 0; i <len ; ++i) {
//            for (int j = 0; j <len ; ++j) {
//                if(i >= j) res [i][j] = true;
//                else res[i][j] = false;
//            }
//        }
//        int tar = 0;
//        int maxlen = 0,start =0 ,end=0;
//        for (int k = 1; k< s.length(); ++k) {
//            for (int j = 0; j <s.length() ; ++j) {
//                tar = j+k;
//                if(tar >= s.length()) break;
//                if(s[j] != s[tar]) res[j][tar] = false;
//                else{
//                    res[j][tar] = res[j+1][tar-1];
//                    if(res[j][tar]){
//                        maxlen = k+1;
//                        start = j;
//                        end = k;
//                    }
//                }
//            }
//        }
//        return s.substr(start,end+1);
//    }
//};


class Solution {
public:
    int* next;
    void getnext(string s){
        int len = s.length();
        next[0] = 0;
        for (int i = 1; i <len ; ++i) {
            int k = next[i-1];
            while(s[i] != s[k] && k!=0){
                k = next[k-1];
            }
            if(s[i] == s[k]){
                next[i] = k+1;
            }else{
                next[i] = 0;
            }
        }
    }
    int compare(string src,string tar){
        int j = 0;
        int maxlen = 0;
        for (int i = 0; i <src.length() ; ++i) {
            while (j > 0 && src[i] != tar[j])
                j = next[j-1];
            if(src[i] == tar[j]){
                j++;
            }
            if(j > maxlen) maxlen = j;
            if(j == tar.length()){
                return maxlen;
            }
        }
        return maxlen;
    }
    bool ispalindrome(string s){
        int len = s.length();
        int i=0,j=len-1;
        while(i<=j){
            if(s[i] == s[j]){
                i++;
                j--;
            }else{
                return false;
            }
        }
        return true;
    }
    string longestPalindrome(string s) {
        next  = new int[s.length()+1];
        int maxlen = 0,len =0 ;
        string res ="";
        getnext(s);
        string rev;
        rev.resize(s.size());
        reverse_copy(s.begin(),s.end(),rev.begin());
        int end = rev.length();
        for (int i = 0; i < end; ++i) {
            string suffix = rev.substr(i);
            if(suffix.length() < maxlen){
                break;
            }
            getnext(suffix);
            len = compare(s,suffix);
            if(len >maxlen){
                res = suffix.substr(0,len);
                maxlen = len;
            }
        }
        if(!ispalindrome(res)) {
            res = s[0];
        }
        return res;
    }
};
