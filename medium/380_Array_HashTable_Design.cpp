//
// Created by lh on 2017/12/19.
//
#include <unordered_map>
#include <vector>
using namespace std;
class RandomizedSet {
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
    }

    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(m.count(val)) return false;
        nums.push_back(val);
        m[val] = nums.size()-1;
        return true;
    }

    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(!m.count(val)) return false;
        int last = nums.back();
        m[last] = m[val];
        nums[m[last]] = last;
        m.erase(val);
        nums.pop_back();
        return true;
    }

    /** Get a random element from the set. */
    int getRandom() {
        return nums[rand()%nums.size()];
    }

private:
    unordered_map<int,int> m;
    vector<int> nums;
};