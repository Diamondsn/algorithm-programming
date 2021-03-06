﻿#include<string>
#include<vector>
#include<iostream>
#include<algorithm>
#include"math.h"
#include<queue>
#include<map>
#include<set>
using namespace std;

//给定一个链表，判断链表中是否有环。
//
//进阶：
//你能否不使用额外空间解决此题？

//Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

//使用快慢指针法(即快指针每次走两步，满指针每次走一步，最终相遇即有环)，
bool hasCycle(ListNode *head) {
	ListNode* kuai = head, *man = head;
	while (kuai && kuai->next){
		kuai = kuai->next->next;
		man = man->next;
		if (kuai == man)return true;
	}
	return false;
}

void LianBiaoBianli(ListNode* head){
	while (head){
		cout << head->val << "->";
		head = head->next;
	}
}

int main() {
	//test1
	ListNode* l1 = new ListNode(1);
	ListNode* l2 = new ListNode(2);
	ListNode* l3 = new ListNode(3);
	ListNode* l4 = new ListNode(4);
	ListNode* l5 = new ListNode(5);
	l1->next = l2;
	l2->next = l3;
	l3->next = l4;
	l4->next = l5;
	l5->next = l5;
	bool a=hasCycle(NULL);
	cout << a << endl;
	//test end

	system("pause");
	return 0;
}