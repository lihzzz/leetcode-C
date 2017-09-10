#include <iostream>
#include <vector>
#include <string>
#include "code/63.cpp"
using namespace std;
int main() {
    Solution sl;
//    int coin[] = {2, 5, 3, 7, 11, 8, 10, 13, 6};
//    vector<int> coins(begin(coin),end(coin));

    vector<vector<int>> ob;
    vector<int>a ={1,0};
    //vector<int>b = {0,1,0};
    //vector<int>c = {0,0,0};
    ob.push_back(a);
    //ob.push_back(b);
    //ob.push_back(c);
    cout << sl.uniquePathsWithObstacles(ob);
    return 0;
}