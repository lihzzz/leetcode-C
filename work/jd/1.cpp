//
// Created by lh on 2018/9/9.
//

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool isT(vector<int>& edgeCount){
    int num = 1;
    int cur = edgeCount[0];
    for (int i = 1; i <edgeCount.size() ; ++i) {
        if(edgeCount[i]!=cur){
            ++num;
            cur = edgeCount[i];
        }
    }
    if(num>2){
        return false;
    }
    return true;
}
//int main(){
//    int T = 0;
//    cin >> T;
//    for (int i = 0; i <T ; ++i) {
//        unordered_map<int,vector<int>> m;
//        int N=0,M=0;
//        cin >> N >> M;
//        vector<int> edgeCount(N,0);
//        for (int j = 0; j < M; ++j) {
//            int a=0,b=0;
//            cin >> a >> b;
//            if(!m.count(a)){
//                m[a] = vector<int>();
//            }
//            m[a].push_back(b);
//        }
//        for(auto& a:m){
//            edgeCount[a.first-1] += a.second.size();
//            for(auto&b :a.second){
//                edgeCount[b-1]++;
//            }
//        }
//        sort(edgeCount.begin(),edgeCount.end());
//        if(edgeCount[0] == edgeCount[edgeCount.size()-1] || isT(edgeCount)){
//            cout << "YES"<<endl;
//        } else{
//            cout << "NO"<<endl;
//        }
//    }
//    return 0;
//}