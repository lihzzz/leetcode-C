//
// Created by lh on 2018/4/27.
//

//#include <iostream>
//
//using namespace std;
//
//void stringRevers(string& str,int from,int to){
//    while(from<to){
//        char a = str[from];
//        str[from++] = str[to];
//        str[to--] = a;
//    }
//}
//int main(){
//    string str;
//    while(getline(cin,str)){
//        int start = 0,end=0;
//        for (int i = 0; i <str.size() ; ++i) {
//            start =end= i;
//            while(i<str.size()&& str[i]!= ' '){
//                ++end;
//                ++i;
//            }
//            stringRevers(str,start,end-1);
//        }
//        stringRevers(str,0,str.size()-1);
//        cout << str<<endl;
//    }
//
//}
