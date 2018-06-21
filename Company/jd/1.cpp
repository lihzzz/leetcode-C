//
// Created by lh on 2018/4/9.
//

#include <iostream>
using namespace std;

//const int maxn = 100000 + 5;
//int tmp[maxn];
//int n;
//int main() {
//    cin >> n;
//    for(int i = 1; i <= n; i++) {
//        int k = i;
//        for(int j = 2; j * j <= n; j++) {
//            int s = 0;
//            while(k % j == 0) {
//                s++;
//                k /= j;
//            }
//                tmp[j] = max(tmp[j], s);
//        }
//        if(k > 1) tmp[k] = max(tmp[k], 1);
//    }
//    long long res = 1;
//    for(int i = 1; i <= 100000; i++) {
//        for(int j = 0; j < tmp[i]; j++) {
//            res = res * i % 987654321;
//        }
//    }
//    cout << res << endl;
//    return 0;
//}




//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//int gcd(int a, int b) {
//    int t;
//    if (a < b) {
//        t = a;
//        a = b;
//        b = t;
//    }
//    while (t = a % b) {
//        a = b;
//        b = t;
//    }
//    return b;
//}
//
//int helper(int n){
//    long long res = 1;
//    long long first = 1;
//    for (int i = 2; i <=n ; ++i) {
//        res  = first/gcd(first,i)*i;
//        res>=987654321?res%987654321:res;
//        first = res;
//    }
//    return res;
//
//}
//int main(){
//    int n = 0;
//    while(cin >> n){
//        if(n==1)
//            cout << 1<<endl;
//        else if(n==2)
//            cout << 2 << endl;
//        else{
//            long long minnum = 1;
//            minnum = helper(n);
//            cout << minnum << endl;
//        }
//
//    }
//}

