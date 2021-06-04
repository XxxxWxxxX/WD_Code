#include <stdio.h>
#include <stdlib.h>

//for完全可以替代while
void main()
{
	int i, sum;
	sum = 0;
	i = 1;		//for替代while,先初始化省略表达式值i=1;
	//for完全体
	//for (i = 1; i <= 100; i++)
	//{
	//	sum += i;
	//}

	//for替代while,先初始化省略表达式值i=1;
	//for (; i <= 100;)
	//{
	//	sum += i;
	//	i++;
	//}

	//for表达式语句完全省略,需要嵌套一个判断语句来实现表达式2的功能,退出使用break(只能用在循环退出)
	for (;;)
	{
		if (i <= 100)
		{
			sum += i;
			i++;
		}else {
			break;
		}
	}

	printf("sum is %d\n", sum);
	system("pause");
}