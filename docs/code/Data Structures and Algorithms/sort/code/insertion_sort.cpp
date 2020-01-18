/* Summary: ��������Insertion Sort��
* Author: Amusi
* Date:   2018-07-16
*
* Reference: 
*   https://en.wikipedia.org/wiki/Insertion_sort
*	
* ��������insertion sort���ֳ�ֱ�Ӳ�������staright insertion sort�������ǽ�δ����Ԫ��һ�������뵽�������б��С�����δ����Ԫ�أ��������������дӺ���ǰɨ�裬�ҵ���Ӧλ�ð������ȥ���ڴӺ���ǰɨ������У���Ҫ������������Ԫ�������Ų��Ϊ��Ԫ���ṩ����ռ䡣
*
*/

#include <iostream>

// ����������
namespace alg{
	template<typename T>
	static void InsertionSort(T list[], int length)
	{
		// ������Ϊ1��λ�ÿ�ʼ����
		for (int i = 1; i < length; ++i)
		{
			T currentValue = list[i];	// ���浱ǰֵ
			int preIndex = i - 1;	// ǰһ������ֵ
			// ѭ������: ǰһ������ֵ��ӦԪ��ֵ���ڵ�ǰֵ && ǰһ������ֵ���ڵ���0
			while (list[preIndex] > currentValue && preIndex >= 0){
				list[preIndex + 1] = list[preIndex];
				preIndex--;
			}
			list[preIndex + 1] = currentValue;
		}
	}
}

using namespace std;
using namespace alg;


int main()
{
	int a[8] = { 5, 2, 5, 7, 1, -3, 99, 56 };
	InsertionSort<int>(a, 8);
	for (auto e : a)
		std::cout << e << " ";

	return 0;
}