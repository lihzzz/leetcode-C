//
// Created by lh on 2018/3/31.
//

//#include <iostream>
//#include <vector>
//using namespace std;
//#define INT_MAX 2147483647
//
//void cal(vector<int>& num,int index,vector<long int>& res){
//    long int tmp = 0;
//    tmp += num[index];
//    long int remainder = 0;
//    int minre = INT_MAX;
//    for (int k = 0; k <3 ; ++k) {
//        if(k!=index){
//            num[k] -= num[index];
//            remainder += num[k];
//            if(num[k]<minre){
//                minre = num[k];
//            }
//        }
//    }
//    if(remainder < 3 || minre == 0){
//        res.push_back(tmp);
//    }else{
//        tmp += minre;
//        res.push_back(tmp);
//    }
//}
//
//int main(){
//    int n = 0;
//
//    cin >> n;
//    vector<vector<int> > count(n,vector<int>(3));
//    vector<long int> res;
//    for (int i = 0; i <n ; ++i) {
//        long int minnum = INT_MAX;
//        int index = 0;
//        for (int j = 0; j <3 ; ++j) {
//            cin >> count[i][j];
//            if(count[i][j]<minnum){
//                minnum = count[i][j];
//                index = j;
//            }
//        }
//        cal(count[i],index,res);
//    }
//    for (int k = 0; k <n ; ++k) {
//        cout << res[k] << endl;
//    }
//}