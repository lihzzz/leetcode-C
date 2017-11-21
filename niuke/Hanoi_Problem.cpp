//
// Created by lh on 2017/11/21.
//
#include <string>
#include <vector>
using namespace std;
class Hanoi {
public:
    vector<string> getSolution(int n) {
        // write code here
        vector<string> res;
        helper(n,"left","mid","right",res);
        return res;
    }
    void helper(int n,string left,string mid,string right,vector<string>& res){
        if(n==1){
            string cur= "move from "+ left +" to " + right;
            res.push_back(cur);
            return;
        }
        helper(n-1,left,right,mid,res);
        helper(1,left,mid,right,res);
        helper(n-1,mid,left,right,res);
    }
};