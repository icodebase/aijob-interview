/* Summary: ��������Quick Sort��
* Author: Amusi
* Date:   2018-07-28
*
* Reference: 
*   https://en.wikipedia.org/wiki/Quicksort
*	
* ��������quick sort����ͨ��һ�����򽫴����б�ָ��ɶ����������֣�����һ���ֵ�����Ԫ�ؾ�����һ���ֵ�����Ԫ��С����ɷֱ���������ּ����ظ����д˲������Դﵽ�����������򡣣�������̣����ǿ���ʹ�õݹ����ʵ�֣�
*
*/

#include <iostream>

// �������������ݹ鷨��
namespace alg{
	template<typename T>
	static void QuickSort(T list[], int start, int end)
	{
		int i = start;
		int j = end;
		// ������������������ֵ���棬����ȣ�����������>��������
		if (i >= j)
			return;
		// �����׸���ֵ�����׸���ֵ��Ϊ��׼��
		// ���λ�ú���Ҫ��һ��Ҫ��if i >= j�ж����֮�󣬷�������������
		T pivot = list[i];

		// һ������i��j��ֵ���ϵĿ�£��Ȼ������ֹͣ������һ������
		while (i < j){
			// һ��ѭ��ʵ�ִ��������ڻ�׼��ֵ�滻��׼��λ�ã��ұ���С�ڻ�׼��ֵλ���滻��������ڻ�׼ֵ������
			//���������󣩺����ұߵıȽϣ���� >= pivot, ������Ҫ�󣬲���Ҫ������Ȼ��j - 1���������ƣ����û�׼ֵ��ǰһ��ֵ�Ƚ�; ���ֵ<pivot����ô�ͽ���λ��
			while (i < j && pivot <= list[j])
				--j;
			list[i] = list[j];
			// ����λ�ú󣬣��������ң�Ȼ���ں�����ߵ�ֵ��ʼ�Ƚϣ���� <= pivot, Ȼ��i + 1�������ĺͺ�һ��ֵ�Ƚ�; ���ֵ>pivot����ô�ͽ���λ��
			while (i < j && pivot >= list[i])
				++i;
			list[j] = list[i];
		}
		// �б�������i��λ��Ϊ��׼ֵ��i������ж���С�ڻ�׼ֵ�ģ�i�ұ����ж��Ǵ��ڻ�׼ֵ�ģ���ǰ��׼ֵ������Ϊi��֮�󲻱�
		list[i] = pivot;
		// �������
		QuickSort(list, start, i-1);
		// �ұ�����
		QuickSort(list, i+1, end);
	}
}

using namespace std;
using namespace alg;


int main()
{
	int a[8] = { 5, 2, 5, 7, 1, -3, 99, 56 };
	QuickSort<int>(a, 0, sizeof(a)/sizeof(a[0]) - 1);
	for (auto e : a)
		std::cout << e << " ";

	return 0;
}