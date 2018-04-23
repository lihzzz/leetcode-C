//
// Created by lh on 2018/4/15.
//

//#include <iostream>
//#include <vector>
//#include <sstream>
//#include <set>
//
//using namespace std;
//
//int main(){
//    int n = 0;
//    while(cin>> n){
//        vector<set<int>> arr(n);
//        for (int i = 0; i <n ; ++i) {
//           int col = 0;
//            cin >> col;
//            for (int k = 0; k <col ; ++k) {
//                int num = 0;
//                cin >> num;
//                arr[i].insert(num);
//            }
//
//        }
//
//        for (int j = 0; j <n ; ++j) {
//            bool flag = true;
//            int size = arr[j].size();
//            int res;
//            set<int>::iterator it = arr[j].end();
//            int front = *arr[j].begin(), end = *(--it);
//            for (int k = 1;; ++k) {
//                flag = true;
//                for (auto &a:arr[j]) {
//                    long long add = a+k;
//                    if (add <= end && !arr[j].count(add)) {
//                        flag = false;
//                        break;
//                    }
//                    if (a - k >= front && !arr[j].count(a - k)) {
//                        flag = false;
//                        break;
//                    }
//                }
//                if (flag) {
//                    cout << k << endl;
//                    break;
//                }
//            }
//        }
//    }
//}