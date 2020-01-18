/* Summary: ѡ������
* Author: Amusi
* Date:   208-06-22
*
* Reference: 
*   https://en.wikipedia.org/wiki/Selection_sort
*   https://github.com/xtaci/algorithms/blob/master/include/selection_sort.h
* ѡ������˵����������δ�����������ҵ���С����Ԫ�أ���ŵ��������е���ʼλ�ã�Ȼ���ٴ�ʣ��δ����Ԫ���м���Ѱ����С����Ԫ�أ�Ȼ��ŵ����������е�ĩβ���Դ����ƣ�ֱ������Ԫ�ؾ�������ϡ� 
*
*/

#include <iostream>

// ѡ��������
namespace alg{
	template<typename T>
	static void SelectionSort(T list[], int length)
	{
		// ��ѭ��: length-1�Σ���Ϊ��length-1��Ԫ������ú󣬵�length��Ԫ��λ�ò��ٱ仯
		for (int i = 0; i < length-1; ++i)
		{ 
			int minIndex = i;
			// ��i��λ�ã����б�������Ϊǰi-1��Ԫ���Ѿ������
			for (int j = i; j < length; ++j)
			{
				// ÿ�δ�δ�����������ѡ����С��ֵ����������������У�����С��������
				if (list[j] < list[minIndex])
				{
					minIndex = j;
				}
			}
			int temp = list[minIndex];
			list[minIndex] = list[i];
			list[i] = temp;
		}

	}
}

using namespace std;
using namespace alg;


int main()
{
	int a[8] = { 5, 2, 5, 7, 1, -3, 99, 56 };
	SelectionSort<int>(a, 8);
	for (auto e : a)
		std::cout << e << " ";

	return 0;
}