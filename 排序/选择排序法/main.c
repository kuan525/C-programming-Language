//选择排序法
#include<stdio.h>
int main(void)
{
	int arr[11],max=0,i,j, k,n=1 ,temp;
	for (i = 1; i <= 10; i++)//得到一组数列
	{
		printf_s("请输入第%d个数：",i);
		scanf_s("%d",&arr[i]);
	}
	for (j = 1; j < 10; j++)     //外层循环，次数
	{
		for ( k = 1; k < 10-j+1; k++)    //内层循环，找最大
		{
			if (arr[k] > max)       //max存在的意义在于找到最大值，只起一个中介作用，该地方需要重点揣max的意义
			{
				max = arr[k];
				n = k;              //记录最大值的下标
			}
		}
		max = 0;                  //重置max
		temp = arr[n];            //将最大的数与第一个交换
		arr[n] = arr[10-j+1];
		arr[10-j+1] = temp;
	}
	printf_s("排序后的数列为：\n");
	for (int m = 10; m >=1; m--)
	{
		printf_s("%d\n",arr[m]);
	}
	return 0;
}