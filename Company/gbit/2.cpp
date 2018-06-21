//
// Created by lh on 2018/3/30.
//

#include <iostream>
#include <vector>
#include <tuple>
#include <unordered_map>
using namespace std;


//typedef std::tuple<int, char, char> key_t;
//
//struct key_hash : public std::unary_function<key_t, std::size_t>
//{
//    std::size_t operator()(const key_t& k) const
//    {
//        return std::get<0>(k) ^ std::get<1>(k) ^ std::get<2>(k);
//    }
//};
//int main(){
//    int n = 0;
//
//    while(cin >>n){
//        vector<tuple<int,int,int>> point;
//        unordered_map<tuple<int,int,int>,int,key_hash> m;
//        int a = 0,b = 0, c =0;
//        for (int i = 0; i < n ; ++i) {
//            cin >> a >> b>>c;
//            tuple<int,int,int> tmp(a,b,c);
//            point.push_back(tmp);
//        }
//
//        for (int i = 0; i < n-1 ; ++i) {
//            for (int j =i+1 ; j <n ; ++j) {
//                int first = abs(get<0>(point[i])- get<0>(point[j]));
//                int second = abs(get<1>(point[i])- get<1>(point[j]));
//                int third = abs(get<2>(point[i])- get<2>(point[j]));
//                tuple<int,int,int> t(first,second,third);
//                if(!m.count(t)){
//                    m[t] = 1;
//                }else{
//                    m[t]++;
//                }
//            }
//        }
//        int res = 0;
//        for(auto&a:m){
//            res = res>a.second?res:a.second;
//        }
//        cout << res <<endl;
//    }
//}