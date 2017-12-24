//
// Created by lh on 2017/12/24.
//
#include <vector>
#include <string>
#include <cmath>
#include <bitset>

using namespace std;
class Solution {
public:
    vector<string> ipToCIDR(string ip, int range) {
        vector<string> res;
        int curaip = stoi(ip.substr(0,ip.find_first_of('.')));
        ip = ip.substr(ip.find_first_of('.')+1);
        int curbip = stoi(ip.substr(0,ip.find_first_of('.')));
        ip = ip.substr(ip.find_first_of('.')+1);
        int curcip = stoi(ip.substr(0,ip.find_first_of('.')));
        ip = ip.substr(ip.find_first_of('.')+1);
        int curdip = stoi(ip);
        int currange = 0;
        string pushstring ="";
//        string pushstring = to_string(curaip) + "."+to_string(curbip) + "."
//                            + to_string(curcip) + "." + to_string(curdip)+"/" + to_string(32);
//        res.push_back(pushstring);
//
//        range -= currange;
//        curdip += currange;
//        if(curdip>255){
//            curcip += curdip/255;
//            curdip = curdip%255;
//        }
//        if(curcip>255){
//            curbip += curcip/255;
//            curcip = curcip%255;
//        }
//        if(curbip>255){
//            curaip += curbip/255;
//            curbip = curbip%255;
//        }
        while (range!=0 ){
            int i =0,j=0;
            for (;; ++j) {
                if(curdip<pow(2,j)){
                    break;
                }
            }
            for (;; ++i) {
                if(range<pow(2,i)){
                    break;
                }
            }
            int a = i>j?j-1:i-1;
            currange = pow(2,a);
            range -=currange;
            pushstring = to_string(curaip) + "."+to_string(curbip) + "."
                                + to_string(curcip) + "." + to_string(curdip)+"/" + to_string(32-a);
            res.push_back(pushstring);
            curdip += currange;
            if(curdip>255){
                curcip += curdip/255;
                curdip = curdip%255;
            }
            if(curcip>255){
                curbip += curcip/255;
                curcip = curcip%255;
            }
            if(curbip>255){
                curaip += curbip/255;
                curbip = curbip%255;
            }
        }
        return res;
    }
};