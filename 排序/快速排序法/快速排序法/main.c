/*********************
二分法的理念
哨兵i和哨兵j相遇
*********************/
#include<stdio.h>
int a[101], n;            //定义全局变量，这两个变量需要在子函数里面使用

void quick_sort(int left, int right)
{
	int i, j, t, temp;
	if (left > right)
		return;


	temp = a[left];   //temp存的就是基准数 
	i = left;
	j = right;
	while (i != j)
	{
		//顺序很重要，需要先从右到左
		while (a[j] >= temp && i < j)
			j--;
		//再从左到右找
		while (a[i] <= temp && i < j)
			i++;
		//交换两个数的位置
		if (i < j) //当两个哨兵没有相遇时
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	//最终将基准数归位
	a[left] = a[i];
	a[i] = temp;

	quick_sort(left, i - 1);//继续处理左边的，这里是一个递归的过程
	quick_sort(i + 1, right);//继续处理右边的，这里是一个递归的过程
	//这个地方不能用return，不然返回值不知道是啥？？？批注？？？？？？？？？？？？？
}

int main(void)
{
	//读入数据
	printf_s("将要排序的数字元素个数：");
	scanf_s("%d",&n);
	for (int i = 1; i <= n; i++)
	{
		printf_s("请输入第%d个数：",i);
		scanf_s("%d",&a[i]);
	}
	 
	quick_sort(1, n);//快速排序调用


	//输出排序后的结果
	printf_s("排完%d个数后的结果为：\n",n);
	for (int i = 1; i <= n; i++)
	{
		printf_s("%d \n",a[i]);
	}
	  
	system("pause");
	return 0;
}