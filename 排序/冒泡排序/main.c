//冒泡排序
#include<stdio.h>
int main(void)
{
	int arr[11],temp;
	for (int i = 1; i <= 10; i++)//得到一组数据，暂定十个数
	{
		printf_s("请输入第%d个数:",i); 
		scanf_s("%d",&arr[i]);
	}
	for (int j = 1; j < 10; j++)
	{
		for (int m = 1; m < 10-j+1; m++)
		{
			if (arr[m]>arr[m+1])
			{
				temp = arr[m + 1];
				arr[m + 1] = arr[m];
				arr[m] = temp;
			}
		}
	}
	printf_s("排序之后的结果：\n");
	for (int i = 1; i <=10 ; i++)//输出排序之后的序列
	{
		printf_s("%d\n",arr[i]);
	}
	return 0;
}