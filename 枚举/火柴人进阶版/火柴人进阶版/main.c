//事实证明，这个进阶版要快很多！！！！！学习！！！！
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int fun(int x)
{
	int num = 0;//用来计数的变量
	int f[10] = { 6,2,5,5,4,5,6,3,7,6 };
	//用一个数组来记录0~9每个数字需要使用多少根火柴棍
	while (x / 10 != 0)
	{
		//获得x的末尾数字并将此数所需要用到的火柴棍根数累加到num中
		num += f[x % 10];
		x = x / 10;//去掉x的末尾数字，例如x的值为123则现在x的值为12
	}
	//最后加上此时x所需要用到的火柴棍的根数(此时x一定是一位数)
	num += f[x];
	return num;//返回需要火柴棍的总根数
}


int main(viod)
{
	int a, b, c, m, sum = 0;//sum是用来计数的，因此一定要初始化为0
	scanf_s("%d",&m);

    //开始枚举a和b
	for ( a = 0; a <= 1111; a++)
	{
		for ( b = 0; b <= 1111; b++)
		{
			c = a + b;//计算出c
			//fun是我们写的子函数，用来计算一个数所需要用的火柴棍总数
			//当a使用的火柴棍根数+b使用的火柴棍根数+c使用的火柴棍根数之和恰好为m-4时，则成功的找出了一组解
			if (fun(a) + fun(b) + fun(c) == m - 4)
			{
				printf_s("%d+%d=%d\n",a,b,c);
				sum++;
			}
		}
	}

	puts("");
	printf_s("一个可以拼出%d个不同的等式\n\n",sum);

	//over
	system("pause");
	return 0;
}