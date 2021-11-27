#include<stack>

struct ListNode {
	int m_nKey;
	ListNode* m_pNext;
};

void PrintListReversingly_Iteratively(ListNode* pHead) {
	std::stack<ListNode*> nodes;

	ListNode* pNode = pHead;
	while (pNode != nullptr) {
		nodes.push(pNode);
		pNode = pNode->m_pNext;
	}

	while (!nodes.empty()) {
		pNode = nodes.top();
		printf("%d\t", pNode->m_nKey);
		nodes.pop();
	}
}

void PrintListReversingly_Recursively(ListNode* pHead) {
	if (pHead != nullptr) {
		if (pHead->m_pNext != nullptr) {
			PrintListReversingly_Recursively(pHead->m_pNext);
		}

		printf("%d\t", pHead->m_nKey);
	}
}