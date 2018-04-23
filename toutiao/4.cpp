//
// Created by lh on 2018/4/15.
//

#include <iostream>
//#include <sstream>
//#include <vector>
//#include <map>
//using namespace std;
//
//int main(){
//    int n = 0;
//    while (cin >>n){
//        vector<vector<int>> num(n);
//        int k = 0;
//        string tmp;
//        cin.get();
//        for (int i = 0; i <n ; ++i) {
//
//            getline(cin,tmp);
//            stringstream s(tmp);
//            s>>k;
//            int numtmp;
//            while(s>>numtmp){
//                num[i].push_back(numtmp);
//            }
//        }
//        for (int l = 0; l <n ; ++l) {
//            map<double,vector<int>> calnum;
//            int len = num[l].size();
//
//            for (int j = 0; j <len-1 ; ++j) {
//                for (int i = j+1; i <len ; ++i) {
//                    double cal = static_cast<double >(num[l][i]) / num[l][j];
//                    if(cal * static_cast<double >(num[l][j]) != static_cast<double>(num[l][i])){
//                        continue;
//                    }
//                    calnum[cal].push_back(num[l][j]);
//                    calnum[cal].push_back(num[l][i]);
//                }
//            }
//            map<double,vector<int>>::iterator it = calnum.begin();
//            int count = 1;
//            for(auto& a:calnum){
//                if(count == k){
//                    cout<< a.second[0]<< " " <<a.second[1]<<endl;;
//                }
//                count++;
//            }
//        }
//    }
//}