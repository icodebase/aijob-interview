/*****************************************
Copyright: Amusi
Author:    Amusi
Date:      2018-06-20

��Ŀ����
����һ��������������������Ʊ�ʾ��1�ĸ��������и����ò����ʾ


*****************************************/

class Solution {
public:
     int  NumberOf1(int n) {
         int count = 0;
         while(n!= 0){
             ++count;
             n = n & (n - 1);
         }
         return count;
         
     }
};