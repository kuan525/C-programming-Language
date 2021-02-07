//输入一个数，输出他的全排列
//该算法有问题，正确实例看深度快速优先搜索代码
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int n,m=0,book[100],a[100],i,j,sum;

int fun01()
{
	j++; i++;
	for (a[i]=1;a[i]<=n;a[i]++)
	{
		if (j != n)//递归次循环
		{
			fun01(i, n, j);
		}
		else//判断并打印
		{
			//初始化book标记数组
			for (int f=1;f<=n;f++)
			{
				book[f] = 0;
			}

			//如果某个数出现就标记一下
			for (int f=1;f<=n;f++)
			{
				book[a[f]] = 1;
			}

			//统计出现了多少个不同的数
			sum = 0;
			for (int f=1 ;f<=n;f++)
			{
				sum += book[a[f]];
			}

			//如果正好出现了n个数，则满足
			if (sum == n)
			{
				for (int f=1;f<=n;f++)
				{
					printf_s("%d",a[f]);
				}
				printf_s("\n");
				m++;
			}

		}
	}
	return m;
}

int main(void)
{

	//输入一个数
	printf_s("请输入全排列的数字：");
	scanf_s("%d",&n);

	//算法具体实现
	i = 1; j = 1;
	for(a[i]=1;a[i]<=n;a[i]++)
	{
	    m=fun01();
	}

	//输出
	printf_s("n的全排列共有%d个",m);

    //over
	system("pause");
	return 0;
}