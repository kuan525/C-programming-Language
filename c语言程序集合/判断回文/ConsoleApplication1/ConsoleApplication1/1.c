//判断回文数
//回文数是一个数字，不是一行数，char可以输入字符，所以空格也算
#include<stdio.h>
#include<string.h>
int main(void)
{
	int a=0, b,n;
	char c[80];
	printf("请输入一个数组：\n");
	//可以直接输入一个数组比如char c[] = "shaokuan";这个没有进入栈区，是不能直接修改的比如不能c(1)=H;可以*（c+1）=H，也可以c[1]=H;
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
			printf_s("不是一个回文数\n");
			break;
		}
	}
	if (b >= (a - 1))
	{
		printf_s("这是一个回文数\n");
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
	char ch = "shaokuan";//可以设计出输入想要的字符串
    int i;
	i = symm(ch);
	if (i != 0)
	{
		printf_s("不是一个回文数");
	}
	else
	{
		printf_s("是一个回文数");
	}
	return 0;
}