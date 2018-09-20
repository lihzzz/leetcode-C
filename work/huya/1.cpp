//
// Created by lihzz on 2018/9/18.
//

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <limits>
#define N 30
using namespace std;
int Add(int a, int b)
{
    return (a==INT_MAX || b==INT_MAX)? INT_MAX : a+b;
}
void Floyd(vector<vector<int>>& Cost,vector<vector<int>>& path,int n,int from,int to){
    for (int k = 0; k <n ; ++k) {
        for (int i = 0; i <n ; ++i) {
            for (int j = i; j <n ; ++j) {
                if(Add(Cost[i][k],Cost[k][j]) < Cost[i][j]){
                    Cost[i][j] = Add(Cost[i][k],Cost[k][j]);
                    path[i][j] = k;
                }
            }
        }
    }
}

void getPath(vector<vector<int>>& path,int i,int j,vector<int>&res){
    if(i==j)
        return;
    if(path[i][j]==0){
        res.push_back(j);
    }
    else{
        getPath(path,i,path[i][j],res);
        getPath(path,path[i][j],j,res);
    }
}

int main(){
    vector<vector<int>> Cost(N,vector<int>(N,INT_MAX));
    vector<vector<int>> path(N,vector<int>(N,0));
    vector<int> res;
    char start,end;
    cin >> start >> end;
    getchar();
    string str;
    int num = end - 'a';
    for (int i = 0; i < num; ++i) {
        getline(cin,str);
        istringstream is(str);
        char node;
        char tmp;
        char dis;
        is >> node;
        while(is>>tmp){
            is >> dis;
            Cost[node-'a'][tmp-'a'] = dis-'0';
        }
    }
    Floyd(Cost,path,num+1,0,num+1);
    getPath(path,0,num,res);
    cout << 'a' << " ";
    for (size_t j = 0; j < res.size(); ++j) {
        cout << static_cast<char>(res[j]+'a');
        if(j!=res.size()-1){
            cout << " ";
        }
    }
    cout << endl;
    cout << Cost[0][num];
    return 0;
}