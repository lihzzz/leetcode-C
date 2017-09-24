//
// Created by lh on 2017/9/24.
//

#include <vector>
#include <set>
using std::set;
using std::vector;

class Solution {
public:
    int kEmptySlots(vector<int>& flowers, int k) {
        set<int> m;
        for (int i = 0; i <flowers.size() ; ++i) {
            int cur = flowers[i];
            m.insert(cur);
            auto it = m.find(cur);
            if(it != m.begin() ){
                if(cur - *(--it) == k+1)
                    return i+1;
                it ++;
            }

            if(it!= m.end() && *(++it) - cur == k+1)
                return i+1;
        }
        return -1;
    }
};