//
// Created by lh on 2018/3/31.
//

#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n = 0;
    while(cin >> n){
        int m = 0;
        for (int i = 0; i <n ; ++i) {
            cin >> m;
            int res = 0;
            vector<vector<int> > rect(m,vector<int>(4));
            for (int j = 0; j <m ; ++j) {
                for (int k = 0; k <4 ; ++k) {
                    cin >> rect[j][k];
                }
                res += ((rect[j][2]-rect[j][0]+1) * (rect[j][3]-rect[j][0]+1));
            }

            cout << res <<endl ;
        }
    }
}