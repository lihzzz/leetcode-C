//
// Created by lh on 2018/9/9.
//

#include <iostream>
#include <string>
using namespace std;

//int main(){
//    string str;
//    cin >> str;
//    int loc[256] = {0};
//    int len = 0,left = 0;
//    for (int i = 0; i <str.size() ; ++i) {
//        if(loc[str[i]] == 0 || loc[str[i]] < left){
//            len = max(len,i-left+1);
//        }else{
//            left = loc[str[i]];
//        }
//        loc[str[i]] = i+1;
//    }
//    return len;
//}