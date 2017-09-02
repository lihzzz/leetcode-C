#include <iostream>
#include <vector>
#include <string>
#include "code/139.cpp"
using namespace std;
int main() {
    Solution sl;
    vector<string> wordDict;
    wordDict.push_back("leet");
    wordDict.push_back("aa");
    wordDict.push_back("code");
    cout<<sl.wordBreak("leetaacode",wordDict);
    return 0;
}