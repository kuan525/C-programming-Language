#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//���ﴴ��һ���ṹ��������ʾ����Ľ������
struct node
{
	int data;
	struct node* next;
};


int main(void)
{
	struct node *q, *p, *t, *head;//pָ��ѿռ䣬head������¼�׽�㣬t�����ʱ����head��q��p��ǰһ��λ��
	int i, n, a;
	scanf_s("%d\n",&n);
	head = NULL;
	for (i = 1; i <= n; i++)
	{
		scanf_s("%d",&a);
		//��̬����һ���ռ䣬�������һ����㣬������ʱָ��pָ��������
		p = (struct node*)malloc(sizeof(struct node));
		p->data = a;//�����ݴ��浽��ǰ����data����
		p->next = NULL;//���õ�ǰ���ĺ��ָ��ָ��գ�Ҳ���ǵ�ǰ��������һ���ڵ�Ϊ��
		if (head==NULL)//�ڵ�һ��������ʱ�򣬻�����else��䣬��ʹqָ���Լ���λ��
		{
			head = p;//������ǵ�һ�������Ľ�㣬��ͷָ��ָ��������
		}
		else
		{
			q->next = p;//������ǵ�һ�������Ľ�㡣����һ�����ĺ��ָ��ָ��ǰ���
		}

		q = p;//ָ��qҲָ��ǰ���
	}

	//���������������
	t = head;
	while (t!=NULL)
	{
		printf_s("%d ",t->data);
		t = t->next;//������һ�����
	}
	

	system("pause");
	return 0;


}