//
// Created by lh on 2017/11/20.
//



//#include <iostream>
//#include <stack>
//#include <vector>
//#include <string>
//using namespace std;
//
//
//bool Priority(char a,char b){
//    if(b== '(' || ((a=='*'|| a == '/') && (b=='-' || b=='+'))){
//        return false;
//    }
//    return true;
//}
//void preProcess(string& str){
//    for(int i=0;i<str.size();++i) {
//        if (str[i] == '{'){
//            str[i] = '(';
//        } else if (str[i] == '}'){
//            str[i] = ')';
//        }else if (str[i] == '['){
//            str[i] = '(';
//        } else if (str[i] == ']') {
//            str[i] = ')';
//        } else if (str[i] == '-') {
//            if (i == 0)
//                str.insert(0, 1, '0');
//            else if (str[i - 1] == '(')
//                str.insert(i, 1, '0');
//        }
//    }
//}
//vector<string> changeto(string str) {
//    int size = str.length();
//    vector<string> res;
//    stack<char> symbol;
//    stack<string> value;
//    string cur;
//    int n = 0;
//    for (int i = 0; i <size ; ++i) {
//        while (str[i] >= '0' && str[i] <= '9'){
//            cur += str[i];
//            ++i;
//        }
//        if (!cur.empty()){
//            value.push(cur);
//            cur = "";
//        }
//        if (i == size)
//            break;
//        char Chr = str[i];
//        if (symbol.empty() || Chr == '('){
//            symbol.push(Chr);
//        }
//        else if (Chr == ')'){
//            while (symbol.top() != '('){
//                char cursym = symbol.top();
//                symbol.pop();
//                value.push(string(1, cursym));
//            }
//            symbol.pop();
//        }
//        else{
//            while (symbol.size()!=0 && Priority(Chr, symbol.top())){
//                char cursym = symbol.top();
//                symbol.pop();
//                value.push(string(1, cursym));
//            }
//            symbol.push(Chr);
//        }
//    }
//    while (symbol.size() != 0){
//        char cursym = symbol.top();
//        symbol.pop();
//        value.push(string(1, cursym));
//    }
//    while (value.size() != 0){
//        res.push_back(value.top());
//        value.pop();
//    }
//    return res;
//}
//int Cal(vector<string> a){
//    int size = a.size();
//    stack<int> s;
//    for (int i = size-1; i>=0; i--)   //依次扫描，如果是数字则压栈，如果是运算符则弹栈两个元素，先出来的在右边，后出来的在左边
//    {
//        string curstr = a[i];
//        bool isnum = true;
//        for (int j = 0; j < curstr.size(); j++)
//        {
//            if (curstr[j]< '0' || curstr[j]>'9'){
//                isnum = false;
//                break;
//            }
//        }
//        if (isnum){
//            s.push(stoi(curstr));
//        }
//        else{
//            if (a[i] == "+" || a[i] == "-" || a[i] == "*" || a[i] == "/"){
//                int right = s.top();s.pop();
//                int left = s.top();s.pop();
//                if (a[i] == "+")
//                    s.push(right + left);
//                else if (a[i] == "-")
//                    s.push(left - right);
//                else if (a[i] == "*")
//                    s.push(left * right);
//                else
//                    s.push(left / right);
//            }
//        }
//    }
//    return s.top();
//}
//int caclExp(string str){
//    preProcess(str);
//    return  Cal(changeto(str));
//}
//int main(){
//    string str ;
//    cin >> str;
//    cout<< caclExp(str);
//    return 0;
//}
