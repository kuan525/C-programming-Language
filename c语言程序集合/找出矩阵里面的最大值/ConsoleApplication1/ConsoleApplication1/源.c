//�ҳ�������������ֵ���õ��˶�λ���顣
#include<stdio.h>
int main(void)
{
	int i,j, c[3][2],max;
	printf_s("�������ά���飺\n");
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
	printf_s("�������������ǣ�%d\n",max);
	printf_s("�������±�Ϊ%d��%d\n",i,j);
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