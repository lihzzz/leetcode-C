//
// Created by lihzz on 2018/9/20.
//

#include <iostream>
#include <vector>
#include <numeric>
#include <limits>
#include <limits.h>

using namespace std;


/*请完成下面这个函数，实现题目要求的功能
当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^
******************************开始写代码******************************/
int maxArea(vector<int>& array){
    int res = 0, mx = 0, n = array.size();
    vector<int> dp(n, 0);
    for (int i = 0; i < n; ++i) {
        dp[i] = mx;
        mx = max(mx, array[i]);
    }
    mx = 0;
    for (int i = n - 1; i >= 0; --i) {
        dp[i] = min(dp[i], mx);
        mx = max(mx, array[i]);
        if (dp[i] > array[i]) res += dp[i] - array[i];
    }
    return res;
}

void helper(vector<int>& array,int m,int& res){
    int num = maxArea(array);
    if(num > res)
        res = num;
    if(m == 0){
        return;
    }
    for (int i = 0; i < array.size(); ++i) {
        array[i]++;
        helper(array,--m,res);
        array[i]--;
    }
}
int findMaxCapacity(vector < int > array, int m) {
    int max = INT_MIN;
    helper(array,m,max);
    return max;
}
/******************************结束写代码******************************/


int main() {
    int res;

    int _array_size = 0;
    cin >> _array_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    vector<int> _array;
    int _array_item;
    for(int _array_i=0; _array_i<_array_size; _array_i++) {
        cin >> _array_item;
        cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
        _array.push_back(_array_item);
    }


    int _m;
    cin >> _m;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');



    res = findMaxCapacity(_array, _m);
    cout << res << endl;

    return 0;

}
