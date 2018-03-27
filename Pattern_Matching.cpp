//
// Created by lh on 2018/3/9.
//
#include <string>
#include <vector>
#include <iostream>

using namespace std;

string str = "agctagcagctagctg";

vector<int> getNext(string B){
    int len = B.length();
    vector<int> F(len,-1);
    for(int i=1;i<str.length();i++)
    {
        int j=F[i-1];
        while ((B[j+1]!=B[i])&&(j>=0))
            j=F[j];
        if (B[j+1]==B[i])
            F[i]=j+1;
        else
            F[i]=-1;
    }
    return F;
}

int getIndex(string A,string B){
    vector<int> next = getNext(B);
    int i = 0,n = A.size(),m = B.size();
    int j = 0;
    while (i<n){
        if(A[i] == B[j]){
            i++;
            j++;

            if(j == m){
                int index = i-m ;
                return index;
            }
        }else{
            if(j == 0){
                j++;
            }else{
                j = next[j-1]+1;
            }
        }
    }
    return -1;
}
//int main(){
//    string A,B;
//    A = "ababcabcacbab";
//    B = "abcac";
//    cout <<getIndex(A,B) <<endl;
//    return  0;
//}
