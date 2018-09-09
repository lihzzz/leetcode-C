//
// Created by lh on 2018/9/9.
//

#include <iostream>
#include <tuple>
#include <vector>
using namespace std;


void isPro(vector<vector<int>>& data){
    int res = 0;
    for (int j = 0; j <data.size() ; ++j) {
        int flag = 1;
        for (int i = 0; i <data.size() ; ++i) {
            if(i == j)
                continue;
            if(data[j][0]<data[i][0] && data[j][1]<data[i][1] && data[j][2]<data[i][2]){
                ++res;
                break;
            }
        }
    }
    cout << res << endl;
}
//int main(){
//    int n;
//    cin >> n;
//    vector<vector<int> > data;
//    for (int i = 0; i <n ; ++i) {
//        int a,b,c;
//        vector<int> tmp;
//        cin >> a >> b>>c;
//        tmp.push_back(a);
//        tmp.push_back(b);
//        tmp.push_back(c);
//        data.push_back(tmp);
//    }
//    isPro(data);
//
//
//    return  0;
//}