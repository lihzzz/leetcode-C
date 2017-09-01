//
// Created by lh on 2017/9/1.
//
#include <vector>
#include <string>
using namespace std;
class Solution{
public:

    bool ispalindrome(string s){
        int len = s.length();
        int i=0,j=len-1;
        while(i<=j){
            if(s[i] == s[j]){
                i++;
                j--;
            }else{
                return false;
            }
        }
        return true;
    }
    void partitionDFS(string s,int start,vector<string>& out,vector<vector<string>>& res){
        if(start == s.size()){
            res.push_back(out);
            return;
        }
        for(int i = start;i<s.size();i++){
            if(ispalindrome(s.substr(start,i-start+1))){
                out.push_back(s.substr(start,i-start+1));
                partitionDFS(s,i+1,out,res);
                out.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s){
        vector<vector<string>> res;
        vector<string> out;
        partitionDFS(s,0,out,res);
        return res;
    }
};
