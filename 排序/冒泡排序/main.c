//ð������
#include<stdio.h>
int main(void)
{
	int arr[11],temp;
	for (int i = 1; i <= 10; i++)//�õ�һ�����ݣ��ݶ�ʮ����
	{
		printf_s("�������%d����:",i); 
		scanf_s("%d",&arr[i]);
	}
	for (int j = 1; j < 10; j++)
	{
		for (int m = 1; m < 10-j+1; m++)
		{
			if (arr[m]>arr[m+1])
			{
				temp = arr[m + 1];
				arr[m + 1] = arr[m];
				arr[m] = temp;
			}
		}
	}
	printf_s("����֮��Ľ����\n");
	for (int i = 1; i <=10 ; i++)//�������֮�������
	{
		printf_s("%d\n",arr[i]);
	}
	return 0;
}