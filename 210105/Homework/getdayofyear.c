#include <stdio.h>
#include <stdlib.h>

//1.当天是第几天,年,月,日
int runnian(int year);
int countday(int year, int mon, int day);

void main()
{
	int year, mon, day;

	//输入年月日
	while (rewind(stdin), scanf("%d%d%d", &year, &mon, &day) != EOF)
	{
		printf("当前是第%d天\n", countday(year, mon, day));
	}
}

//计算是否是闰年
int runnian(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))   //是闰年
	{
		return (1);
	}else {
		return(0);
	}
}

//计算当天是第几天的函数
int countday(int year, int mon, int day)
{
	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };		//特殊的是二月
	int i, total;
	total = 0;

	for (i = 0;i < mon-1; i++)		//<mon-1 ,而不是<= !!!
	{
			if (i == 1)			//这里逻辑有点问题 如果是闰年二月29天 这里没问题是for循环判断出错
			{		
				a[i] =a[i]+ runnian(year);
			}
			total = total+a[i];
	}
	total =total + day;
	return (total) ;
}

