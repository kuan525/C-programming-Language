//九位数QQ密码解密
#include<stdio.h>

struct queue
{
	int date[101];//队列的主体
	int head;//队首
	int tail;//队尾
};

int main(void)
{
	struct queue qq;
	int i;
	//初始化队列
	qq.head = 1;
	qq.tail = 1;
	for ( i = 1; i <= 9; i++)
	{
		//依次插入九个数
		scanf_s("%d", &qq.date[qq.tail]);
		qq.tail++;
	}

	while (qq.head<qq.tail)//当队列不为空的时候执行循环
	{
		//打印队首并将队首出列
		printf_s("%d", qq.date[qq.head]);
		qq.head++;

		//将新队首的数移至队尾
		qq.date[qq.tail] = qq.date[qq.head];
		//将队首出队
		qq.head++;
		//将tail后移一位使之归为
		qq.tail++;
	}

	getchar(); getchar();
	return 0;
}