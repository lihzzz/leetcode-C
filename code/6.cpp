//
// Created by lh on 2017/8/26.
//
#include<string>
using namespace std;
class Solution{
public:
    string merge(string* s,int numRows){
        string res = "";
        for (int i = 0; i <numRows ; ++i) {
            res += s[i];
        }
        return res;
    }
    string convert(string s,int numRows){
        int len = s.length();
        if(len <= numRows || numRows == 1)
            return s;
        string* res = new string[numRows]();
        for (int i = 0;;) {
            int tmp = i +numRows-1 + numRows -1;

            for (int j = 0; j <numRows ; ++j) {
                if( i >= len)
                    return merge(res,numRows);
                res[j] += s[i++];
            }
            for (int k = numRows-2; k > 0 ; --k) {
                if( i>= len)
                    return merge(res,numRows);
                res[k] += s[i++];
            }
            i =tmp;
        }
    }
};