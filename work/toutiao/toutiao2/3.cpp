//
// Created by lh on 2018/9/9.
//

#include <iostream>
#include <string>
using namespace std;

int helper(const string& str,int i,int j){
    if(i>str.length()|| j>4 ){
        return 0;
    }
    if(i == str.length()){
        return j==4?1:0;
    }
    int res = helper(str,i+1,j+1);
    if(str[i] == '0'){
        return res;
    }
    res += helper(str,i+2,j+1);
    if(i+2<str.length()){
        int sum = (str[i]-'0')*100 + (str[i+1]-'0')*10 + (str[i+2]-'0');
        if(sum <= 255){
            return res+helper(str,i+3,j+1);
        }else{
            return res;
        }
    } else{
        return res;
    }
}
//int main(){
//    string str;
//    cin >> str;
//    int res = 0;
//    res = helper(str,0,0);
//    cout << res;
//    return 0;
//}