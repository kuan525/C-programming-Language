#include<stdio.h>
#include<string.h>

//�������
struct queue
{
	int data[1001];
	int tail;
	int head;
};

//����ջ
struct stack
{
	int data[10];
	int top;
};


int main(void)
{
	struct queue q1, q2;
	struct stack s;
	int book[10];
	int i, t;

	//��ʼ������
	q1.head = 1;
	q1.tail = 1;
	q2.head = 1;
	q2.tail = 1;
	s.top = 0;
	//����book��¼����
	for (int i = 1; i < 10; i++)
	{
		book[i] = 0;
	}

	//����һ�ȡ����
	printf_s("���������һ�����ƣ�");
	for (int i = 1; i <= 6; i++)
	{
		scanf_s("%d",&q1.data[q1.tail]);
		q1.tail++;
	}

	printf_s("��������Ҷ������ƣ�");
	for (int i = 1; i <= 6; i++)
	{
		scanf_s("%d", &q2.data[q2.tail]);
		q2.tail++;
	}

	//��������
	while (q1.head<q1.tail&&q2.head<q2.tail)
	{
		//һ����ҳ���
		t = q1.data[q1.head];
		if (book[t] == 0)//ջ������ͬ���� 
		{
			q1.head++;//����
			s.top++;//ջ��̧��һ����λ 
			s.data[s.top] = t;//��ջ
			book[t] = 1;
		}
		else//ջ������ͬ����
		{
			q1.head++;
			q1.data[q1.tail] = t;//���������β
			q1.tail++;

			while (s.data[s.top]!=t)//t֮ǰ��ջ�Ƹ�һ�����
			{
				book[s.data[s.top]] = 0;
				q1.data[q1.tail] = s.data[s.top];
				s.top--;
				q1.tail++;
			}

			book[s.data[s.top]] = 0;
			q1.data[q1.tail] = s.data[s.top];//��tҲ��һ�����
			s.top--;
			q1.tail++;
		}
		if (q1.head == q1.tail)
			break;

		//������ҳ���
		t = q2.data[q2.head];
		if (book[t] == 0)//ջ������ͬ����
		{
			q2.head++;//����
			s.top++;
			s.data[s.top] = t;//��ջ
			book[t] = 1;
		}
		else//ջ������ͬ����
		{
			q2.head++;
			q2.data[q2.tail] = t;//���������β
			q2.tail++;

			while (s.data[s.top]!=t)//t֮ǰ��ջ�Ƹ��������
			{
				book[s.data[s.top]] = 0;
				q2.data[q2.tail] = s.data[s.top];
				s.top--;
				q2.tail++;
			}

			book[s.data[s.top]] = 0;
			q2.data[q2.tail] = s.data[s.top];//��tҲ��������ҡ�
			s.top--;
			q2.tail++;
		}

	}

	if (q1.head == q1.tail)
	{
		printf_s("�������win\n");
		printf_s("�����������Ϊ��");
		for (int i = q2.head; i < q2.tail; i++)//��ӡ�����������
		{
			printf_s(" %d ",q2.data[i]);
		}
		printf_s("\n");
		if (s.top == 1)
		{
			printf_s("ջ��������\n");
		}
		else
		{
			printf_s("ջ��ʣ����Ϊ��");
			for (int i = 1; i <= s.top; i++)
			{
				printf_s("%d ",s.data[i]);
			}
		}
	}
	else
	{
		printf_s("һ�����win\n");
		printf_s("һ���������Ϊ��");
		for (int i = q1.head; i < q1.tail; i++)//��ӡ�����������
		{
			printf_s("%d ", q1.data[i]);
		}
		printf_s("\n");
		if (s.top == 1)
		{
			printf_s("ջ��������\n");
		}
		else
		{
			printf_s("ջ��ʣ����Ϊ��");
			for (int i = 1; i <= s.top; i++)
			{
				printf_s("%d", s.data[i]);
			}
		}
	}

	system("pause");
	return 0;

}