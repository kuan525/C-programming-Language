#include<stdio.h>
int main(void)
{
	int i,p=0,n;
	double sum=0,aver;
	int a[80];
	printf_s("�ܹ����ٸ�����(С��80)��");
	scanf_s("%d",&n );
	//��������
	printf_s("������%d������\n", n);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d ", &a[i]);
		sum = sum + a[i];
	}
	aver = sum / n;
	//�������ƽ��ֵ����
	printf_s("ƽ�������ڣ�%.2f\n",aver);
	printf_s("����ƽ���������У�");
		for (i = 0; i <n; i++)
		{
			if (aver < a[i])
			{
				printf_s("%d ", a[i]);
				p++;
			}
		}
		printf_s("\n");
	printf_s("����ƽ������ֵ�ж��ٸ���%d",p);
	printf_s("\n");
	return 0;
}