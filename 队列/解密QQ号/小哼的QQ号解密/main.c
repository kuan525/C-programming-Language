#include<stdio.h>
int main(void)
{
	int qq[101] = {0,2,1,6,6,3,6,4,8,2,4 }, head, tail;//��ʼ������
	head = 1;
	tail = 11;//�ڶ�β��һλ��
	printf_s("���ܺ��qq���ǣ�");
	while (head<tail)//�����в�Ϊ��ʱִ��ѭ��
	{
		//��ӡ���ף��������׳���
		printf_s("%d",qq[head]);
		head++;

		//���¶�����ӵ���β��һλ
		qq[tail] = qq[head];
		tail++;
		//�ٽ����׳���
		head++;//���¶���
	}

	getchar(); getchar();
	return 0;
}