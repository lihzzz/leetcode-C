#include <iostream>
#include <vector>
#include <string>
#include "code/300.cpp"
using namespace std;
int main() {
    Solution sl;
    int coin[] = {2, 5, 3, 7, 11, 8, 10, 13, 6};
    vector<int> coins(begin(coin),end(coin));
    cout << sl.lengthOfLIS(coins);
    return 0;
}