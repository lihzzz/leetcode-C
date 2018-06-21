//
// Created by lh on 2017/11/12.
//
#include <string>
#include <unordered_map>
using namespace std;
class Solution {
public:
    string countOfAtoms(string formula) {

    }
    void helper(string formula,unordered_map<string,int>& m){
        for (int i = 0; i <formula.size() ; ++i) {
            string cur = "";
            while (isalpha(formula[i])){
                if(isupper(formula[i])){

                }else{
                    cur += to_string(formula[i]);
                }
                ++i;
            }
            string num="";
            while (isalnum(formula[i])){
                num+= to_string(formula[i]);
            }
        }
    }
};