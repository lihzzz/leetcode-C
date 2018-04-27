//
// Created by lh on 2018/4/27.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int jump(int num);


using namespace std;
//TODO 需实现本函数
int jump(int num);

//以下main已完成、可直接使用
int main()
{
    string line;
    while(getline(cin, line))
    {
        stringstream ss(line);
        int num = 0;
        ss >> num;
        if(num == 0) break;
        cout << jump(num) << endl;
    }
    return 0;
}

int jump(int num){
    if(num<4)
        return num;
    int first = 2;
    int second = 3;
    int count = 0;
    for (int i = 4; i <=num ; ++i) {

        int tmp = second;
        second = first + second-count;
        first = tmp;
    }
    return second;
}