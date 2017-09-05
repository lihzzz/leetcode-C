#include <iostream>
#include <vector>
#include <string>
#include "code/322.cpp"
using namespace std;
int main() {
    Solution sl;
    int coin[] = {474,83,404,3};
    vector<int> coins(begin(coin),end(coin));
    cout << sl.coinChange(coins,264);
    return 0;
}