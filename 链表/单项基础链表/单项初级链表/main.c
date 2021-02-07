#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//这里创建一个结构体用来表示链表的结点类型
struct node
{
	int data;
	struct node* next;
};


int main(void)
{
	struct node *q, *p, *t, *head;//p指向堆空间，head用来记录首结点，t在输出时代替head，q是p的前一个位置
	int i, n, a;
	scanf_s("%d\n",&n);
	head = NULL;
	for (i = 1; i <= n; i++)
	{
		scanf_s("%d",&a);
		//动态申请一个空间，用来存放一个结点，并用临时指针p指向这个结点
		p = (struct node*)malloc(sizeof(struct node));
		p->data = a;//将数据储存到当前结点的data域中
		p->next = NULL;//设置当前结点的后继指针指向空，也就是当前结束的下一个节点为空
		if (head==NULL)//在第一个该语句的时候，会跳过else语句，而使q指向自己的位置
		{
			head = p;//如果这是第一个创建的结点，则将头指针指向这个结点
		}
		else
		{
			q->next = p;//如果不是第一个创建的结点。则将上一个结点的后继指针指向当前结点
		}

		q = p;//指针q也指向当前结点
	}

	//输出链表中所有数
	t = head;
	while (t!=NULL)
	{
		printf_s("%d ",t->data);
		t = t->next;//继续下一个结点
	}
	

	system("pause");
	return 0;


}