#include<stdio.h>
int main(void)
{
	int i, j, c[3][3], temp;
//����������
	printf_s("�����������\n");
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				scanf_s("%d",&c[i][j]);
			}
			printf_s("\n");
		}
//���л���
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
//�������
	printf_s("������飺\n");
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