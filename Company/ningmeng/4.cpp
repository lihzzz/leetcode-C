//
// Created by lh on 2018/4/28.
//

#include <iostream>
#include <random>

#define MAXNUM 1000000
using  namespace std;
int getAverCount(){
    //random_device rd;
    default_random_engine e;
    uniform_real_distribution<double > u(0,1);
    int chance = 3;
    long long res = 0;
    for (int i = 0; i <MAXNUM; ++i) {
        chance = 3;
        while (chance!=0){
            ++res;
            double p = u(e);
            double thres = 0.0;
            if(chance==3)
                thres = 0.2;
            else if(chance==2)
                thres = 0.5;
            else
                thres = 0.8;

            if(p<=thres){
                continue;
            }
            --chance;
        }
    }
    cout << static_cast<double >(res)/MAXNUM <<endl;
}
//int main(){
//    getAverCount();
//}