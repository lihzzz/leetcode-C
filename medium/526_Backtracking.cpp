//
// Created by lh on 2017/10/4.
//
#include <vector>
using std::vector;
class Solution {
public:
    int countArrangement(int N) {
        vector<int> array(N+1,0);
        int res = 0;
        helper(N,array,1,res);
        return res;
    }
    void helper(int N,vector<int>& visited,int pos,int &res){
        if(pos>N){
            ++res;
            return;
        }
        for (int i = 1; i <=N ; ++i) {
            if(visited [i]== 0 && (i%pos == 0 || pos%i==0)){
                visited[i] = 1;
                helper(N,visited,pos+1,res);
                visited[i] = 0;
            }
        }
    }
};
