//
// Created by lh on 2017/9/28.
//
#include <string>
using std::string;


//class Solution {
//public:
//    string addBinary(string a, string b) {
//        int m = a.size();
//        int n = b.size();
//        string res;
//        int nlen = std::max(m,n);
//        bool carry = false;
//
//        if(m<n){
//            for (int i = 0; i <n - m ; ++i) {
//                a.insert(a.begin(),'0');
//            }
//        }else if(m>n)
//            for (int j = 0; j <m-n ; ++j) {
//                b.insert(b.begin(),'0');
//            }
//        for (int k = nlen -1; k >=0 ; --k) {
//            int tmp = 0;
//            if(carry) tmp = (a[k]-'0')+(b[k]-'0') + 1;
//           else tmp = (a[k] - '0') + (b[k] - '0');
//
//            if(tmp == 0){
//                res.insert(res.begin(),'0');
//                carry = false;
//            }else if(tmp == 1) {
//                res.insert(res.begin(), '1');
//                carry = false;
//            }
//            else if( tmp == 2){
//                res.insert(res.begin(),'0');
//                carry = true;
//            }else if(tmp == 3){
//                res.insert(res.begin(),'1');
//                carry = true;
//            }
//        }
//        if(carry)
//            res.insert(res.begin(),'1');
//        return res;
//    }
//};


class Solution {
        public:
        string addBinary(string a, string b) {
            int an = a.size()-1,bn = b.size()-1;
            int carry = 0;
            string res;
            while (an>=0 || bn>=0){
                int add1 = an>=0?a[an--]-'0':0;
                int add2 = bn>=0?b[bn--]-'0':0;
                int tmp = add1 + add2 + carry;
                res = std::to_string(tmp%2) + res;
                carry = tmp/2;
            }
            if(carry!=0)
                res = std::to_string(carry) + res;
            return res;
        }
};
