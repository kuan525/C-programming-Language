//找出矩阵里面最大的值，用到了二位数组。
#include<stdio.h>
int main(void)
{
	int i,j, c[3][2],max;
	printf_s("请输入二维数组：\n");
	for (i  = 0; i < 3; i++)
	{
		for (j  = 0; j< 2; j ++)
		{
			scanf_s("%d",&c [i][j]);
		}
	}
	max = c[0][0];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			if (c[i][j] >= max)
				max = c[i][j];
		}
	}
	printf_s("矩阵中最大的数是：%d\n",max);
	printf_s("该数的下标为%d，%d\n",i,j);
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf_s("%d", c[i][j]);
		}
		printf_s("\n");
	}
	return 0;
}