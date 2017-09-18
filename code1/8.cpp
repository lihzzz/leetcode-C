//
// Created by lh on 2017/8/27.
//
#include <string>
#include <algorithm>
#include <climits>

using namespace std;
//class Solution{
//public:
//    int myAtoi(string str){
//        long result = 0;
//        int indicator = 1;
//        int i = str.find_first_not_of(' ');
//        if(str[i] == '-' || str[i] == '+')
//            indicator = (str[i++] == '-')? -1:1;
//        for (; i < str.length();) {
//            if(isdigit(str[i])){
//                result = result *10 +(str[i++] -'0');
//                if(result * indicator >= INT_MAX) return INT_MAX;
//                if(result * indicator <= INT_MIN) return INT_MIN;
//            }else{
//                return result * indicator;
//            }
//        }
//        return result * indicator;
//    }
//};

class Solution{
public:
    int myAtoi(string str){
        long result = 0;
        int indicator = 1;
        int i = str.find_first_not_of(' ');
        if(str[i] == '-' || str[i] == '+')
            indicator = (str[i++] == '-')? -1:1;
        while(isdigit(str[i])){
            result = result *10 +(str[i++] -'0');
            if(result * indicator >= INT_MAX) return INT_MAX;
            if(result * indicator <= INT_MIN) return INT_MIN;
        }
        return result * indicator;
    }
};