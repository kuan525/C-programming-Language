#include<stdio.h>
#include<string.h>

struct queue
{
	int date[101];
	int head;
	int tail;
};
struct queue qq;

//����
void encrypt(struct queue qq)//������Ϊ�βδ��ݽ�ȥ���ṹ�����Ҳ������Ϊ�βε������ݽ�ȥ
{
	struct queue static arr;
	arr.head = 18;
	arr.tail = 18;
	arr.date[arr.head] = qq.date[qq.tail - 1];
	arr.head--;
	//����Ѷ��п���һ����,���������,��arr��һ��������,�ڴ�����������,��������Ƹ�����,��������һ��������������ʹ��
	int i = 1;
	while(i < 10)//�պ�ѭ��10��,��������Ϊ��qq.head��qq.tailֵ����
	{
		//��arr���ж���
		arr.date[arr.head] = qq.date[qq.tail - 1 - i];
		arr.head--;
		i++;
		if (i == 10)
			break;
        //��β������,��β����
		arr.date[arr.head] = arr.date[arr.tail];
		arr.head--;
		arr.tail--;
	}
	printf_s("���ܺ������Ϊ:");
	for (int j =1; j <= 10; j++)
	{
		qq.date[j] = arr.date[j];//��������ֵ��qq����
		printf_s("%d",arr.date[j]);//��ӡ����,���ﻻ��,��Ȼ��������ֱ���
	}
	printf_s("\n");
}

//����
void decrypt(struct queue qq)//����һ�����ܳ���,�ṹ����Ϊ�βδ��ݽ�ȥ���ṹ�����Ҳ������Ϊ�βε������ݽ�ȥ
{
	printf_s("���ܺ��qq��Ϊ:");
	while (qq.head<qq.tail)
	{
		//��ӡ���ײ������׳���
		printf_s("%d",qq.date[qq.head]);
		qq.head++;
		//�¶��׸���β��һλ
		qq.date[qq.tail] = qq.date[qq.head];
		//���׳���
		qq.head++;
		//��β���һλ����Ųһλ
		qq.tail++;
	}
}
int main(void)
 {
	qq.head = 1;
	qq.tail = 1;
	printf_s("�������QQ�ţ�");
	for (int i = 1; i <=10 ; i++)//Ĭ����10λ��
	{
		scanf_s("%d",&qq.date[qq.tail]);
		qq.tail++;
	}
	encrypt(qq);//�ȼ��ܣ��ṹ����Ϊ��������
	//���λ��ȫ�ֱ�����ι���???????????????????????????????????????????????????????
 	decrypt(qq);//�ٽ��ܣ��˴���qq���������qq.date�Ѿ��ı�,��������һ���Ӻ�������qq.head��qq.tail��Ȼ��1��11�������������
	/*system("pause");�����Ҫ����#include<string.h>���ļ�*/
	/*getchar(); getchar();*/
	return 0;
}