#include<stdio.h>
int main(void)
{
	int a, b, c[9] = {0}, d[80], n, response;
	printf_s("������Ʊ����");
	scanf_s("%d", &n);
	printf_s("�ܹ�%dƱ:\n", n);
	printf_s("��������Ͷ��Ʊ(1��8)��");
	for(a=1;a<=n;a++)
	scanf_s("%d",&d [a]);
	for (a = 1; a <= n; a++)
	{
		response = d[a];
		c[response]++;
	}
	for (a = 1; a <= 8; a++)
	{
		printf_s("%d\n",c [a]);
	}
	return 0;
}