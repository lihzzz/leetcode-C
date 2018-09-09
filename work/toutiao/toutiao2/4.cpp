//
// Created by lh on 2018/9/9.
//

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


//int main(){
//    int N = 0;
//    cin >> N;
//    vector<int> data(N,0);
//    for (int i = 0; i < N; ++i) {
//        cin >> data[i];
//    }
//
//    for (int j = 0; j <N ; ++j) {
//        if(data[j]<0b10000000){
//            continue;
//        }else{
//            int cnt = 0,val = data[j];
//            for (int i = 7; i >=1 ; --i) {
//                if(val >= pow(2,i))
//                    ++cnt;
//                else
//                    break;
//                val -= pow(2,i);
//            }
//            if(cnt == 1){
//                cout << 0;
//                return 0;
//            }
//
//            for (int k = j+1; k <j+cnt ; ++k) {
//                if(data[k]>0b10111111 || data[k] < 0b10000000){
//                    cout << 0;
//                    return 0;
//                }
//            }
//            j+=cnt-1;
//        }
//    }
//    cout << 1;
//    return 0;
//}