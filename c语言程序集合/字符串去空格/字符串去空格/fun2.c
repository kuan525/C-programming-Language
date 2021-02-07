extern void fun2(char* arr)
{
	int i=0,j=0;
	printf_s("原数组为：%s\n",arr);
	while (*(arr + i++) != ' '||*(arr+i)!='\0')
	{
		*(arr + j) = *(arr + i);
		j++;
	}
	return arr;
}