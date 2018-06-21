//
// Created by lh on 2017/9/27.
//
#include <string>
#include <vector>
#include <unordered_map>
using std::unordered_map;
using std::vector;
using std::string;

//        TLE
//class Solution {
//public:
//    vector<int> findAnagrams(string s, string p) {
//        vector<int> res;
//        if(s.empty())
//            return res;
//        for(auto a:p)++m[a];
//        int n = p.size();
//        int j = 0;
//        for (int i = 0; i <s.size() ; ++i) {
//            string tmp = s.substr(i,n);
//            unordered_map<char,int> nn;
//            for(auto a:tmp) ++nn[a];
//            for (j = 0; j <n ; ++j) {
//                if(m[p[j]] != nn[p[j]])
//                    break;
//            }
//            if(j == n)
//                res.push_back(i);
//        }
//        return res;
//    }
//private:
//    unordered_map<char,int>m;
//};

//class Solution {
//public:
//    vector<int> findAnagrams(string s, string p) {
//        vector<int> res,cnt(128,0);
//        int n = p.size();
//        int j = 0;
//        if(s.empty())return res;
//        for(auto a:p)++cnt[a];
//        for (int i = 0; i <s.size() ; ++i) {
//            bool success = true;
//            vector<int> tmp = cnt;
//            for (j = i; j <i+n ; ++j) {
//                if(--tmp[s[j]] < 0){
//                    success= false;
//                    break;
//                }
//            }
//            if(success)
//                res.push_back(i);
//        }
//        return res;
//    }
//};


class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res,m(256,0),nn(256,0);
        int n = p.size();
        int j = 0;
        if(s.empty())return res;
        for (int k = 0; k <p.size() ; ++k) {
            m[s[k]]++;
            nn[p[k]]++;
        }
        if(m == nn) res.push_back(0);
        for (int i = n; i <s.size() ; ++i) {
            ++m[s[i]];
            --m[s[i-n]];
            if(m == nn)res.push_back(i-n+1);
        }
        return res;
    }
};