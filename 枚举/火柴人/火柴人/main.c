//这里其实可以使用a和b来表示c，把时间复杂度从N3降低到了N2，这里不作深究，降低之后和进阶版差不多
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	int *book,i,m, n, x, y, z,sum=0;
	book = (int*)malloc(sizeof(int) * 1111);//算了一下，如果有24根以下火柴棍，不可能大于1111。
	printf_s("请输入你手中有多少个火柴棍：");
	scanf_s("%d",&m);
	n = m - 4;//等于号和等号要占四个火柴棍
	
	//得到1-9的初始化火柴棍数
	for (i=0;i<=9;i++)
	{
		printf_s("请输入book[%d]需要多少个火柴棍:",i);
		scanf_s("%d",&book[i]);
	}

    //得到各位数的火柴棍数
	for ( i = 10; i < 1111; i++)
	{
		if (i <= 99)
			book[i] = book[i / 10] + book[i % 10];
		else if (i >= 100 && i <= 999)
			book[i] = book[i / 100] + book[i % 100 / 10] + book[i % 100 % 10];
		else
			book[i] = book[i / 1000] + book[i % 1000 / 100] + book[i % 1000 % 100 / 10] + book[i % 1000 % 100 % 10];
	}

	//算法主体
	for ( x = 0; x < 1111; x++)
	{
		for ( y = 0; y < 1111; y++)
		{
			for ( z = 0; z < 1111; z++)
			{
				if (book[x] + book[y] + book[z] == n && x + y == z)
				{
					sum++;//记录组合个数
					printf_s("%d+%d=%d\n",x,y,z);
				}

			}
		}
	}
	printf_s("组合共%d个", sum);

	//over
	system("pause");
	return 0;

}