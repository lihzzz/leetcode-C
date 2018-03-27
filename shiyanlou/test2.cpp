//
// Created by lh on 2018/3/22.
//

#include <iostream>
#include <unordered_map>
using namespace std;

//int main(){
//    string str;
//    while (cin>>str){
//        unordered_map<char,int> m;
//        int res = 0;
//        for(auto& a: str){
//            if(!m.count(a))
//                m[a] = 1;
//            m[a]++;
//        }
//        for (int i = 1; ; ++i) {
//            string tmp = to_string(i);
//            bool istrue = false;
//            unordered_map<char,int> tm;
//            for(auto& a:tmp){
//                if(!tm.count(a))
//                    tm[a] = 1;
//                tm[a] ++;
//            }
//            for(auto& a:tm){
//                if(!m[a.first] || a.second>m[a.first]){
//                    istrue = true;
//                    break;
//                }
//            }
//            if(istrue){
//                res = i;
//                break;
//            }
//        }
//        cout << res << endl;
//    }
//}