//
// Created by lh on 2018/4/16.
//

//#include <iostream>
//#include <cmath>
//#include <set>
//
//using namespace std;
//
//bool isPrime( int num )
//{
//    int tmp =sqrt(num);
//    for(int i= 2;i <=tmp; i++)
//        if(num %i== 0)
//            return 0 ;
//    return 1 ;
//}
//
//bool ppow(int a,int b){
//    for (int i = 2; i <=b ; ++i) {
//        int x = pow(a,i);
//        if(x == b)
//            return 1;
//        if(x>b)
//            return 0;
//    }
//    return 0;
//}
//int main(){
//    int n = 0;
//    while(cin >> n){
//        int res = 0;
//        set<int> s;
//        if(n<=1){
//            cout << res << endl;
//        }else{
//            for (int i = 2; i <=n ; ++i) {
//                if(isPrime(i)){
//                    ++res;
//                    s.insert(i);
//                }else{
//                    for(auto&a:s){
//                        if(ppow(a,i)){
//                            ++res;
//                            break;
//                        }
//                    }
//                }
//            }
//            cout << res << endl;
//        }
//    }
//}