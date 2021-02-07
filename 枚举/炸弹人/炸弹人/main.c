//程序有点问题但是语法思路到了，目前遇见几个解决不了的问题，已记录
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	char a[20][20];// 假设这里的地图大小不超过20*20
	int i, j, sum, map = 0, q, p, x, y, n, m;
	//读入m和n，n表示多少行，m表示多少列
	scanf_s("%d %d",&n,&m);

	//读入n*m行字符地图
	for ( i = 0; i <= n-1; i++)
	{
		scanf("%s",a[i]);
	}

    //用两重循环枚举地图中的每一个点
	for ( i = 0; i <= n-1; i++)
	{
		for ( j = 0; j <= m-1; j++)
		{
			//首先判断这个点是不是平地，是平地才可以被放置炸弹
			if (a[i][j] == '.')
			{
				sum = 0;//sum用来计数(可以消灭的敌人数)，因此需要初始化为0
				//将当前坐标i,j复制到两个新变量x，y中，以便向上下左右四个方向分别统计
				//可以消灭的敌人数
				//向上统计可以消灭的敌人数
				x = i; y = j;
				while (a[x][y] != '#')//判断是不是强，不是则继续
				{
					if (a[x][y] == 'G')
						sum++;
					x--;
				}

				//向下统计可以消灭的敌人数
				x = i; y = j;
				while (a[x][y] != '#')//判断是不是强，不是则继续
				{
					if (a[x][y] == 'G')
						sum++;
					x++;
				}

				//向左统计可以消灭的敌人数
				x = i; y = j;
				while (a[x][y] != '#')//判断是不是墙，不是则继续
				{
					if (a[x][y] == 'G')
						sum++;
					y--;
				}

				//向右统计可以消灭的敌人数
				x = i; y = j;
				while (a[x][y] != '#')//判断是不是强，不是则继续
				{
					if (a[x][y] == 'G')
						sum++;
					y++;
				}

				//更新map的值
				if (sum > map)
				{
					map = sum;
					p = i;
					q = j;
				}
			}
		}
	}

	printf_s("将炸弹放在(%d,%d),最多可消灭%d个敌人\n",p,q,map);
	
	//over
	system("pause");
	return 0;

}