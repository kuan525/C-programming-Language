//分数排序且输出对应的人名的排列
//桶排序不行，冒牌排序可以(借助结构体)
//暂用五个数为例子
#include<stdio.h>
struct student
{
	char name[21];
	int score;
};
int main(void)
{ 
	int temp;
	struct student arr[100],t; //参数的意义？？？？？？？？？？？？？？？？？？？  学！！！
	for (int i = 1; i <= 5; i++)//借助结构体输入分数和名字
	{
		printf_s("请输入第%d个人名和分数：",i);
		scanf_s("%s %d",arr[i].name,sizeof(arr),&arr[i].score);
	}
	for (int i = 1; i <5 ; i++)
	{
		for (int j = 1; j < 5-i+1; j++)
		{
			if (arr[j].score>arr[j+1].score)
			{
				t= arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t ;
			}
		}
	}
	for (int i = 1; i <=5; i++)
	{
		printf_s("%s\n",arr[i].name);
	}
	//getchar(); 
	//getchar();
	system("pause");
	return 0;
}