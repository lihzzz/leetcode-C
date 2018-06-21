//
// Created by lh on 2018/4/20.
//

#include <iostream>

using namespace std;


long long help(long long  x, long long y, long long N)
{
    if (y == 0)
        return 1;
    long long  ret = help(x, y / 2, N);
    if (y % 2 == 0)
        return ret * ret % N;
    return ret * ret * x % N;
}

//int main()
//{
//    long long x, y, N;
//    while(cin >> x >> y >> N){
//        cout << help(x, y, N) << endl;
//    }
//    return 0;
//}

