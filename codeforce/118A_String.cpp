//
// Created by lh on 2017/12/5.
//
//#include <iostream>
//#include <string>
//#include <cctype>
//using namespace std;
//int main(){
//    string str;
//    cin >> str;
//    string res="";
//
//    for(char a: str){
//        if(a>='a' && a<='z'){
//            if(a == 'a' || a== 'o' || a == 'y' || a== 'e'|| a=='u'|| a=='i'){
//                continue;
//            }else{
//                res += ".";
//                res.insert(res.end(),a);
//            }
//        }else{
//            if(a=='A' || a=='O' || a=='Y' || a=='E' || a=='U' || a=='I'){
//                continue;
//            }
//            res += ".";
//            res.insert(res.end(),tolower(a));
//        }
//    }
//    cout << res<<endl;
//    return 0;
//}