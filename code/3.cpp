//
// Created by lh on 2017/8/25.
//
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//----1----
//class Solution {
//public:
//	int lengthOfLongestSubstring(string s) {
//		vector<char> res;
//		vector<char> tmp;
//		for (int i = 0; i < s.length(); i++)
//		{
//			if (!isinvector(tmp, s[i])){
//				tmp.push_back(s[i]);
//			}
//			else{
//				if (tmp.size() > res.size()){
//					res.clear();
//					res.insert(res.begin(), tmp.begin(), tmp.end());
//				}
//				deletev(tmp, s[i]);
//				tmp.push_back(s[i]);
//			}
//			if (tmp.size() > res.size()){
//				res.clear();
//				res.insert(res.begin(), tmp.begin(), tmp.end());
//			}
//		}
//		return res.size();
//	}
//	void deletev(vector<char>& vc, char a){
//		vector<char>::iterator op;
//		for (op = vc.begin(); op != vc.end();){
//			if (*op == a){
//				op = vc.erase(op);
//				break;
//			}
//			op = vc.erase(op);
//		}
//	}
//	bool isinvector(vector<char> vc, char a){
//		vector<char>::iterator result =find(vc.begin(), vc.end(), a);
//		if (result != vc.end()){
//			return true;
//		}
//		else{
//			return false;
//		}
//	}
//};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> dict(256, -1);
        int maxlength = 0, start = -1;

        for (int i = 0; i < s.length(); i++)
        {
            if (dict[s[i]] > start){
                start = dict[s[i]];
            }
            dict[s[i]] = i;
            maxlength = max(maxlength, i - start);
        }
        return maxlength;
    }
};