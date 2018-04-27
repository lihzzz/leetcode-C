//
// Created by lh on 2018/4/27.
//

//#include <iostream>
//#include <sstream>
//using namespace std;
//
//int xpy(int num);
////main已完成，可直接使用
//int main()
//{
//    string line;
//    while(getline(cin, line))
//    {
//        stringstream ss(line);
//        int num = 0;
//        ss >> num;
//        if(num == 0) break;
//        cout << xpy(num) << endl;
//    }
//    return 0;
//}
//
//int xpy(int num){
//    int count = 0;
//    if(num-1 == 1){
//        count = 1;
//    }else if(num-1>1){
//        int first = 0,second = 1;
//        for (int i = 3; i <num; ++i) {
//            int tmp = (i-1)*(first+second);
//            first = second;
//            second = tmp;
//        }
//        count = second;
//    }
//    return num*count;
//
//}