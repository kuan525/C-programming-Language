//���������������Ӧ������������
//Ͱ�����У�ð���������(�����ṹ��)
//���������Ϊ����
#include<stdio.h>
struct student
{
	char name[21];
	int score;
};
int main(void)
{ 
	int temp;
	struct student arr[100],t; //���������壿������������������������������������  ѧ������
	for (int i = 1; i <= 5; i++)//�����ṹ���������������
	{
		printf_s("�������%d�������ͷ�����",i);
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