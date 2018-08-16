//
// Created by lihzz on 2018/8/15.
//
#include "../common_header.h"
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        if(m == 0){
            return 0;
        }
        if(n<m || n==0){
            return -1;
        }
        vector<int> prefix(n,0);
        getNext(needle,prefix);

        int j = 0;
        for (int i = 0; i <n;) {
            if(haystack[i] == needle[j]){
                i++;
                j++;
                if(j==m){
                    return i-m;
                }
            }else{
                if(j == 0){
                    i++;
                }else{
                    j = prefix[j-1];
                }
            }
        }
        return -1;
    }

    void getNext(string Pattern ,vector<int>& A){
        int len = Pattern.length();
        A[0] = 0;
        for (int i = 1; i <len ; ++i) {
            int k = A[i-1];
            while(Pattern[i] != Pattern[k] && k!=0)
                k = A[k-1];
            if(Pattern[i] == Pattern[k] ){
                A[i] = k+1;
            }else{
                A[i] = 0;
            }
        }
        print(A,"");
    }

    void print(const vector<int>&A,string str){
        cout << str << "  :";
        for (int i = 0; i <A.size() ; ++i) {
            cout << A[i]<< " ";
        }
        cout << endl;
    }
};