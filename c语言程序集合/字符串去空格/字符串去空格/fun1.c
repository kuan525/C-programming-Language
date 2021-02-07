extern void fun1(char* arr, char* arr1)
{
	int i=0, j=0;
	while (*(arr+i++)!=' '||*(arr+i)!='\0')
	{
		*(arr1 + j) = *(arr + i);
		j++;
	}
	return arr1;
}