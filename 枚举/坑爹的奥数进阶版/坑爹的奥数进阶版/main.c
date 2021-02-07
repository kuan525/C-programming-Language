#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	int a[10], i, total = 0, book[10], sum;
	//这里使用a[1]-a[9]来代替刚才的a，b，c,d,e,f,g,h,i
	for (a[1] = 1; a[1] <= 9; a[1]++)
	for (a[2] = 1; a[2] <= 9; a[2]++)
	for (a[3] = 1; a[3] <= 9; a[3]++)
	for (a[4] = 1; a[4] <= 9; a[4]++)
	for (a[5] = 1; a[5] <= 9; a[5]++)
	for (a[6] = 1; a[6] <= 9; a[6]++)
	for (a[7] = 1; a[7] <= 9; a[7]++)
	for (a[8] = 1; a[8] <= 9; a[8]++)
	for (a[9] = 1; a[9] <= 9; a[9]++)
		{
			for (i = 1; i <= 9; i++)//初始化book数组
				book[i] = 0;
			for (i = 1; i <= 9; i++)
				{
				book[a[i]] = 1;
			}
			//统计共出现了多少个不同的数
			sum = 0;
			for (i = 1; i <= 9; i++)
			sum += book[i];
			//如果正好出现9个不同的数，并且满足等式要求，则输出
			if (sum == 9 && a[1] * 100 + a[2] * 10 + a[3] + a[4] * 100 + a[5] * 10 + a[6] == a[7] * 100 + a[8] * 10 + a[9])
			{
				total++;
				printf_s("%d%d%d+%d%d%d=%d%d%d\n", a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);
			}
		}
	printf_s("total=%d", total / 2);
	system("pause");
	return 0;
}