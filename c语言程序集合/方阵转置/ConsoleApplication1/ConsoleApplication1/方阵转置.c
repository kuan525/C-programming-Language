#include<stdio.h>
int main(void)
{
	int i, j, c[3][3], temp;
//给出矩阵方阵
	printf_s("请输入矩阵方阵：\n");
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				scanf_s("%d",&c[i][j]);
			}
			printf_s("\n");
		}
//行列互换
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i > j)
			{
				temp = c[i][j];
				c[i][j] = c[j][i];
				c[j][i] = temp;
			}
		}
	}
//输出数组
	printf_s("输出数组：\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf_s("%d",c[i][j]);
		}
		printf_s("\n");
	}
	return 0;
}