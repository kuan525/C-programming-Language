//ѡ������
#include<stdio.h>
int main(void)
{
	int arr[11],max=0,i,j, k,n=1 ,temp;
	for (i = 1; i <= 10; i++)//�õ�һ������
	{
		printf_s("�������%d������",i);
		scanf_s("%d",&arr[i]);
	}
	for (j = 1; j < 10; j++)     //���ѭ��������
	{
		for ( k = 1; k < 10-j+1; k++)    //�ڲ�ѭ���������
		{
			if (arr[k] > max)       //max���ڵ����������ҵ����ֵ��ֻ��һ���н����ã��õط���Ҫ�ص㴧max������
			{
				max = arr[k];
				n = k;              //��¼���ֵ���±�
			}
		}
		max = 0;                  //����max
		temp = arr[n];            //�����������һ������
		arr[n] = arr[10-j+1];
		arr[10-j+1] = temp;
	}
	printf_s("����������Ϊ��\n");
	for (int m = 10; m >=1; m--)
	{
		printf_s("%d\n",arr[m]);
	}
	return 0;
}