//
// Created by lh on 2017/9/17.
//
#include <string>
#include <unordered_map>

using namespace std;
class MapSum {
public:
    unordered_map<string,int> m;
    /** Initialize your data structure here. */
    MapSum() {

    }

    void insert(string key, int val) {
        m[key] = val;
        return;
    }

    bool ispre(string a,string b){
        for (int i = 0,j=0; i <a.size() ; ++i,++j) {
            if(a[i] != b[j])
                return false;
        }
        return true;
    }

    int sum(string prefix) {
        int value=0;
        for(auto a:m){
            if(ispre(prefix,a.first)){
                value += a.second;
            }
        }
        return value;
    }
};