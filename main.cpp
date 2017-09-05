#include <iostream>
#include <vector>
#include <string>
#include "code/300.cpp"
using namespace std;
int main() {
    Solution sl;
    int coin[] = {1,3,6,7,9,4,10,5,6};
    vector<int> coins(begin(coin),end(coin));
    cout << sl.lengthOfLIS(coins);
    return 0;
}