//��λ��QQ�������
#include<stdio.h>

struct queue
{
	int date[101];//���е�����
	int head;//����
	int tail;//��β
};

int main(void)
{
	struct queue qq;
	int i;
	//��ʼ������
	qq.head = 1;
	qq.tail = 1;
	for ( i = 1; i <= 9; i++)
	{
		//���β���Ÿ���
		scanf_s("%d", &qq.date[qq.tail]);
		qq.tail++;
	}

	while (qq.head<qq.tail)//�����в�Ϊ�յ�ʱ��ִ��ѭ��
	{
		//��ӡ���ײ������׳���
		printf_s("%d", qq.date[qq.head]);
		qq.head++;

		//���¶��׵���������β
		qq.date[qq.tail] = qq.date[qq.head];
		//�����׳���
		qq.head++;
		//��tail����һλʹ֮��Ϊ
		qq.tail++;
	}

	getchar(); getchar();
	return 0;
}