//�����������
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//ȫ�ֱ�����ʼֵΪ0
int n, m, startx, starty, x, y,step,p,q,min=99999;
char map[51][51], book[51][51];

//����DFS����
void DFS(int x,int y,int step)
{
	int next[4][2] = {
		{0,1},//������
		{1,0},//������
		{0,-1},//������
		{-1,0}//������
	};
	int tx, ty;

	//�ж��Ƿ񵽴�Ŀ�ĵ�
	if (x==p&&y==q)
	{
		//������Сֵ
		if (min>step)
			min = step;
		return;
	}

	//ö�������߷�
	

	book[tx][ty] = 1;
	DFS(tx,ty,step+1);
	book[tx][ty] = 0;
}

//����������
int main(void)
{
	//��������������
	printf_s("������n��m(�м��Զ��Ÿ���,�Ҷ�С��51)��");
	scanf("%d��%d",&n,&m);

	//���ַ�������ʽ�����ͼ
	for (int i=0;i<=n;i++)//��i��
	{
		printf_s("%s",map[n]);
	}

	//���������յ�����
	printf_s("�����������е�����(�ո�������������յ�)��");
	scanf_s("%d %d %d %d",&startx,&starty,&p,&q);

	//��ʼ��һ��book����
	book [startx][starty] = 1;

	//��ʼ���еݹ麯��
	DFS(startx, starty,step);

	//��������
	return 0;
}