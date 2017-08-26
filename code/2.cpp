//
// Created by lh on 2017/8/25.
//

//struct ListNode{
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL){}
//};
//----1---- %30.73
//class Solution {
//public:
//	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//		int flag = 0;
//
//		ListNode *res = new ListNode(0);
//		ListNode *head = new ListNode(0);
//		int ans = 0;
//		vector<int> add1;
//		vector<int> add2;
//		while (true){
//			add1.push_back(l1->val);
//			l1 = l1->next;
//			if (l1 == NULL){
//				break;
//			}
//		}
//		while (true){
//			add2.push_back(l2->val);
//			l2 = l2->next;
//			if (l2 == NULL){
//				break;
//			}
//		}
//		if (add1.size() == add2.size()){
//			for (int i = 0; i < add1.size(); i++){
//				ans = add1[i] + add2[i] + flag;
//				flag = 0;
//				if (ans >= 10){
//					flag = 1;
//					ans -= 10;
//				}
//				res->next = new ListNode(ans);
//				if (i == 0){
//					head->next = res->next;
//				}
//				res = res->next;
//			}
//		}
//		else{
//			int len = add1.size() < add2.size() ? add1.size() : add2.size();
//			for (int i = 0; i < len; i++){
//				ans = add1[i] + add2[i] + flag;
//				flag = 0;
//				if (ans >= 10){
//					flag = 1;
//					ans -= 10;
//				}
//				res->next = new ListNode(ans);
//				if (i == 0){
//					head->next = res->next;
//				}
//				res = res->next;
//			}
//			if (add1.size() > len){
//				for (int i = len; i < add1.size(); i++){
//					ans = add1[i] + flag;
//					flag = 0;
//					if (ans >= 10){
//						flag = 1;
//						ans -= 10;
//					}
//					res->next = new ListNode(ans);
//					res = res->next;
//				}
//			}
//			else{
//				for (int i = len; i < add2.size(); i++){
//					ans = add2[i] + flag;
//					flag = 0;
//					if (ans >= 10){
//						flag = 1;
//						ans -= 10;
//					}
//					res->next = new ListNode(ans);
//					res = res->next;
//				}
//			}
//		}
//		if (flag != 0){
//			res->next = new ListNode(flag);
//			res = res->next;
//		}
//		//head = head->next;
//		//while (true){
//		//	cout << head->val << " ";
//		//	head = head->next;
//		//	if (head == NULL){
//		//		break;
//		//	}
//		//}
//
//		//for (int i = 0; i < add1.size(); i++){
//		//	cout << add1[i] << "  ";
//		//}
//		//cout << endl;
//		//for (int i = 0; i < add2.size(); i++){
//		//	cout << add2[i] << "  ";
//		//}
//		//cout << endl;
//		return head = head->next;
//	}
//};




//----2---- %64.23
//class Solution {
//public:
//	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//		int flag = 0;
//		ListNode res(0);
//		ListNode *head = &res;
//		int ans = 0;
//		vector<int> add1;
//		vector<int> add2;
//		while (true){
//			add1.push_back(l1->val);
//			l1 = l1->next;
//			if (l1 == NULL){
//				break;
//			}
//		}
//		while (true){
//			add2.push_back(l2->val);
//			l2 = l2->next;
//			if (l2 == NULL){
//				break;
//			}
//		}
//		if (add1.size() == add2.size()){
//			for (int i = 0; i < add1.size(); i++){
//				ans = add1[i] + add2[i] + flag;
//				flag = 0;
//				flag = ans / 10;
//				ans %= 10;
//				head->next = new ListNode(ans);
//				head = head->next;
//			}
//		}
//		else{
//			int len = add1.size() < add2.size() ? add1.size() : add2.size();
//			for (int i = 0; i < len; i++){
//				ans = add1[i] + add2[i] + flag;
//				flag = 0;
//				flag = ans / 10;
//				ans %= 10;
//				head->next = new ListNode(ans);
//				head = head->next;
//			}
//			if (add1.size() > len){
//				for (int i = len; i < add1.size(); i++){
//					ans = add1[i] + flag;
//					flag = 0;
//					flag = ans / 10;
//					ans %= 10;
//					head->next = new ListNode(ans);
//					head = head->next;
//				}
//			}
//			else{
//				for (int i = len; i < add2.size(); i++){
//					ans = add2[i] + flag;
//					flag = 0;
//					flag = ans / 10;
//					ans %= 10;
//					head->next = new ListNode(ans);
//					head = head->next;
//				}
//			}
//		}
//		if (flag != 0){
//			head->next = new ListNode(flag);
//			head = head->next;
//		}
//		return res.next;
//	}
//};

//class Solution {
//	public:
//		ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//			int flag = 0;
//			ListNode head(0);
//			ListNode *res = &head;
//
//			while (l1 || l2 || flag){
//				int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + flag;
//				flag = sum / 10;
//				res->next = new ListNode(sum % 10);
//				res = res->next;
//				l1 = l1 ? l1->next : l1;
//				l2 = l2 ? l2->next : l2;
//			}
//			return head.next;
//		}
//	};