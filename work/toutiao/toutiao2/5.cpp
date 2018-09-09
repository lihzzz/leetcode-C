//
// Created by lh on 2018/9/9.
//

#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

const int MAXNUMBER = 10000;

bool a[MAXNUMBER][MAXNUMBER];



//int main()
//{
//    int n;
//    int m;
//    cin >> n >> m;
//    for( int i = 1; i <= m; i++ )
//    {
//        int b,c;
//        a[i][i] = 1;
//        cin>> b >> c;
//        a[b][c] = 1;
//    }
//    for( int k = 1; k <= n; k++ )
//        for( int i = 1; i <= n; i++ )
//            for( int j = 1; j <= n; j++ )
//                a[i][j] = a[i][j] || ( a[i][k] && a[k][j] );
//    int ans = 0;
//    for( int i = 1; i <= n; i++ ){
//        bool f = true;
//        for( int j = 1; j <= n; j++ )
//            if ( !a[i][j] ){
//                f = false;
//                break;
//            }
//        ans += f;
//    }
//    cout<<ans<<endl;
//    return 0;
//}