//
// Created by lh on 2018/4/5.
//

#include<iostream>
#include <vector>
#include <map>
using namespace std;
//
//int main(){
//    int n=0,m=0;
//    while (cin >> n >> m){
//        vector<pair<int,int>> machine;
//        vector<pair<int,int>> work;
//        multimap<int,int,greater<int>> worksort;
//        for (int i = 0; i <n ; ++i) {
//            int a=0,b=0;
//            cin >> a >> b;
//            pair<int,int> tmp(a,b);
//            machine.push_back(tmp);
//        }
//
//        for (int j = 0; j <m ; ++j) {
//            int a=0,b=0;
//            cin >> a>> b;
//            worksort.insert(make_pair(b,j));
//            pair<int,int> tmp(a,b);
//            work.push_back(tmp);
//        }
//
//        int profit = 0,count = 0;
//        for (int k = 0; k <machine.size() ; ++k) {
//            int maxdev = machine[k].second;
//            int maxtime = machine[k].first;
//
//            multimap<int,int>::iterator it = worksort.begin();
//            while(it!=worksort.end()){
//                if(it->first < maxdev && it->second<maxtime){
//                    profit += (200*it->second+3*it->first);
//                    worksort.erase(it);
//                }
//            }
//        }
//        cout << profit <<endl;
//
//    }
//}