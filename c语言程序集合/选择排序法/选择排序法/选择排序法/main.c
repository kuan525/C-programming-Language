//ѡ������
#include<stdio.h>
int main(void)
{
	int a, b, c[80], temp, n, Index;
	printf_s("��������ٸ����֣�");
	scanf_s("%d", &n);
	printf_s("���������飺");
	for (a = 0; a < n; a++)
	{
		scanf_s("%d", &c[a]);
	}
	for (a = 0; a < n; a++)
	{
		Index = a;
		for (b = a; b < n; b++)
		{
			if (c[Index] > c[b])
			{
				Index = b;
			}
		}
		temp = c[a];
		c[a] = c[Index];
		c[Index] = temp;
	}
	printf_s("��С�������У�\n");
	for (a = 0; a < n; a++)
	{
		printf_s("%d", c[a]);
	}
	return 0;
}