//
// Created by lh on 2017/9/17.
//
#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;
//class Solution {
//public:
//    string reverseWords(string s) {
//        stringstream ss(s);
//        string singleword;
//        vector<string> word;
//        while (ss >> singleword){
//            word.push_back(singleword);
//        }
//        singleword = "";
//        for (int i = 0; i <word.size() ; ++i) {
//            for (int j = word[i].size()-1; j >=0 ; --j) {
//                singleword += word[i][j];
//            }
//            singleword += " ";
//        }
//        singleword = singleword.substr(0,singleword.size()-1);
//        return singleword;
//    }
//};


class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string singleword,res="";
        vector<string> word;
        while (ss >> singleword){
            reverse(singleword.begin(),singleword.end());
            res += singleword +" ";
        }
        res.pop_back();
        return res;
    }
};