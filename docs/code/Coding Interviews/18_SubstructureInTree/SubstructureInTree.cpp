/*****************************************
Copyright: Amusi
Author:    Amusi
Date:      2018-07-01

��Ŀ����
�������ö�����A��B���ж�B�ǲ���A���ӽṹ����ps������Լ��������������һ�������ӽṹ��

*****************************************/

/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    // �ж�pRoot2�ǲ���pRoot1���ӽṹ
    // �ݹ鷨: ����pRoot1���ҵ���pRoot2�������ֵ��ͬ�Ľ�㣬Ȼ���жϸý�����µĽṹ��pRoot2�Ƿ�һ��
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        bool result = false;
        if(pRoot1!=NULL && pRoot2!=NULL){
            // ��pRoot1�в�����pRoot2�������ͬ��ֵ
            if(pRoot1->val == pRoot2->val){
                result = DoesTree1HaveTree2(pRoot1, pRoot2);    // �ҵ���
                // ��������ʼ��
                if(!result)
                    result = HasSubtree(pRoot1->left, pRoot2);
                // ��������ʼ��
                if(!result)
                    result = HasSubtree(pRoot1->right, pRoot2);
            }
        }
        return result;
    }
    // �ж�pRoot2�ǲ���pRoot1������
    bool DoesTree1HaveTree2(TreeNode* pRoot1, TreeNode* pRoot2){
        if(pRoot2==NULL)
            return true;     // ������pRoot2�����н��
        if(pRoot1==NULL)
            return false;
        if(pRoot1->val != pRoot2->val)
            return false;
        
        return DoesTree1HaveTree2(pRoot1->left, pRoot2->left) && DoesTree1HaveTree2(pRoot1->right, pRoot2->right);
    }
};