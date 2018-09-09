//
// Created by lh on 2018/9/8.
//

#include <iostream>

using namespace std;

//int main(){
//    int t = 0;
//    cin >> t;
//    for (int i = 0; i < t; ++i) {
//        int N,M;
//        long res = 1;
//        cin >> N >> M;
//        for (int j = 0; j <N/2 ; ++j) {
//            for (int k = 0; k <M/2 ; ++k) {
//                int oper = 1;
//                oper = j-1>=0?oper+1:oper;
//                oper = j+1<N?oper+1:oper;
//                oper = k-1>=0?oper+1:oper;
//                oper = k+1<M?oper+1:oper;
//                if(j-1>=0 && k-1>=0) ++oper;
//                if(j+1<N&k-1>=0)++oper;
//                if(j-1>=0 && k+1<M) ++oper;
//                if(j+1<N && k+1<M)++oper;
//                if(oper%2!=0){
//                    ++res;
//                }
//            }
//        }
//        cout << res*2 << endl;
//
//    }
//}