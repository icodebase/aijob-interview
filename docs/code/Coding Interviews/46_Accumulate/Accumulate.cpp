/*****************************************
Copyright: Amusi
Author:    Amusi
Date:      2018-09-06


��Ŀ����
��1+2+3+...+n��Ҫ����ʹ�ó˳�����for��while��if��else��switch��case�ȹؼ��ּ������ж���䣨A?B:C����

*****************************************/

class Temp{
public:
    Temp(){++N; Sum+=N;}
    static void Reset() {N=0;Sum=0;}
    static int GetSum() {return Sum;}
private:
    static int N;
    static int Sum;
    
};

// �����ʼ��Temp���е�˽�б���
int Temp::N = 0;
int Temp::Sum = 0;

class Solution {
public:
    
    int Sum_Solution(int n) {
        // way1: ���ö�ά����ʵ�ֳ˷�
        //bool a[n][n+1];
        //return sizeof(a)>>1;
        
        // way2: ���캯����ⷨ
        Temp::Reset();
        Temp *a = new Temp[n];    // ѭ�����ù��캯��n�Σ�ʵ��1+2+...+n
        delete []a;
        a = NULL;
        return Temp::GetSum();
    }
};