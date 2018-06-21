//
// Created by lh on 2018/4/5.
//

//#include <iostream>
//
//using namespace std;
//
//
//
//void comb(int m,int n,int& res){
//    int i=0;
//    for (i = m; i >=n ; --i) {
//        if(n>1){
//            comb(i-1,n-1,res);
//        }else{
//            res++;
//        }
//    }
//}
//
//int main(){
//    int K = 0;
//    while (cin>>K){
//        int A=0,X=0,B=0,Y=0;
//        cin >> A >> X >> B >>Y;
//        int res = 0;
//        for (int i=0; i <X ; ++i) {
//            int Xlen = A*i;
//            for (int j = 0; j <Y ; ++j) {
//                int Ylen = B*j;
//                if(Xlen+Ylen==K){
//                    int count1 = 0,count2 = 0;
//                    comb(X,i,count1);
//                    comb(Y,j,count2);
//                    int tmp = count1*count2;
//                    tmp = tmp>=1000000007?tmp%1000000007:tmp;
//                    res += tmp;
//                    res = res>=1000000007?res%1000000007:res;
//                }
//            }
//        }
//        cout << res<<endl;
//    }
//}