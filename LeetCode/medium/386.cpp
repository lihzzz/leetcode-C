//
// Created by lll on 2017/11/7.
//
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
//class Solution {
//public:
//    vector<int> lexicalOrder(int n) {
//        vector<int> res;
//        vector<string> ss;
//        for (int i = 1; i <=n ; ++i) {
//            ss.push_back(to_string(i));
//        }
//        sort(ss.begin(),ss.end(),[](string& a,string& b){
//            if(a<=b) return true;
//            else return false;
//        });
//        for (int j = 0; j <ss.size() ; ++j) {
//            res.push_back(stoi(ss[j]));
//        }
//        return res;
//    }
//};

class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> res(n);
        int cur = 1;
        for (int i = 0; i <n ; ++i) {
            res[i] = cur;
            if(cur*10 <= n){
                cur *= 10;
            }else{
                if(cur>=n) cur /= 10;
                cur+=1;
                while(cur %10 == 0) cur /= 10;
            }
        }
        return res;
    }
};