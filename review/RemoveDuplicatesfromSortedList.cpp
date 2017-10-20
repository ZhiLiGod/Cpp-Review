#include<iostream>
#include<string>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* deleteDuplicates(ListNode* head) {
	if (head == NULL) return NULL;
	ListNode* dummy = new ListNode(-1);
	dummy->next = head;
	ListNode* cur = head;
	while (cur->next != NULL) {
		if (cur->val == cur->next->val && cur->next->next != NULL) cur->next = cur->next->next;
		else if (cur->val == cur->next->val && cur->next->next == NULL) {
			cur->next = NULL;
			break;
		}
		if(cur->val != cur->next->val) cur = cur->next;	
	}
	return dummy->next;
}

int mainss() {
	ListNode* node = new ListNode(101);
	node->next = new ListNode(101);
	node->next->next = new ListNode(10);
	ListNode* result = deleteDuplicates(node);
	while (result!=NULL) {
		cout << result->val << endl;
		result = result->next;
	}
	system("PAUSE");
	return 0;
}