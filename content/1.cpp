//
// Created by lh on 2017/12/8.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string str = 0;
    cin >> str;
    int n = 0,strsize = str.size() ;
    cin >> n;
    long long res = 0;
    if(strsize == n){
        res = 1;
    }else if(strsize < n){
        res = 0;
    }else{
        res += pow(26,strsize-n);
        

    }




    return 0;
}