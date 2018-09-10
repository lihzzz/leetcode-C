//
// Created by lihzz on 2018/9/3.
//

#include <iostream>
#include <sstream>
#include <vector>
#include <set>
#include <unordered_map>
using namespace std;


int main(){
    int n = 0;
    cin >> n;
    set<pair<int,int>> s;
    vector<int> vis;
    unordered_map<int,int> res;
    vector<int> data(n,0);
    for (int i = 0; i <n ; ++i) {
        int a = 0,b = 0;
        cin >> a >> b;
        pair<int,int> tmp(a,b);
        vis.push_back(a);
        s.insert(tmp);
    }

    for(auto& a:s){
        int len = a.first,height = a.second;
        int minN = len+1;
        int maxN = len+height-1;
        for(auto& b:s){
            if(b.first >= minN && b.first<= maxN){
                res[len]++;
            }
            if(b.first>maxN){
                break;
            }
        }
    }
    for(auto&a:vis){
        cout << res[a]+1 << " ";
    }
    cout << endl;
    return 0;
}