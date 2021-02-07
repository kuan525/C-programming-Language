//输入n个数，存入数组中，再输入x并且查找x
#include<stdio.h>
int main(void)
{
	int a,b,c [80],n,flag=0;
		printf_s("共多少个数：");
		scanf_s("%d",&n);
		printf_s("请输入%d个数字：\n",n);
	for (a = 0; a < n; a++)
	{
		scanf_s("%d",&c [a]);
	}
	printf_s("需要查找什么数字：");
	scanf_s("%d",&b);
	for (a = 0; a < n; a++)
	{
		if (b == c[a])
		{
			printf_s("Index is %d\n", a);
			flag = -1;
			break;
		} 
	}
	if (flag == 0)
	{
		printf_s("NOT Found\n");
	}
	return 0;
}