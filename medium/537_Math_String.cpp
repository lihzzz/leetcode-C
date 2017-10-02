//
// Created by lh on 2017/10/2.
//

#include <string>

using std::string;
using std::stoi;
using std::to_string;
class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        int index1 = a.find("+");
        int index2 = a.find("i");
        int one1 =stoi(a.substr(0,index1));
        int one2 =stoi(a.substr(index1+1,index2-index1-1));
        index1 = b.find("+");
        index2 = b.find("i");
        int two1 = stoi(b.substr(0,index1));
        int two2 = stoi(b.substr(index1+1,index2-index1-1));

        int res1 = 0,res2 = 0;
        res1 = one1 * two1 - one2 * two2;
        res2 = one1 * two2 + one2 * two1;

        string res = "";
        res += to_string(res1) + "+" + to_string(res2) + "i";

        return res;
    }
};