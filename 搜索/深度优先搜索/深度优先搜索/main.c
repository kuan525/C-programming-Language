//�ؼ����ں���֮��������תʱ�ֲ��������ܹ�������ʹbook[]�����ܹ����ò����ܴ���һ���������¿�ʼ��ֱ������

#include<stdio.h>
#include<string.h>
int a[10], book[10], n;
void DFS(int step)
{
	int i;

	//�жϱ߽�
	if (step==n+1)
	{
		for (i = 1; i <= n; i++)
			printf_s("%d",a[i]);
		printf_s("\n");
		return;//������������β�������������for����ν���������book[]
	}

	//����ÿһ�ֿ���
	for ( i = 1; i <= n; i++)
	{
		if (book[i] == 0)
		{
			a[step] = i;
			book[i] = 1;

			DFS(step + 1);//�������ʱ��book[1]=0;��Ȼ���ȵ�forѭ��i=2������ֱ�������ε�ʱ��i=3ֱ���˳�
			book[i] = 0;
		}
	}

	//����
	return;
}

int main(void)
{
	//����ȫ���е���
	scanf_s("%d",&n);

	//���������
	DFS(1);

	//over
	system("pause");
	return 0;
}