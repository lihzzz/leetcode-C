//
// Created by lh on 2017/8/25.
//
// ----1---- %1.39
//class Solution {
//public:
//	vector<int> twoSum(vector<int>& nums, int target) {
//		int flag = 0;
//		vector<int> res;
//		for (int i = 0; i < nums.size()-1; i++)
//		{
//			for (int j = 0; j < nums.size(); j++){
//				if (i == j){
//					continue;
//				}
//				if (nums[i] + nums[j] == target){
//					flag = 1;
//					res.push_back(i);
//					res.push_back(j);
//					break;
//				}
//			}
//			if (flag == 1){
//				break;
//			}
//		}
//		return res;
//	}
//};

//----2---- %9.39
//class Solution {
//public:
//	vector<int> twoSum(vector<int>& nums, int target) {
//		int flag = 0;
//		vector<int> res;
//		cout << nums.size() << endl;
//		for (int i = 0; i < nums.size()-1 ; i++)
//		{
//			for (int j = i+1; j < nums.size(); j++){
//				if (i == j){
//					continue;
//				}
//				if (nums[i] + nums[j] == target){
//					flag = 1;
//					res.push_back(i);
//					res.push_back(j);
//					break;
//				}
//			}
//			if (flag == 1){
//				break;
//			}
//		}
//		return res;
//	}
//};

//----3----%83.27
//class Solution {
//public:
//	vector<int> twoSum(vector<int>& nums, int target) {
//		unordered_map<int, int> hash;
//		vector<int> res;
//		cout << nums.size() << endl;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			int tar = target - nums[i];
//			if (hash.find(tar) != hash.end()) {
//				res.push_back(hash[tar] );
//				res.push_back(i);
//				break;
//			}
//			hash[nums[i]] = i;
//		}
//		return res;
//	}
//}
