//������ʵ����ʹ��a��b����ʾc����ʱ�临�Ӷȴ�N3���͵���N2�����ﲻ���������֮��ͽ��װ���
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	int *book,i,m, n, x, y, z,sum=0;
	book = (int*)malloc(sizeof(int) * 1111);//����һ�£������24�����»����������ܴ���1111��
	printf_s("�������������ж��ٸ�������");
	scanf_s("%d",&m);
	n = m - 4;//���ںź͵Ⱥ�Ҫռ�ĸ�����
	
	//�õ�1-9�ĳ�ʼ��������
	for (i=0;i<=9;i++)
	{
		printf_s("������book[%d]��Ҫ���ٸ�����:",i);
		scanf_s("%d",&book[i]);
	}

    //�õ���λ���Ļ�����
	for ( i = 10; i < 1111; i++)
	{
		if (i <= 99)
			book[i] = book[i / 10] + book[i % 10];
		else if (i >= 100 && i <= 999)
			book[i] = book[i / 100] + book[i % 100 / 10] + book[i % 100 % 10];
		else
			book[i] = book[i / 1000] + book[i % 1000 / 100] + book[i % 1000 % 100 / 10] + book[i % 1000 % 100 % 10];
	}

	//�㷨����
	for ( x = 0; x < 1111; x++)
	{
		for ( y = 0; y < 1111; y++)
		{
			for ( z = 0; z < 1111; z++)
			{
				if (book[x] + book[y] + book[z] == n && x + y == z)
				{
					sum++;//��¼��ϸ���
					printf_s("%d+%d=%d\n",x,y,z);
				}

			}
		}
	}
	printf_s("��Ϲ�%d��", sum);

	//over
	system("pause");
	return 0;

}