//
// Created by lihzz on 2018/7/12.
//
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> res;
        vector<string> tmp;
        helper(res,tmp,s,0);
        return res;
    }

private:
    void helper(vector<string>& res,vector<string>ip,string s,int start){
        if(ip.size() == 4 && start == s.size()){
            res.push_back(ip[0] + '.' + ip[1] + '.' + ip[2] + '.' + ip[3]);
            return;
        }
        if(s.size() - start > (4 - ip.size()) *3 || s.size() - start < 4-ip.size()){
            return;
        }
        int num = 0;
        for (int i = start; i <s.size() ; ++i) {
            num = num*10 + (s[i] - '0');
            if(num < 0 || num > 255)
                continue;
            ip.push_back(s.substr(start,i-start+1));
            helper(res,ip,s,i+1);
            ip.pop_back();

            if(num == 0) break;
        }
    }
};