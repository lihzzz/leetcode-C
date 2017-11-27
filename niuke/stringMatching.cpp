//
// Created by lh on 2017/11/27.
//
//#include <string>
//#include <unordered_map>
//#include <iostream>
//
//using namespace std;
//bool IsAllCharExist(string str1,string str2){
//    unordered_map<char,int> m;
//    int n = str1.size(),l = str2.size();
//    if(l == 0)
//        return false;
//    for (int i = 0; i <l ; ++i) {
//        m[str2[i]]++;
//    }
//    for (int j = 0; j <n ; ++j) {
//        if(m[str1[j]] == 0)
//            return false;
//    }
//    return true;
//}
//int main(){
//    string str1,str2;
//    while (cin>>str1>>str2){
//        if(IsAllCharExist(str1,str2))
//            cout<< "true" << endl;
//        else
//            cout<< "false" << endl;
//    }
//    return 0;
//}