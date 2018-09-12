//
// Created by lh on 2018/9/12.
//

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int gcd(int x,int y)
{
    if(x%y==0)
    {
        return y;
    }
    else
    {
        return gcd(y,x%y);
    }
}

//int main(){
//    int N = 0;
//    cin >> N;
//    int res = 0;
//    for (int i = 1; i <=sqrt(N+0.5) ; ++i) {
//        for(int j = i+1;j*i<=N;j+=2){
//            if(gcd(i,j)==1){
//                int a = pow(j,2)-pow(i,2);
//                int b = 2*i*j;
//                int c = pow(i,2)+pow(j,2);
//                if(c<=N){
//                    ++res;
//                }
//            }
//        }
//    }
//    cout << res ;
//}