#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//���ﴴ��һ���ṹ��������ʾ����Ľ������
struct node
{
	int data;
	struct node* next;
};

int main()
{
	struct node * p, * q, * t, * head;
	int i, n, a;
	scanf_s("%d",&n);
	head = NULL;//ͷָ���ʼΪ��
	for ( i = 1; i <= n; i++)//ѭ������n����
	{
		scanf_s("%d",&a);
		//��̬����һ���ռ䣬�������һ����㣬������ʱָ��pָ��������
		p = (struct node*)malloc(sizeof(struct node));
		p->data = a;//�����ݴ洢����ǰ����data����
		p->next = NULL;//���õ�ǰ���ĺ��ָ��ָ��գ�Ҳ���ǵ�ǰָ�����һ�����Ϊ��
		if (head == NULL)
			head = p;//������Ǵ����ĵ�һ����㣬��ͷָ��ָ��������
		else
			q->next = p;//������ǵ�һ�������Ľ�㣬����һ�����ĺ��ָ��ָ��ǰ���
		q = p;//ָ��qҲָ��ǰ���
	}

	scanf_s("%d",&a);//������������
	t = head;//������ͷ����ʼ����
	while (t!=NULL)//��û�дﵽ�����βʱ��ѭ��
	{
		if (t->next == NULL || t->next->data > a)
		//�����ǰ��������һ����������һ������ֵ���ڴ���������ʱ�����
		{
			p = (struct node*)malloc(sizeof(struct node));//��̬����һ���ռ���������½ڵ�
			p->data = a;
			p->next = t->next;//�������ĺ��ָ��ָ��ǰ�ڵ�ĺ��ָ����ָ��Ľ��
			t->next = p;//��ǰ���ĺ��ָ��ָ���������
			break;//��������Ƴ�ѭ��
		}
		t = t->next;//������һ�����
	}

	//��������е�������
	t = head;
	while (t!=NULL)
	{
		printf_s("%d ",t->data);
		t = t->next;//������һ�����
	}

	system("pause");
	return 0;

}
