/* Summary: ϣ������Shell Sort��
* Author: Amusi
* Date:   2018-09-23
*
* Reference:
*   https://en.wikipedia.org/wiki/Shellsort
*   https://www.geeksforgeeks.org/shellsort/
*   ϣ������shell sort�����������Ԫ��������n��Ԫ�أ�����ȡһ������increment��С��n����Ϊ�����ȫ��Ԫ�ط�Ϊincrement�������У����о���Ϊincrement��Ԫ�ط���ͬһ���������У���ÿһ���������зֱ�ʵ��ֱ�Ӳ��롣
*
*/

#include <iostream>

// ϣ�������������ڿ��ٲ�������
namespace alg{
	template<typename T>
	static void ShellSort(T list[], int n)
	{
		// ������������n/2Ϊ��ʼgap��Ȼ���𽥼�Сgap��ÿ����СΪ�ϴ�gap��һ�룩
		for (int gap = n / 2; gap > 0; gap /= 2){
			// ������ǰ�ˣ���ÿ�������н��в�������
			for (int i = gap; i < n; i++){
				int temp = list[i];
				int j = 0;
				// ����������
				for (j = i; j >= gap && list[j - gap]>temp; j -= gap)
					list[j] = list[j - gap];

				list[j] = temp;
			}
		}
	}
}

using namespace std;
using namespace alg;


int main()
{
	int a[8] = { 5, 2, 5, 7, 1, -3, 99, 56 };
	int n = sizeof(a) / sizeof(a[0]);
	ShellSort<int>(a, n);
	for (auto e : a)
		std::cout << e << " ";

	return 0;
}