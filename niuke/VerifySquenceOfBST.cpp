//
// Created by lh on 2018/3/15.
//
#include <vector>
using namespace std;
class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        if(sequence.empty())
            return false;
        int len = sequence.size()-1;
        int root = sequence[len];

        int i = 0;
        for (i = 0; i <len -1 ; ++i) {
            if(sequence[i] > root)
                break;
        }

        int j = i;
        for (; j <len -1 ; ++j) {
            if(sequence[j]< root)
                return false;
        }

        bool left = true;
        if(i>0){
            left = VerifySquenceOfBST(vector<int> (sequence.begin(),sequence.begin()+i));
        }

        bool right = true;
        if(i<len-1)
            right = VerifySquenceOfBST(vector<int>(sequence.begin()+i,sequence.end()-2));

        return (left&&right);
    }
};