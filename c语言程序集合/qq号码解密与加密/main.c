#include<stdio.h>
#include<string.h>

struct queue
{
	int date[101];
	int head;
	int tail;
};
struct queue qq;

//加密
void encrypt(struct queue qq)//队列作为形参传递进去，结构体变量也可以作为形参单独传递进去
{
	struct queue static arr;
	arr.head = 18;
	arr.tail = 18;
	arr.date[arr.head] = qq.date[qq.tail - 1];
	arr.head--;
	//这里把队列看成一个库,在输出数据,而arr是一个接收器,在处理运算数据,最后反馈复制给队列,让其在下一步解密中能正常使用
	int i = 1;
	while(i < 10)//刚好循环10次,这样做是为了qq.head和qq.tail值不变
	{
		//给arr队列队首
		arr.date[arr.head] = qq.date[qq.tail - 1 - i];
		arr.head--;
		i++;
		if (i == 10)
			break;
        //队尾给队首,队尾出队
		arr.date[arr.head] = arr.date[arr.tail];
		arr.head--;
		arr.tail--;
	}
	printf_s("加密后的密文为:");
	for (int j =1; j <= 10; j++)
	{
		qq.date[j] = arr.date[j];//反馈密文值给qq队列
		printf_s("%d",arr.date[j]);//打印密文,这里换行,不然密文是竖直输出
	}
	printf_s("\n");
}

//解密
void decrypt(struct queue qq)//定义一个解密程序,结构体作为形参传递进去，结构体变量也可以作为形参单独传递进去
{
	printf_s("解密后的qq号为:");
	while (qq.head<qq.tail)
	{
		//打印队首并将队首出队
		printf_s("%d",qq.date[qq.head]);
		qq.head++;
		//新队首给队尾后一位
		qq.date[qq.tail] = qq.date[qq.head];
		//队首出列
		qq.head++;
		//队尾最后一位往后挪一位
		qq.tail++;
	}
}
int main(void)
 {
	qq.head = 1;
	qq.tail = 1;
	printf_s("输入你的QQ号：");
	for (int i = 1; i <=10 ; i++)//默认是10位数
	{
		scanf_s("%d",&qq.date[qq.tail]);
		qq.tail++;
	}
	encrypt(qq);//先加密，结构体作为参数输入
	//这个位置全局变量如何共享???????????????????????????????????????????????????????
 	decrypt(qq);//再解密，此处的qq里面的数组qq.date已经改变,但是在上一个子函数里面qq.head和qq.tail仍然是1和11，储存的是密文
	/*system("pause");这个需要调用#include<string.h>库文件*/
	/*getchar(); getchar();*/
	return 0;
}