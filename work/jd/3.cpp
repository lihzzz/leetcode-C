//
// Created by lh on 2018/9/9.
//



#include <iostream>
#include <vector>
#include <set>

using namespace std;



//int main(){
//    int T;
//    cin >> T;
//    for (int t = 0; t != T; ++t){
//        int N=0, M=0;
//        cin >> N >> M;
//        vector<set<int>> vis;
//        vector<vector<bool>> data(N, vector<bool>(N, false));
//        for (int i = 0; i != M; ++i){
//            int a, b;
//            cin >> a >> b;
//            data[a - 1][b - 1] = true;
//            data[b - 1][a - 1] = true;
//        }
//        for (int i = 0; i < N; ++i){
//            for (int j = i + 1; j < N; ++j){
//                if (data[i][j] == false){
//                    set<int> tmp;
//                    bool flag = false;
//                    for (int m = 0; m != vis.size(); ++m){
//                        for (auto& x : vis[m]){
//                            if (x == i || x == j){
//                                vis[m].insert(i);
//                                vis[m].insert(j);
//                                flag = true;
//                            }
//                        }
//                    }
//                    if (flag == false){
//                        tmp.insert(i);
//                        tmp.insert(j);
//                        vis.push_back(tmp);
//                    }
//                }
//            }
//        }
//        for (int i = 0; i != N; ++i){
//            bool isFind = false;
//            for (int j = 0; j != vis.size(); ++j){
//                if (vis[j].count(i))
//                    isFind = true;
//            }
//            if (isFind == false){
//                set<int> tmp;
//                tmp.insert(i);
//                vis.push_back(tmp);
//            }
//        }
//        if (vis.size() == 1){
//            cout << "No" << endl;
//            continue;
//        }
//        for (int i = 0; i != vis.size(); ++i){
//            for (int j = 0; j != vis.size(); ++j){
//                if (i == j) continue;
//                for (auto& a : vis[i]){
//                    for (auto& b : vis[j]){
//                        if (a == b || data[a][b] == false){
//                            cout << "No" << endl;
//                            continue;
//                        }
//                    }
//                }
//            }
//        }
//        cout << "Yes" << endl;
//    }
//    return 0;
//}