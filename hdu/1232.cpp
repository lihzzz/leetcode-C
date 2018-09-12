//
// Created by lihzz on 2018/9/10.
//

#include <iostream>
#include <vector>
using namespace std;

class unionFind{
private:
    vector<int> parent;
public:
    unionFind(int count){
        parent.resize(count);
        for (int i = 0; i <count ; ++i) {
            parent[i] = i;
        }
    }
    ~unionFind(){};

    int Find(int x){
        while(this->parent[x]!=x){
            x = this->parent[x];
        }
        return x;
    }
    void combine(int a,int b){
        int temp_a,temp_b;
        temp_a = this->Find(a);
        temp_b = this->Find(b);
        if(temp_a!=temp_b)
            this->parent[temp_a] = temp_b;
    }

    int find_ans(int n,int& res){
        for (int j = 1; j <=n ; ++j) {
            if(this->parent[j] == j)
                ++res;
        }
        return res;
    }
};

void print(vector<int>& data){
    for (int k = 0; k < data.size(); ++k) {
        cout << data[k]<<" ";
    }
    cout << endl;
}


//int main(){
//    int N =0 ,M = 0;
//
//    while(cin >> N >> M){
//        int res = 0;
//        unionFind uf(N+1);
//        for (int j = 0; j <M; ++j) {
//            int a = 0,b = 0;
//            cin >> a >> b;
//            uf.combine(a,b);
//        }
//        cout << uf.find_ans(N,res)-1<<endl;
//    }
//    return 0;
//}