//
// Created by lihzz on 2018/9/10.
//




#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> calpreVecefix(const char* p,int n){
    vector<int> preVec(n,-1);
    int k= -1;
    for (int i = 1; i <n ; ++i) {
        while(k>-1 && p[k+1] != p[i]){
            k=preVec[k];
            if(p[k+1] == p[i]){
                k = k+1;
            }
            preVec[i] = k;
        }
    }
    return preVec;
}

int cal(const char* p,int n,const char* s,int m){


    vector<int> preVec = calpreVecefix(s,m);
    int k = -1;
    for (int i = 0; i < n; ++i) {
        while(k>-1&& s[k+1] != p[i]){
            k = preVec[k];
        }
        if(s[k+1] == p[i])
            k = k+1;
        if(i!= n-1 && k == m-1){
            k = preVec[m-1];
        }
    }
    return k+1;
}

//int main(){
//    string str1,str2;
//    cin >> str1 >> str2;
//
//    int l1 = cal(str1.c_str(),str1.size(),str2.c_str(),str2.size());
//    int l2 = cal(str2.c_str(),str2.size(),str1.c_str(),str1.size());
//
//    int minL = (l1>l2)?l1:l2;
//    cout << minL;
////    string str3(str2+str1);
////    vector<int> preVece(str3.length(),-1);
////    for (int i = 1; i < str3.length(); ++i) {
////        int loc = preVece[i-1];
////        while(loc!=-1 && str3[loc+1] != str3[i]){
////            loc = preVece[loc];
////        }
////
////        if(str3[loc+1] == str3[i]){
////            preVece[i] = loc+1;
////        }
////    }
////    int minL = min((int)str1.length(),preVece[str3.length()-1]+1);
////    cout << minL;
//
//    return 0;
//}