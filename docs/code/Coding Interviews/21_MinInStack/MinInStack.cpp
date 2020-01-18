/*****************************************
Copyright: Amusi
Author:    Amusi
Date:      2018-07-11


��Ŀ����
����ջ�����ݽṹ�����ڸ�������ʵ��һ���ܹ��õ�ջ��������СԪ�ص�min�������ڸ�ջ�У�����min��push��pop��ʱ�临�Ӷȶ���O(1)��

*****************************************/

// ����1������ջ�͸���ջ��ͬ����
class Solution {
public:
    // ��Ŀ����: ����min������ջ
    // ����:
    // �Զ�������ջ
    stack<int> dataStack;    // ����ջ
    stack<int> helpStack;    // ����ջ
    
    // ѹ��Ԫ�� O(1)
    void push(int value) {
        dataStack.push(value);
        if (helpStack.empty()){
            helpStack.push(value);
        }else{
            if(value < helpStack.top()){
                helpStack.push(value);
            }else{
                helpStack.push(helpStack.top());
            }
        }
    }
    
    // ����Ԫ�� O(1)
    void pop() {
        if(dataStack.empty() ||  helpStack.empty())
            return;
        dataStack.pop();
        helpStack.pop();
    }
    // ����ջ��Ԫ�� O(1)
    int top() {
        return dataStack.top();
    }
    
    // ����ջ����СԪ�� O(1)
    int min() {
        return helpStack.top();
    }
     
};


// ����2 ����ջ�������ڸ���ջ����
class Solution {
public:
     
    stack<int> stack1,stack2;
     
    void push(int value) {
        stack1.push(value);
        if(stack2.empty())
            stack2.push(value);
        else if(value<=stack2.top())
        {
            stack2.push(value);
        }
    }
     
    void pop() {
      	// �ж�����ջ��Ԫ���Ƿ����
        if(stack1.top()==stack2.top())
            stack2.pop();
        stack1.pop();
         
    }
     
    int top() {
        return stack1.top();       
    }
     
    int min() {
        return stack2.top();
    }
     
};