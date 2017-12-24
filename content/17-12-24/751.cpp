//
// Created by lh on 2017/12/24.
//
#include <vector>
#include <string>
#include <sstream>
#include <boost/lexical_cast.hpp>
//#include <boost/lexical_cast.hpp>
#include <bitset>
using namespace std;
using namespace boost;
class Solution {
public:
    vector<string> ipToCIDR(string ip, int range) {
        vector<string> res;
        auto numvec = split(ip,'.');
        int value =stoi(numvec[3]);
        for (int j = 1; j <4 ; ++j) {
            int a = stoi(numvec[3-j])<<(8*j);
            value += a;
        }
        int count = 0;
        bitset<32> b(value);
        while(count < range){
            int i = 0;
            while (b[i] != 1){
                i++;
            }
            int c = 32-i;
            int nc = pow(2,i);
            if(count + nc > range){
                int need = range - count;
                for(;;i--){
                    if(need>=pow(2,i))
                        break;
                }
                c = 32 - i;
                nc = pow(2,i);
                count += nc;
            }else{
                count += nc;
            }
            res.push_back(to_ipstring(b,c));
            for (; i <32 ; ++i) {
                if(b[i] == 0){

                    break;
                }
            }
            b[i] = 1;
            for (int k = i-1; k >=0 ; --k) {
                b[k] = 0;
            }
        }
        return res;
    }
    string to_ipstring(bitset<32>& b,int c){
        string rets = "";
        for (int i = 0;  i < 32 ; i+=8) {
            int v = b[i];
            for (int j = 1; j <8 ; ++j) {
                int n = b[i+j];
                v+=pow(2,j)*n;
            }
            if(i<24) rets = "." + to_string(v) + rets;
            else rets = to_string(v) + rets;
        }
        rets += "/" + to_string(c);
        return rets;
    }
    vector<string> split(string ip,char delima){
        stringstream s(ip);
        string str;
        vector<string > result;
        while(getline(s,str,delima)){
            result.push_back(str);
        }
        return result;
    }
};