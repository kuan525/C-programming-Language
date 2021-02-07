#include<stdio.h>
int day_of_year(int day, int year, int month);
void main()
{
	int sum, day, month, year;
	printf_s("Enter year month day:");
	scanf_s("%d,%d,%d", &year, &month, &day);
	sum=day_of_year(day,year,month);
	printf_s("it is %dÌì",sum);
	return 0;
}
day_of_year(int day, int year, int month)
{
	int k, lamp;
	int tab[2][13] =
	{
		{ 0,31,28,31,30,31,30,31,31,30,31,30,31 },
		{ 0,31,29,31,30,31,30,31,31,30,31,30,31 }
	};
	
	lamp = (year % 4 == 0 && year % 100 != 0 || year %400 == 0);
	for (k= 1;k <month; k++)
	{
		day = day + tab[lamp][k];
	}
	return day;
}