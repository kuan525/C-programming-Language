#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//�����ģ����������ڵ�һ��λ�õ�ʱ����е����⣬�ڴ˲�������ܽ��
int main(void)
{
	//������ʼ��
	int data[101], right[101];
	int n, t, i,len;
	printf_s("���������ݸ�����");
	scanf_s("%d",&n);

	//data��ʼ��
	printf_s("������dada���ݣ�");
	for ( i = 1; i <= n; i++)
	{
		scanf_s("%d",&data[i]);
	}

	//right��ʼ��
	for ( i = 1; i < n; i++)
	{
		right[i] = i + 1;
	}
	right[n] = 0;

	//������������
	len = n + 1;
	printf_s("�������������ݣ�");
	scanf_s("%d",&data[len]);

	//��ʼ��������������
	t = 1;
	while (t != 0)
	{
		

		if (data[1] > data[len])//�����ڵ�һ��λ��
		{
			right[len] = 1;

			//���ģ������
			printf_s("�������Ϊ��");
			while (len != 0)
			{
				printf_s("%d", data[len]);
				len=right[len];
			}
			break;
		}
		else//���ǲ����ڵ�һ��
		{
			if (data[right[t]] > data[len])
			{
				right[len] = right[t];//��Ū����
				right[t] = len;//��Ūǰ��
				break; 
			}
		    t = right[t];
		}
	}

	//���ģ������
	if (right[len] != 0)
	{
		t = 1;
		printf_s("�������Ϊ��");
		while (t != 0)
		{
			printf_s("%d", data[t]);
			t = right[t];
		}
	}
	

	//over
	system("pause");
	return 0;

}