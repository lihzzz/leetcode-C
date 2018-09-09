//
// Created by lh on 2018/8/25.
//

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>
#include <stack>
using namespace std;
void  helper(unordered_map<int,vector<int>>& m,int i,stack<int>& s,int n){
    for(auto& a:m[i]){
        s.push(a);
    }
    for (int j = 1; j <= n ; ++j) {
        if(j!=i){
            for(auto& a:m[j]){
                if(a == i){
                    s.push(j);
                    break;
                }
            }
        }
    }
}
bool isend(vector<int>& vis){
    for(auto& a:vis){
        if(a == 0){
            return false;
        }
    }
    return true;
}
//int main(){
//    int n = 0 ;
//    int res = 0;
//    cin >> n;
//    getchar();
//    unordered_map<int,vector<int>> m;
//    vector<vector<int>> vec;
//    for (int i = 0; i <n ; ++i) {
//        if(!m.count(i+1)){
//            m[i+1] = vector<int>();
//        }
//        string tmp;
//        getline(cin,tmp);
//        istringstream is(tmp);
//        int num = 0;
//        is >> num;
//        while(num!=0){
//            m[i+1].push_back(num);
//            is>>num;
//        }
//    }
//    vector<int> people(n,0);
//    int i = 0;
//    while(!isend(people)){
//        stack<int> s;
//        for (int j = 0; j <people.size() ; ++j) {
//            if(people[j]  == 0){
//                i = j+1;
//                break;
//            }
//        }
//        s.push(i);
//        ++res;
//        while(!s.empty()){
//            i = s.top();
//            s.pop();
//            if(people[i-1] == 1){
//                continue;
//            }
//            people[i-1] = 1;
//            helper(m,i,s,n);
//        }
//    }
//    cout <<  res;
//}


