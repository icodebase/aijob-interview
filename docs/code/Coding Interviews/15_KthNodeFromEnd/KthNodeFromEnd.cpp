/*****************************************
Copyright: Amusi
Author:    Amusi
Date:      2018-06-22

��Ŀ����
����һ����������������е�����k����㡣

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
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        /*����2������˫ָ��˼�룺����ָ�룩*/
        // ˼·: ���ߣ�bigpo
        // ���ӣ�https://www.nowcoder.com/questionTerminal/529d3ae5a407492994ad2a246518148a
        // | k-1?-------->|?nodePre?����?nodeLast?k-1?������
????????// |--------->?k-1?|?��nodePre�ȵ����յ�ʱ��nodeLast���þ��յ���k-1���ڵ�,���������ڵ�����k���ڵ㴦
        
        // �����ж�
        if(pListHead==NULL || k==0)
            return NULL;
        
        ListNode *pTail = pListHead, *pHead = pListHead;
        // pHead���� k-1�� 
        for(int i=1;i<k;++i){
            if(pHead->next!=NULL)
                pHead = pHead->next;
            else
                return NULL;
        }
        // pHead��pTailͬʱ�ߣ����pTail����k-1�������ߵ���󣬼�pTail��ǰ�ǵ�����k����㡣
        while(pHead->next!=NULL){
            pHead = pHead->next;
            pTail = pTail->next;
        }
        return pTail;
        
        /* ����1�������������ټ��㣩
        // ȱ�㣺��������������α�����������
        if(pListHead==NULL || k==0)
            return NULL;
        unsigned int length = 0;
        ListNode *ln = pListHead;
        // ����������
        while(ln!=NULL){
            ++length;
            ln = ln->next;
        }
        if(length<k){
            return NULL;
        }
        ListNode *ln2 = pListHead;
        for(unsigned int i=0;i<length-k;++i){
            ln2 = ln2->next;
        }
        return ln2;*/
           
    }
};