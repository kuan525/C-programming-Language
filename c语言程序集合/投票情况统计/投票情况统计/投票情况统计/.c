#include<stdio.h>
int main(void)
{
	int a, b, c[9] = {0}, d[80], n, response;
	printf_s("请输入票数：");
	scanf_s("%d", &n);
	printf_s("总共%d票:\n", n);
	printf_s("请输入所投的票(1至8)：");
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