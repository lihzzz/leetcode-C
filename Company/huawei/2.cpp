//
// Created by lh on 2018/3/28.
//
////
//#include <iostream>
//#include <unordered_map>
//using namespace std;
//
//int main(){
//    unordered_map<char,char> m;
//    string a = "QWERTYUIOPASDFGHJKLZXCVBNM";
//    string b = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//    for (int i = 0; i <a.size() ; ++i) {
//        m[b[i]] = a[i];
//        m[tolower(b[i])] = tolower(a[i]);
//    }
//    string input;
//    string res ="";
//    while (getline(cin,input)){
//        for(int i = 0;i<input.size();i++){
//            char cur = input[i];
//            if(isalpha(cur)){
//                res += m[cur];
//            }else{
//                res += cur;
//            }
//        }
//        cout << res <<endl;
//
//
//    }
//}