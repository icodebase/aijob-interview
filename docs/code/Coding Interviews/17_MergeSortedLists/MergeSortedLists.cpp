/*****************************************
Copyright: Amusi
Author:    Amusi
Date:      2018-06-26

��Ŀ����
����һ��������ת��������������ı�ͷ��

*****************************************/

/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    // ˼·: ���б���з�ת
    ListNode* ReverseList(ListNode* pHead) {
        if(pHead==NULL || pHead->next==NULL)
            return pHead;
        
        ListNode* cur = pHead;
        ListNode* pre = NULL;    // ListNode* pre = NULL;
        ListNode* post = NULL;    // ListNode* post = pHead->next;
        while (cur!=NULL){
            post = cur->next;
            cur->next = pre;
            pre = cur;
            cur = post;
        }
        pHead = pre;
        return pHead;
    }
};