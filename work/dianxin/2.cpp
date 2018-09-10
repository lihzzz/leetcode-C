//
// Created by lihzz on 2018/9/10.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int minNumber(int a,int b,int c){
    int first = min(a,b);
    first = min(first,c);
    return first;
}

//int main(){
//    int N = 0;
//    cin >> N;
//
//    if(N<0){
//        cout << 0;
//    }else{
//        int *ugly = new int[N];
//        ugly[0] = 1;
//        int uglyCount = 1;
//        int* numberTwo = ugly;
//        int* numberThird = ugly;
//        int* numberFive = ugly;
//        while(uglyCount < N){
//            int m = minNumber(*numberTwo * 2,*numberThird*3,*numberFive*5);
//            ugly[uglyCount] = m;
//            if(*numberTwo * 2<=m){
//                numberTwo++;
//            }
//            if(*numberThird * 3<=m){
//                numberThird++;
//            }
//            if(*numberFive * 5<=m){
//                numberFive++;
//            }
//            uglyCount++;
//        }
//        int res = ugly[uglyCount-1];
//        cout << res;
//
//    }
//    return 0;
//}