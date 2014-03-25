/*************************************************************************
	> File Name: reListNode_iter.cpp
	> Author: Pansj
	> Mail: perry2008084@gmail.com 
	> Created Time: Tue 25 Mar 2014 09:16:19 PM CST
 ************************************************************************/

#include<iostream>
#include<stack>
#include<cstdio>

using namespace std;

struct ListNode {
	int m_nKey;
	ListNode* m_pNext;
};

void PrintListReversingly_Iteratively(ListNode* pHead)
{
	std::stack<ListNode*> nodes;

	ListNode* pNode = pHead;
	while(pNode != NULL) {
		nodes.push(pNode);
		pNode = pNode->m_pNext;
	}

	while (!nodes.empty()) {
		pNode = nodes.top();
		printf("%d\t", pNode->m_nKey);
		nodes.pop();
	}
}

int main()
{
	ListNode *pNode_1 = new ListNode;
	ListNode *pNode_2 = new ListNode;
	ListNode *pNode_3 = new ListNode;

	pNode_3->m_nKey = 3;
	pNode_3->m_pNext = NULL;

	pNode_2->m_nKey = 2;
	pNode_2->m_pNext = pNode_3;

	pNode_1->m_nKey = 1;
	pNode_1->m_pNext = pNode_2;

	PrintListReversingly_Iteratively(pNode_1);

	delete pNode_1;
	delete pNode_2;

	return 0;
}
