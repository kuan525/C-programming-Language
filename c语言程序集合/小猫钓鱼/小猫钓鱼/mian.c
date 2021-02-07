#include<stdio.h>
#include<string.h>

//定义队列
struct queue
{
	int data[1001];
	int tail;
	int head;
};

//定义栈
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

	//初始化变量
	q1.head = 1;
	q1.tail = 1;
	q2.head = 1;
	q2.tail = 1;
	s.top = 0;
	//定义book记录查找
	for (int i = 1; i < 10; i++)
	{
		book[i] = 0;
	}

	//两玩家获取手牌
	printf_s("请输入玩家一的手牌：");
	for (int i = 1; i <= 6; i++)
	{
		scanf_s("%d",&q1.data[q1.tail]);
		q1.tail++;
	}

	printf_s("请输入玩家二的手牌：");
	for (int i = 1; i <= 6; i++)
	{
		scanf_s("%d", &q2.data[q2.tail]);
		q2.tail++;
	}

	//程序主体
	while (q1.head<q1.tail&&q2.head<q2.tail)
	{
		//一号玩家出牌
		t = q1.data[q1.head];
		if (book[t] == 0)//栈内无相同的牌 
		{
			q1.head++;//出队
			s.top++;//栈顶抬高一个单位 
			s.data[s.top] = t;//入栈
			book[t] = 1;
		}
		else//栈内有相同的牌
		{
			q1.head++;
			q1.data[q1.tail] = t;//出队首入队尾
			q1.tail++;

			while (s.data[s.top]!=t)//t之前的栈牌给一号玩家
			{
				book[s.data[s.top]] = 0;
				q1.data[q1.tail] = s.data[s.top];
				s.top--;
				q1.tail++;
			}

			book[s.data[s.top]] = 0;
			q1.data[q1.tail] = s.data[s.top];//把t也给一号玩家
			s.top--;
			q1.tail++;
		}
		if (q1.head == q1.tail)
			break;

		//二号玩家出牌
		t = q2.data[q2.head];
		if (book[t] == 0)//栈内无相同的牌
		{
			q2.head++;//出队
			s.top++;
			s.data[s.top] = t;//入栈
			book[t] = 1;
		}
		else//栈内有相同的牌
		{
			q2.head++;
			q2.data[q2.tail] = t;//出队首入队尾
			q2.tail++;

			while (s.data[s.top]!=t)//t之前的栈牌给二号玩家
			{
				book[s.data[s.top]] = 0;
				q2.data[q2.tail] = s.data[s.top];
				s.top--;
				q2.tail++;
			}

			book[s.data[s.top]] = 0;
			q2.data[q2.tail] = s.data[s.top];//把t也给二号玩家、
			s.top--;
			q2.tail++;
		}

	}

	if (q1.head == q1.tail)
	{
		printf_s("二号玩家win\n");
		printf_s("二号玩家手牌为：");
		for (int i = q2.head; i < q2.tail; i++)//打印二号玩家手牌
		{
			printf_s(" %d ",q2.data[i]);
		}
		printf_s("\n");
		if (s.top == 1)
		{
			printf_s("栈内已无牌\n");
		}
		else
		{
			printf_s("栈内剩余牌为：");
			for (int i = 1; i <= s.top; i++)
			{
				printf_s("%d ",s.data[i]);
			}
		}
	}
	else
	{
		printf_s("一号玩家win\n");
		printf_s("一号玩家手牌为：");
		for (int i = q1.head; i < q1.tail; i++)//打印二号玩家手牌
		{
			printf_s("%d ", q1.data[i]);
		}
		printf_s("\n");
		if (s.top == 1)
		{
			printf_s("栈内已无牌\n");
		}
		else
		{
			printf_s("栈内剩余牌为：");
			for (int i = 1; i <= s.top; i++)
			{
				printf_s("%d", s.data[i]);
			}
		}
	}

	system("pause");
	return 0;

}