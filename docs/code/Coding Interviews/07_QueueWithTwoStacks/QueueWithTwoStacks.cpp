/*****************************************
Copyright: Amusi
Author:    Amusi
Date:      2018-06-17

��Ŀ����
������ջ��ʵ��һ�����У���ɶ��е�Push��Pop������ �����е�Ԫ��Ϊint���͡�


*****************************************/

class Solution
{
/* ����˼·
<����>����������ջ��ʵ�����ν�ջ��ջ��ʵ��һ�����С�
��1,2,3,4,5������Aջ����ʱtopΪ5������ջ����BջΪ��5��4��3��2��1����ʱtopΪ1������ʱ��Bջ���൱��һ�����С�
��ӣ���Ԫ�ؽ�ջA
���ӣ��ж�ջB�Ƿ�Ϊ�գ����Ϊ�գ���ջA������Ԫ��pop����push��ջB��ջB��ջ��
 �����Ϊ�գ�ջBֱ�ӳ�ջ
*/
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        if(stack2.empty()){
            // ��stack1�е�����Ԫ��pop����push��stack2��
            while(!stack1.empty()){
                temp = stack1.top();
                stack2.push(temp);
                stack1.pop();
            }
        }
        // ȡջ2�Ķ�ͷԪ��
        temp = stack2.top();
        stack2.pop();
        return temp;;
    }

private:
    // ʹ��C++ STL: stack
    int temp;
    stack<int> stack1;    // ����Ԫ��
    stack<int> stack2;    // 
};