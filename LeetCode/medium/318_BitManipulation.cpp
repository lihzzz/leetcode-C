//
// Created by lh on 2017/10/16.
//
#include <vector>
#include <string>
using namespace std;



class Solution {
public:
    int maxProduct(vector<string>& words) {
        int res = 0,n = words.size();
        vector<int> mask(n,0);
        for(int i = 0;i<n;++i){
            for(auto b:words[i]){
                mask[i] |= 1<<(b-'a');
            }
        }

        for (int j = 0; j <n ; ++j) {
            for (int i = j+1; i <n ; ++i) {
                if(!(mask[i] & mask[j])){
                    int r = words[i].size() * words[j].size();
                    res = max(res,r);
                }
            }
        }
        return res;
    }
};