#include<stdio.h>
int main(void)
{
	int i,p=0,n;
	double sum=0,aver;
	int a[80];
	printf_s("总共多少个数字(小于80)：");
	scanf_s("%d",&n );
	//导入数组
	printf_s("请输入%d个数：\n", n);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d ", &a[i]);
		sum = sum + a[i];
	}
	aver = sum / n;
	//输出大于平均值的数
	printf_s("平均数等于：%.2f\n",aver);
	printf_s("大于平均数的数有：");
		for (i = 0; i <n; i++)
		{
			if (aver < a[i])
			{
				printf_s("%d ", a[i]);
				p++;
			}
		}
		printf_s("\n");
	printf_s("大于平均数的值有多少个：%d",p);
	printf_s("\n");
	return 0;
}