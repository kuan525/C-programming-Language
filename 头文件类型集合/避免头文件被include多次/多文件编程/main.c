#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
	srand((unsigned int)time(NULL));
	char arr[100];
    gets(arr);
	for (int i = 0; i < 10; i++)
	{
		printf("�����һ�д���%s",arr);
	}

	return 0;
}

