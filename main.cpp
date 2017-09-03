#include <iostream>
#include <vector>
#include <string>
#include "code/140.cpp"
using namespace std;
int main() {
    Solution sl;
    vector<string> wordDict;
    wordDict.push_back("cat");
    wordDict.push_back("cats");
    wordDict.push_back("and");
    wordDict.push_back("sand");
    wordDict.push_back("dog");
    vector<string> res = sl.wordBreak("catsanddog",wordDict);

    for (int i = 0; i <res.size() ; ++i) {
        cout << res[i]<<endl;
    }
    return 0;
}