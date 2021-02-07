//关键在于函数之间来回跳转时局部变量不能共享，才能使book[]函数能够重置并且能从下一个箱子重新开始，直到结束

#include<stdio.h>
#include<string.h>
int a[10], book[10], n;
void DFS(int step)
{
	int i;

	//判断边界
	if (step==n+1)
	{
		for (i = 1; i <= n; i++)
			printf_s("%d",a[i]);
		printf_s("\n");
		return;//跳到本函数结尾，进而让下面的for语句多次进行来重置book[]
	}

	//尝试每一种可能
	for ( i = 1; i <= n; i++)
	{
		if (book[i] == 0)
		{
			a[step] = i;
			book[i] = 1;

			DFS(step + 1);//在最外层时到book[1]=0;自然过度到for循环i=2再来，直到第三次的时候i=3直接退出
			book[i] = 0;
		}
	}

	//返回
	return;
}

int main(void)
{
	//输入全排列的数
	scanf_s("%d",&n);

	//函数体调用
	DFS(1);

	//over
	system("pause");
	return 0;
}