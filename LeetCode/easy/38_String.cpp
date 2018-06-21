//
// Created by lh on 2017/9/26.
//

#include <string>
using std::string;

class Solution {
public:
    string countAndSay(int n) {
        if(n<= 0) return "";
        string res = "1";
        for (int i = 2; i <=n ; ++i) {
            int cur = res[0];
            int times = 1;
            string tmpstr;
            res.push_back('#');
            for (int j = 1; j <res.size() ; ++j) {
                if(res[j] == cur)
                    times++;
                else{
                    tmpstr += std::to_string(times);
                    tmpstr.push_back(cur);
                    cur = res[j];
                    times=1;
                }
            }
            res = tmpstr;
        }
        return res;
    }
};