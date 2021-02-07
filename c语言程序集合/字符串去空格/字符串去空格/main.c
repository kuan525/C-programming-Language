#include<stdio.h>
extern void fun1(char* arr, char* arr1);
extern void fun2(char* arr);
int main(void)
{
	char arr[10];
	char arr1[10];
	//system("pause");      //暂停程序，与getchar();类似
	scanf_s("请输入arr数组%s",arr,sizeof(arr));
	extern void fun1(arr,arr1);        //需要开辟一个新数组，多消耗内存，思路简单
	printf_s("输出去空格数组：arr1：%s",arr1);
	puts("\n");
	extern void fun2(arr);              //直接赋值在原数组里面，思路比较复杂
	printf_s("输出简化后的数组：%s",arr);
	return 0;
}