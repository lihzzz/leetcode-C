//
// Created by lh on 2018/9/6.
//

#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
#include <queue>
using namespace std;


//int main(){
//    int n;  
//    while(cin>>n)
//    {
//        vector<int> node(100000,0);
//        for(int i = 0;i<n-1;i++){
//            int a,b;    
//            cin>>a>>b;  
//            node[b] = node[a]+1;
//        }  
//        int depth = 0;  
//        for(int i = 1;i<=n;i++)
//            if(node[i]>depth){
//                depth = node[i];
//            }
//        cout<<2*n-2-depth<<endl;
//    }  
//    return 0;
//}

//bool isVis(const vector<int>& vis){
//    auto iter = vis.begin();
//    while(iter!=vis.end()){
//        if(*iter == 0){
//            return false;
//        }
//        iter++;
//    }
//    return true;
//}
//int main(){
//    int n = 0;
//    cin >> n;
//    int res = 0;
//    int high = 0;
//    vector<int> vis(n,0);
//    queue<int> s;
//    unordered_map<int,vector<int>> m;
//    for (int i = 1; i < n ; ++i) {
//        int a,b;
//        cin >> a >> b;
//        if(!m.count(a)){
//            m[a] = vector<int>();
//        }
//        m[a].push_back(b);
//    }
//    int i = 0;
//    for (i = 0; i <n ; ++i) {
//        if(vis[i]==0 && m.count(i)){
//            break;
//        }
//    }
//    s.push(i);
//    vis[i-1] = 1;
//    while (!s.empty() && !isVis(vis)){
//        int size = s.size();
//        high++;
//        for (int j = 0; j < size; ++j) {
//            int start = s.front();
//            s.pop();
//            for(auto &num :m[start]){
//                if(!vis[num-1]){
//                    res+=high;
//                    vis[num-1] = 1;
//                }
//                s.push(num);
//            }
//        }
//    }
//    cout << res;
//}
