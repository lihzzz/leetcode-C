////
//// Created by lh on 2018/3/22.
////
//#include <iostream>
//#include <vector>
//#include <set>
//#include <string>
//using  namespace std;
//
//int caldistance(string str1,string str2,vector<int> next,int index,vector<int> cc){
//    int n = str1.size();
//    int count = 0;
//    if(next[index]==-1){
//        for (int i = 0; i <n ; ++i) {
//            if(str1[i] != str2[i])
//                count++;
//        }
//    }
//
//
//    return count;
//}
//vector<int> getNext(string B){
//    int len = B.length();
//    vector<int> F(len,-1);
//    for(int i=1;i<len;i++)
//    {
//        int j=F[i-1];
//        while ((B[j+1]!=B[i])&&(j>=0))
//            j=F[j];
//        if (B[j+1]==B[i])
//            F[i]=j+1;
//        else
//            F[i]=-1;
//    }
//    return F;
//}
//int main(){
//    string str1,str2;
//    vector<int> next = getNext(str1);
//    while (cin>> str1 >> str2){
//
//        int res =0;
//        int m = str1.size(),n=str2.size();
//        vector<int> count(m-n+1,-1);
//        for (int i = 0; i <m-n+1 ; ++i) {
//            string tmp = str1.substr(i,n);
//            int num = caldistance(tmp,str2,next,i,count);
//            count.push_back(num);
//        }
//        cout << res <<endl;
//    }
//    return 0;
//}

