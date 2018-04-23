//
// Created by lh on 2018/4/16.
//


#include <iostream>

using namespace std;


int is_Pali(int n)
{
    int res = 0;
    int a1,a2;
    a1 = n;
    a2 = 0;
    for (res = 0; a1 > 0; res++) {
        a1 >>= 1;
    }
    a1 = n;
    for(;res > 0; res--)
    {
        a2 <<= 1;
        a2 += (a1 & 1);
        a1 >>= 1;
    }
    if (a2 == n)
        return 1;
    else return 0;
}

//int main(){
//    long long n;
//    while (cin >> n){
//        long long res=0,i=0;
//        for (; i<=n ; ++i) {
//            if(is_Pali(i)){
//                ++res;
//            }
//        }
//        cout << res << endl;
//    }
//}