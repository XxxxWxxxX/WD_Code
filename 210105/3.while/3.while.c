#include <stdio.h>
#include <stdlib.h>

//while循环
void main()
{
	int i, sum;
	i = 1;
	sum = 0;

	//while
	//while (i <= 100)		//while 没有分号";"
	//{
	//	sum += i;
	//	i++;
	//}

	//do-while
	do
	{
		sum += i;
		i++;
	} while (i <= 100);		//do-while 要注意后边有分号";"
	printf("sum is %d\n",sum);
	system("pause");
}