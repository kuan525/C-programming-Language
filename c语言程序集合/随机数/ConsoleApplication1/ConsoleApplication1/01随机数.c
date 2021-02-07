#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
	int i;
	srand((unsigned int)time(NULL));//初始化随机数
	for ( i = 0; i < 10; i++)
	{
		printf_s("%d\n",rand()); 
	/*************
	打印10个随机数，rand()返回(0-32767之间的数)，k=rand()%(x-y+1)+x(先确定范围，在加上
	偏移量得到区间)能得到任意范围的随机数
	*************/
	}

	/**********
	time()函数有这个规定，如果你传进去一个NULL指针，那么系统返回当前时间，如果不是NULL
	那么系统认为你要修改当前时间，就把你传进去的指针对应的time_t变量的值设置为当前时间。
	**********/
	return 0;

}
