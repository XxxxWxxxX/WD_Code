#include <stdio.h>
#include <stdlib.h>

//whileѭ��
void main()
{
	int i, sum;
	i = 1;
	sum = 0;

	//while
	//while (i <= 100)		//while û�зֺ�";"
	//{
	//	sum += i;
	//	i++;
	//}

	//do-while
	do
	{
		sum += i;
		i++;
	} while (i <= 100);		//do-while Ҫע�����зֺ�";"
	printf("sum is %d\n",sum);
	system("pause");
}