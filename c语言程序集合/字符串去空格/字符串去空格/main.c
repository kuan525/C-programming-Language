#include<stdio.h>
extern void fun1(char* arr, char* arr1);
extern void fun2(char* arr);
int main(void)
{
	char arr[10];
	char arr1[10];
	//system("pause");      //��ͣ������getchar();����
	scanf_s("������arr����%s",arr,sizeof(arr));
	extern void fun1(arr,arr1);        //��Ҫ����һ�������飬�������ڴ棬˼·��
	printf_s("���ȥ�ո����飺arr1��%s",arr1);
	puts("\n");
	extern void fun2(arr);              //ֱ�Ӹ�ֵ��ԭ�������棬˼·�Ƚϸ���
	printf_s("����򻯺�����飺%s",arr);
	return 0;
}