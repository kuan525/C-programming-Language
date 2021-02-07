#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//这里的模拟链表插入在第一个位置的时候会有点问题，在此不做深究，能解决
int main(void)
{
	//变量初始化
	int data[101], right[101];
	int n, t, i,len;
	printf_s("请输入数据个数：");
	scanf_s("%d",&n);

	//data初始化
	printf_s("请输入dada数据：");
	for ( i = 1; i <= n; i++)
	{
		scanf_s("%d",&data[i]);
	}

	//right初始化
	for ( i = 1; i < n; i++)
	{
		right[i] = i + 1;
	}
	right[n] = 0;

	//输入插入的数字
	len = n + 1;
	printf_s("请输入插入的数据：");
	scanf_s("%d",&data[len]);

	//开始遍历并插入数字
	t = 1;
	while (t != 0)
	{
		

		if (data[1] > data[len])//插入在第一个位置
		{
			right[len] = 1;

			//输出模拟链表
			printf_s("输出链表为：");
			while (len != 0)
			{
				printf_s("%d", data[len]);
				len=right[len];
			}
			break;
		}
		else//不是插入在第一个
		{
			if (data[right[t]] > data[len])
			{
				right[len] = right[t];//先弄后面
				right[t] = len;//再弄前面
				break; 
			}
		    t = right[t];
		}
	}

	//输出模拟链表
	if (right[len] != 0)
	{
		t = 1;
		printf_s("输出链表为：");
		while (t != 0)
		{
			printf_s("%d", data[t]);
			t = right[t];
		}
	}
	

	//over
	system("pause");
	return 0;

}