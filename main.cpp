#include <iostream>
#include <vector>
#include <string>
#include "code/322.cpp"
using namespace std;
int main() {
    Solution sl;
    int coin[] = {1,2,5};
    vector<int> coins(begin(coin),end(coin));
    cout << sl.coinChange(coins,11);
    return 0;
}