//深度优先搜索
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//全局变量起始值为0
int n, m, startx, starty, x, y,step,p,q,min=99999;
char map[51][51], book[51][51];

//定义DFS函数
void DFS(int x,int y,int step)
{
	int next[4][2] = {
		{0,1},//向右走
		{1,0},//向下走
		{0,-1},//向左走
		{-1,0}//向上走
	};
	int tx, ty;

	//判断是否到达目的地
	if (x==p&&y==q)
	{
		//更新最小值
		if (min>step)
			min = step;
		return;
	}

	//枚举四种走法
	

	book[tx][ty] = 1;
	DFS(tx,ty,step+1);
	book[tx][ty] = 0;
}

//定义主函数
int main(void)
{
	//输入行数和列数
	printf_s("请输入n和m(中间以逗号隔开,且都小于51)：");
	scanf("%d，%d",&n,&m);

	//以字符串的形式输入地图
	for (int i=0;i<=n;i++)//第i行
	{
		printf_s("%s",map[n]);
	}

	//输入起点和终点坐标
	printf_s("请输入起点和中点坐标(空格隔开，先起点后终点)：");
	scanf_s("%d %d %d %d",&startx,&starty,&p,&q);

	//开始第一步book清零
	book [startx][starty] = 1;

	//开始运行递归函数
	DFS(startx, starty,step);

	//函数结束
	return 0;
}