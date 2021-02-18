#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int n, m, q, p, min = 99999999;
int a[51][51], book[51][51];
//深度优先搜索
void DFS(int x, int y, int step)
{
	int next[4][2] = {
		{0,1},//往右走
		{1,0},//往下走 
		{0,-1},//往左走
		{-1,0},//往上走
	};
	int tx, ty, k;
	//判断是否到达小哈的位置
	if (x == p && y == q)
	{
		//更新最小值
		if (step < min)
			min = step;
		return;//请注意这里的返回值很重要
	}

	//枚举四种走法
	for (k = 0; k <= 3; k++)
	{
		//计算下一个点的坐标
		tx = x + next[k][0];
		ty = y + next[k][1];
		//判断是否越界
		if (tx<1 || tx>n || ty<1 || ty>n)
			continue;
		//判断该点是否为障碍物或者已经在路途中
		if (a[tx][ty] == 0 && book[tx][ty] == 0)
		{
			book[tx][ty] = 1;//标记这个点已经走过
			DFS(tx, ty, step + 1);//开始尝试下一个点
			book[tx][ty] = 0;//尝试结束，取消这个点的标注
		}
	}
	return;
}

int main(void)
{
	int i, j, startx, starty;
	//读入n和m，n为行，m为列
	printf_s("请输入n和m：");
	scanf_s("%d %d", &n, &m);
	//读入迷宫
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			scanf_s("%d", &a[i][j]);
	//读入起点和终点坐标
	scanf_s("%d %d %d %d", &startx, &starty, &p, &q);

	//从起点开始搜索
	book[startx][starty] = 1;//标注起点已经在路径中，防止后面重复走
	//第一个参数是起点的x坐标，第二个参数是起点的y坐标，第三个参数是起始步数为0
	DFS(startx, starty, 0);

	//输出最短步数
	printf_s("%d", min);
	system("pause");
	return 0;
}