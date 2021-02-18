#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int n, m, q, p, min = 99999999;
int a[51][51], book[51][51];
//�����������
void DFS(int x, int y, int step)
{
	int next[4][2] = {
		{0,1},//������
		{1,0},//������ 
		{0,-1},//������
		{-1,0},//������
	};
	int tx, ty, k;
	//�ж��Ƿ񵽴�С����λ��
	if (x == p && y == q)
	{
		//������Сֵ
		if (step < min)
			min = step;
		return;//��ע������ķ���ֵ����Ҫ
	}

	//ö�������߷�
	for (k = 0; k <= 3; k++)
	{
		//������һ���������
		tx = x + next[k][0];
		ty = y + next[k][1];
		//�ж��Ƿ�Խ��
		if (tx<1 || tx>n || ty<1 || ty>n)
			continue;
		//�жϸõ��Ƿ�Ϊ�ϰ�������Ѿ���·;��
		if (a[tx][ty] == 0 && book[tx][ty] == 0)
		{
			book[tx][ty] = 1;//���������Ѿ��߹�
			DFS(tx, ty, step + 1);//��ʼ������һ����
			book[tx][ty] = 0;//���Խ�����ȡ�������ı�ע
		}
	}
	return;
}

int main(void)
{
	int i, j, startx, starty;
	//����n��m��nΪ�У�mΪ��
	printf_s("������n��m��");
	scanf_s("%d %d", &n, &m);
	//�����Թ�
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			scanf_s("%d", &a[i][j]);
	//���������յ�����
	scanf_s("%d %d %d %d", &startx, &starty, &p, &q);

	//����㿪ʼ����
	book[startx][starty] = 1;//��ע����Ѿ���·���У���ֹ�����ظ���
	//��һ������������x���꣬�ڶ�������������y���꣬��������������ʼ����Ϊ0
	DFS(startx, starty, 0);

	//�����̲���
	printf_s("%d", min);
	system("pause");
	return 0;
}