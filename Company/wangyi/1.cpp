//
// Created by lh on 2018/3/27.
//

#include <iostream>
using namespace std;
//int main() {
//    int count = 0;
//    cin >> count;
//    int n=0;
//    string path = "";
//    int res = 0;
//    bool flag = false,next = false;
//    for (int i = 0; i <count ; ++i) {
//        res=0 ;
//        flag = false;
//        next = false;
//        cin >> n >> path;
//
//        for (int i =0; i < n ; ++i) {
//            char a = path[i];
//            if(path[i] == '.' && !flag){
//                flag = true;
//                continue;
//            }
//            else if(flag){
//                ++res;
//                ++i;
//                flag = false;
//            }else if(path[i] == 'X'){
//                continue;
//            }
//            else{
//                ++res;
//            }
//        }
//        if(flag)
//            ++res;
//        cout << res <<endl;
//    }
//}