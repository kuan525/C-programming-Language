//����n���������������У�������x���Ҳ���x
#include<stdio.h>
int main(void)
{
	int a,b,c [80],n,flag=0;
		printf_s("�����ٸ�����");
		scanf_s("%d",&n);
		printf_s("������%d�����֣�\n",n);
	for (a = 0; a < n; a++)
	{
		scanf_s("%d",&c [a]);
	}
	printf_s("��Ҫ����ʲô���֣�");
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