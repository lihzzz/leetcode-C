//
// Created by lh on 2018/3/29.
//

//#include <iostream>
//#include <vector>
//#include <cstring>
//
//using namespace std;
//
//int main(){
//    string s;
//    while (getline(cin,s)){
//        vector<vector<long long>> martix;
//        vector<int> tmp;
//        char* af = const_cast<char*> (s.c_str());
//        char *aa = strtok(af," ");
//        while (aa){
//            tmp.push_back(atoi(aa));
//            aa = strtok(NULL," ");
//        }
//        martix.push_back(tmp);
//        int n = tmp.size();
//        for (int i = 0; i <n-1 ; ++i) {
//            tmp.clear();
//            getline(cin,s);
//            s.erase(s.find_last_not_of(" ") + 1);
//            af = const_cast<char*> (s.c_str());
//            aa = strtok(af," ");
//            while (aa){
//                tmp.push_back(atoi(aa));
//                aa = strtok(NULL," ");
//            }
//            martix.push_back(tmp);
//        }
//        int center = (n-1)/2;
//        for (int i = 0; i <center ; ++i) {
//            for (int j = i; j <n-1-i ; ++j) {
//                int tmp = martix[i][j];
//                martix[i][j] = martix[n-1-j][i];
//                martix[n-1-j][i] = martix[n-1-i][n-1-j];
//                martix[n-1-i][n-1-j] = martix[j][n-1-i];
//                martix[j][n-1-i] = tmp;
//            }
//        }
//        for (int k = 0; k <n ; ++k) {
//            for (int i = 0; i <n ; ++i) {
//                cout << martix[k][i] << " ";
//            }
//            cout << endl;
//        }
//    }
//
//}