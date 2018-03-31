//
// Created by lh on 2018/3/28.
//

//#include <iostream>
//#include <vector>
//#include <cstring>
//
//using namespace std;
//#define INT_MIN (-2147483647 - 1)
//int main(){
//    vector<int> num;
//    int a;
//    string s;
//    while (getline(cin,s)){
//        char* af = const_cast<char*> (s.c_str());
//        char *aa = strtok(af,",");
//        while (aa){
//            num.push_back(atoi(aa));
//            aa = strtok(NULL,",");
//        }
//        int n = num.size();
//        int res = INT_MIN;
//        int sum = 0;
//        for (int i = 0; i < n; ++i) {
//            sum += num[i];
//            if(sum > res){
//                res = sum;
//            }
//            if(sum < 0){
//                sum = 0;
//            }
//        }
//        cout << res;
//    }
//
//}