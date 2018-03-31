//
// Created by lh on 2018/3/29.
//

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(){
//    int n = 0;
//    while (cin >> n){
//        vector<int> num(n,0);
//        for (int i = 0; i <n ; ++i) {
//            cin >> num[i];
//        }
//
//        int zerostart = 0,zeroend = 0;
//        int i = 0;
//        while (i<n){
//            if(num[i] == 0){
//                zerostart = i;
//                zeroend = i;
//                break;
//            }
//            ++i;
//        }
//        if(i==n){
//            for (int j = 0; j <n ; ++j) {
//                cout << num[j]<<endl;
//            }
//            continue;
//        }
//        ++i;
//        while (i<n){
//            if(num[i] == 0){
//                zeroend = i;
//            }else{
//                num[zerostart] = num[i];
//                num[i] = 0;
//                ++zerostart;
//                ++zeroend;
//            }
//            ++i;
//        }
//        for (int j = 0; j <n ; ++j) {
//            cout << num[j]<<endl;
//        }
//    }
//}