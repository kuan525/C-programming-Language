//Ͱ����
#include<stdio.h>
int main(void)
{
	int k = 0;
	int arr[11] = { 0 };
	for (int i = 1; i <= 10; i++)//�õ�һ������
	{
		printf_s("�������%d������", i );
		scanf_s("%d", &k);
		arr[k]++;//��ÿ��Ͱ����+

	}
	for (int i = 0; i < 10; i++)//��ӡ����ֵ���������
	{
		for (int j = 0; j < arr[i]; j++)
		{

			printf_s("%d\n", i);
		}
	} 
	return 0;
}