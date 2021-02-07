#include<stdio.h>
int main(void)
{
	int qq[101] = {0,2,1,6,6,3,6,4,8,2,4 }, head, tail;//初始化数组
	head = 1;
	tail = 11;//在队尾后一位数
	printf_s("解密后的qq号是：");
	while (head<tail)//当队列不为空时执行循环
	{
		//打印队首，并将队首出队
		printf_s("%d",qq[head]);
		head++;

		//将新队首添加到队尾后一位
		qq[tail] = qq[head];
		tail++;
		//再将队首出队
		head++;//更新队首
	}

	getchar(); getchar();
	return 0;
}