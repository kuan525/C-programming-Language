//桶排序
#include<stdio.h>
int main(void)
{
	int k = 0;
	int arr[11] = { 0 };
	for (int i = 1; i <= 10; i++)//得到一个数列
	{
		printf_s("请输入第%d个数：", i );
		scanf_s("%d", &k);
		arr[k]++;//给每个桶加数+

	}
	for (int i = 0; i < 10; i++)//打印数组值个数组序号
	{
		for (int j = 0; j < arr[i]; j++)
		{

			printf_s("%d\n", i);
		}
	} 
	return 0;
}