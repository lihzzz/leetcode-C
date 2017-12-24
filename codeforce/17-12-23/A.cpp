//
// Created by lh on 2017/12/23.
//
//#include <iostream>
//using namespace std;
//int main(){
//    int v1,v2,v3,vm;
//    int maxnum = 0;
//    cin >> v1>> v2>> v3 >>vm;
//    maxnum = 2*v3;
//    if(vm>maxnum || 2*vm >= v2 || 2*vm < v3 ){
//        cout << -1 << endl;
//    }else{
//        int resv1 = 2*v1,maxv2 = resv1/2;
//        int resv2 = 2*v2 < maxv2?2*v2:maxv2-1,maxv3 = resv2/2;
//        int resv3 = v3;
//        if((resv2 % 2 == 0 && resv3 >= maxv3) || (resv2 % 2 != 0 && resv3 >maxv3)){
//            cout << -1 <<endl;
//        }else {
//            cout << resv1 << endl <<resv2 <<endl<<resv3;
//        }
//
//
//    }
//    return 0;
//}