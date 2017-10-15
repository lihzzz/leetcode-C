//
// Created by lh on 2017/10/15.
//
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    int countBinarySubstrings(string s) {
        if(s.empty())
            return 0;
        int n = s.length();
        int res = 0;

        for (int k = 2; k <=n ; k+=2) {
            for (int i = 0; i <n-k+1 ; ++i) {
                int mid = k/2;
                if(s[i] == s[i+mid])
                    continue;
                if(issim(s.substr(i,mid)) && issim(s.substr(i+mid,mid)) && s[i] != s[i+k-1]){
                    ++res;
                }
            }
        }
        return res;
    }
    bool issim(string s){
        int left = 0,right = s.size()-1,n=s.size();
        while (left < right){
            if(s[left] != s[right])
                return false;
            ++left;
            --right;
        }
        if(n!=1 && n%2!=0 && s[n/2] != s[n/2 -1]){
            return false;
        }
        return true;
    }
};