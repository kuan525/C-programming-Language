#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*********
双色球规则
1、六个不一样的红球 1-32
2、一个蓝球 1-16
*********/
int main(void)
{
	//双色球，6个红球， 1 ~ 32 1个蓝球 1 ~ 16
	srand((unsigned int)time(NULL));
	int arr[6] = {0};  //存放六个红球
	int value=0,j,i;
	for (i = 0; i < 6; i++)
	{
		value = rand() % 32 + 1; //产生随机数
		//去重(用一个for来与每一个比较，用一个if确定是否比完(两个参数是否相等)，运用两个break进行操作)
		for (j = 0; j < i; j++) //巧妙，多复习，灵感
		{
			if (value == arr[j])
				break;
		}
		if (j != i)
			break;
		arr[i] = value;
	}
	j = rand() % 16 + 1;
	for (i = 0; i < 6; i++)
	{
		printf_s("%d ",arr[i]);
	}
	printf_s(" + %d",j);

	return 0;
}