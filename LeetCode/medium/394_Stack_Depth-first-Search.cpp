//
// Created by lh on 17-11-9.
//
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

//class Solution {
//public:
//    string decodeString(string s) {
//        int i = 0;
//        return decode(s,i);
//    }
//    string decode(string s,int &i){
//        string res = "";
//        int n = s.size();
//        while (i<n&& s[i] !=']'){
//            if(s[i] < '0' || s[i]>'9'){
//                res += s[i++];
//            } else{
//                int cnt = 0;
//                while (i<n && s[i]>='0'&&s[i]<='9'){
//                    cnt = cnt*10+s[i++]-'0';
//                }
//                ++i;
//                string t = decode(s,i);
//                ++i;
//                while (cnt-- > 0){
//                    res += t;
//                }
//            }
//        }
//        return res;
//    }
//};

class Solution {
public:
    string decodeString(string s) {
        string res="";
        stack<string> str;
        stack<int> val;
        int cnt = 0;
        for (int i = 0; i <s.size() ; ++i) {
            if(s[i]>='0' && s[i]<='9'){
                cnt = cnt *10 + s[i]-'0';
            }
            else if(s[i] == '['){
                val.push(cnt);
                str.push(res);
                cnt = 0;
                res.clear();
            }else if(s[i] == ']'){
                int k = val.top();
                val.pop();
                while (k>0){
                    str.top() += res;
                    k--;
                }
                res = str.top();
                str.pop();
            }else{
                res += s[i];
            }
        }
        return str.empty()?res:str.top();
    }
};