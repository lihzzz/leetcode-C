//
// Created by lihzz on 2018/7/19.
//
#include <queue>
#include <vector>

using namespace std;
class Solution
{
public:
    Solution(){
        memset(cnt,0, sizeof(cnt));
    }
    //Insert one char from stringstream
    void Insert(char ch)
    {
        ++cnt[ch - '0'];
        if(cnt[ch -'0'] == 1){
            q.push(ch);
        }
    }
    //return the first appearence once char in current stringstream
    char FirstAppearingOnce()
    {
        while(!q.empty() && cnt[q.front()] >= 2)
            q.pop();
        if(q.empty())
            return '#';
        return q.front();
    }


private:
    int cnt[128];
    queue<char> q;
};