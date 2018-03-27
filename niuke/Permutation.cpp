//
// Created by lh on 2018/3/19.
//
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;
typedef string::iterator sit;
class Solution {
public:
    vector<string> Permutation(string str) {
        vector<string> res;
        if(str.empty()){
            return res;
        }
        set<string> s;
        //sort(str.begin(),str.end());
        helper(str,0,s);
        return vector<string>(s.begin(),s.end());
    }

    void helper(string str,int start,set<string>& res){
        if(start == str.size()){
            res.insert(str);
        }else{
            for (int i = start; i <str.size() ; ++i) {
                char tmp = str[i];
                str[i] = str[start];
                str[start] = tmp;

                helper(str,start+1,res);

                tmp = str[i];
                str[i] = str[start];
                str[start] = tmp;
            }

        }
    }
};