//
// Created by lll on 2017/11/6.
//
//#include <stack>
//using namespace std;
//class NestedIterator {
//public:
//    NestedIterator(vector<NestedInteger> &nestedList) {
//        for (int i = 0; i <nestedList.size() ; ++i) {
//            s.push(nestedList[i]);
//        }
//    }
//
//    int next() {
//        NestedInteger t = s.top();
//        s.pop();
//        return t.getInteger();
//    }
//
//    bool hasNext() {
//        while (!s.empty()){
//            NestedInteger t = s.top();
//            if(t.isInteger())
//                return true;
//            s.pop();
//            for (int i = t.getList().size()-1; i >=0 ; --i) {
//                s.push(t.getList()[i]);
//            }
//        }
//        return false;
//    }
//
//private:
//    stack<NestedInteger> s;
//};