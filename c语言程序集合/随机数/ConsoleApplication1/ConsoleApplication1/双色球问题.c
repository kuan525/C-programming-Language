#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*********
˫ɫ�����
1��������һ���ĺ��� 1-32
2��һ������ 1-16
*********/
int main(void)
{
	//˫ɫ��6������ 1 ~ 32 1������ 1 ~ 16
	srand((unsigned int)time(NULL));
	int arr[6] = {0};  //�����������
	int value=0,j,i;
	for (i = 0; i < 6; i++)
	{
		value = rand() % 32 + 1; //���������
		//ȥ��(��һ��for����ÿһ���Ƚϣ���һ��ifȷ���Ƿ����(���������Ƿ����)����������break���в���)
		for (j = 0; j < i; j++) //����ิϰ�����
		{
			if (value == arr[j])
				break;
		}
		if (j != i)
			break;
		arr[i] = value;
	}
	j = rand() % 16 + 1;
	for (i = 0; i < 6; i++)
	{
		printf_s("%d ",arr[i]);
	}
	printf_s(" + %d",j);

	return 0;
}