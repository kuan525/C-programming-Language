//�жϻ�����
//��������һ�����֣�����һ������char���������ַ������Կո�Ҳ��
#include<stdio.h>
#include<string.h>
int main(void)
{
	int a=0, b,n;
	char c[80];
	printf("������һ�����飺\n");
	//����ֱ������һ���������char c[] = "shaokuan";���û�н���ջ�����ǲ���ֱ���޸ĵı��粻��c(1)=H;����*��c+1��=H��Ҳ����c[1]=H;
	while ((c[a] = getchar()) !='\n')
	{
		a++;
	}
	c[a] = '\0';
	for (b=0;b<(a-1);b++)
	{
		if (c[b] == c[a-1])
		{
			a--;
		}
		else
		{
			printf_s("����һ��������\n");
			break;
		}
	}
	if (b >= (a - 1))
	{
		printf_s("����һ��������\n");
	}
	return 0;
}

int symm(char* ch)
{
	char ftemp = ch;
	char btemp = ch + strlen(ch) - 1;
	while (ftemp<btemp)
	{
		if (ftemp != btemp)
			return 1;
		ftemp++;
		btemp++;
	}
	return 0;
}
int main02(void)
{
	char ch = "shaokuan";//������Ƴ�������Ҫ���ַ���
    int i;
	i = symm(ch);
	if (i != 0)
	{
		printf_s("����һ��������");
	}
	else
	{
		printf_s("��һ��������");
	}
	return 0;
}