//����һ�������������ȫ����
//���㷨�����⣬��ȷʵ������ȿ���������������
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int n,m=0,book[100],a[100],i,j,sum;

int fun01()
{
	j++; i++;
	for (a[i]=1;a[i]<=n;a[i]++)
	{
		if (j != n)//�ݹ��ѭ��
		{
			fun01(i, n, j);
		}
		else//�жϲ���ӡ
		{
			//��ʼ��book�������
			for (int f=1;f<=n;f++)
			{
				book[f] = 0;
			}

			//���ĳ�������־ͱ��һ��
			for (int f=1;f<=n;f++)
			{
				book[a[f]] = 1;
			}

			//ͳ�Ƴ����˶��ٸ���ͬ����
			sum = 0;
			for (int f=1 ;f<=n;f++)
			{
				sum += book[a[f]];
			}

			//������ó�����n������������
			if (sum == n)
			{
				for (int f=1;f<=n;f++)
				{
					printf_s("%d",a[f]);
				}
				printf_s("\n");
				m++;
			}

		}
	}
	return m;
}

int main(void)
{

	//����һ����
	printf_s("������ȫ���е����֣�");
	scanf_s("%d",&n);

	//�㷨����ʵ��
	i = 1; j = 1;
	for(a[i]=1;a[i]<=n;a[i]++)
	{
	    m=fun01();
	}

	//���
	printf_s("n��ȫ���й���%d��",m);

    //over
	system("pause");
	return 0;
}