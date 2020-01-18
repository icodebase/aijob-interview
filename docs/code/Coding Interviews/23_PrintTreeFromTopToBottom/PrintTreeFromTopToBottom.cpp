/*****************************************
Copyright: Amusi
Author:    Amusi
Date:      2018-07-30


��Ŀ����
�������´�ӡ����������ÿ���ڵ㣬ͬ��ڵ�������Ҵ�ӡ��

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
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        /* ����1������ָ���ǲ��ǿյĶ�����ӣ����ӵ�ʱ�����ж�
        std::queue<TreeNode*> q;    // ���类ѹ����е�Ԫ��
        q.push(root);
        vector<int> resultTree;
        // �ж϶����Ƿ�Ϊ��
        while(q.size()){         // while(!q.empty())
            root = q.front();    // ���类ѹ������е�Ԫ��
            q.pop();             // �������еĵ�һ��Ԫ��
            // ����ָ���ǲ��ǿյĶ�����ӣ����ӵ�ʱ�����ж�
            if(!root)
                continue;
            // ����ǰ�����еĵ�һ��Ԫ�ش洢����
            resultTree.push_back(root->val);
            q.push(root->left);    // ����
            q.push(root->right);   // ����
        }
        return resultTree;
        */
        
        // ����2�����ж�ָ���Ƿ�Ϊ��
        vector<int> resultTree;
        if(root == NULL)
            return resultTree;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()){
            resultTree.push_back(q.front()->val);
            if(q.front()->left!=NULL)
                q.push(q.front()->left);
            if(q.front()->right!=NULL)
                q.push(q.front()->right);
            q.pop();
        }
        return resultTree;
    }
};