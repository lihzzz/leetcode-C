//
// Created by lh on 2018/9/4.
//

#include <iostream>
#include <map>
#include <unordered_map>
#include <list>
#include <sstream>
using namespace std;


int get(int key,unordered_map<int, list<pair<int, int>>::iterator>& m,list<pair<int, int>>& l) {
    auto it = m.find(key);
    if (it == m.end())
    {
        return -1;
    }
    l.splice(l.begin(), l, it->second);
    return it->second->second;
}

void put(int key, int value,unordered_map<int, list<pair<int, int>>::iterator>& m,list<pair<int, int>>& l,int n) {
    auto it = m.find(key);
    if (it != m.end()) {
        auto b = l.erase(it->second);
        b--;
        auto c = l.insert(b,make_pair(key,value));
        m[key] = c;
    }else{
        l.push_front(make_pair(key, value));
        m[key] = l.begin();
    }
    if (m.size() > n) {
        int k = l.rbegin()->first;
        l.pop_back();
        m.erase(k);
    }
}
//int main(){
//    int n = 0;
//    cin >> n;
//    list<pair<int, int>> l;
//    unordered_map<int, list<pair<int, int>>::iterator> data;
//    getchar();
//    while(true) {
//        string s;
//        getline(cin,s);
//        if(s.empty()){
//            break;
//        }
//        istringstream ss(s);
//        while(ss){
//            char m;
//            int num1,num2;
//            ss >> m;
//            if(m == 'p'){
//                ss >> num1>>num2;
//                put(num1,num2,data,l,n);
//            }else if(m == 'g'){
//                ss >> num1;
//                cout<< get(num1,data,l) << endl;
//            }
//        }
//    }
//}

