/*********************
���ַ�������
�ڱ�i���ڱ�j����
*********************/
#include<stdio.h>
int a[101], n;            //����ȫ�ֱ�����������������Ҫ���Ӻ�������ʹ��

void quick_sort(int left, int right)
{
	int i, j, t, temp;
	if (left > right)
		return;


	temp = a[left];   //temp��ľ��ǻ�׼�� 
	i = left;
	j = right;
	while (i != j)
	{
		//˳�����Ҫ����Ҫ�ȴ��ҵ���
		while (a[j] >= temp && i < j)
			j--;
		//�ٴ�������
		while (a[i] <= temp && i < j)
			i++;
		//������������λ��
		if (i < j) //�������ڱ�û������ʱ
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	//���ս���׼����λ
	a[left] = a[i];
	a[i] = temp;

	quick_sort(left, i - 1);//����������ߵģ�������һ���ݹ�Ĺ���
	quick_sort(i + 1, right);//���������ұߵģ�������һ���ݹ�Ĺ���
	//����ط�������return����Ȼ����ֵ��֪����ɶ��������ע��������������������������
}

int main(void)
{
	//��������
	printf_s("��Ҫ���������Ԫ�ظ�����");
	scanf_s("%d",&n);
	for (int i = 1; i <= n; i++)
	{
		printf_s("�������%d������",i);
		scanf_s("%d",&a[i]);
	}
	 
	quick_sort(1, n);//�����������


	//��������Ľ��
	printf_s("����%d������Ľ��Ϊ��\n",n);
	for (int i = 1; i <= n; i++)
	{
		printf_s("%d \n",a[i]);
	}
	  
	system("pause");
	return 0;
}