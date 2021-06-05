#include <stdio.h>
#include <stdlib.h>

#define MAX 100

//2.从键盘上输入字符
//(1）分别统计一下其中字母，数字，其他字符的个数 
//(2）将统计的字母，数字，其他字符的个数以柱状图的形式打印

void main()
{
	char str[MAX] = { 0 };
	int char_num, number_num, other_num;
	int i;
	int index_empty;

	//将输入字符存入字符数组中,并统计各个数据
	while (rewind(stdin), gets(str) != NULL)
	{
		i = 0; char_num = 0; number_num = 0; other_num = 0;
		while (str[i] != '\0')		//循环判断是否到字符数组末尾,这一步忘记判断了
		{

			if (str[i] >= '0' && str[i] <= '9')
			{
				number_num += 1;
			} else  if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			{
				char_num += 1;
			} else {
				other_num += 1;
			}
			i++;
		}
		//	printf("%d%d%d", char_num, number_num, other_num);

		//判断字母,数字,其他字符谁的个数多
		i = char_num >= number_num ? (char_num >= other_num ? char_num : other_num) : (number_num >= other_num ? number_num : other_num);

		//这一段实现打印
		index_empty = 0;
		while (i >= 0)
		{
			//打印字母
			if (i == char_num)
			{
				printf("%d", char_num);
//				index_empty++;
			} else if (i < char_num)
			{
				printf("*****");
				index_empty += 5;
			}

			while (index_empty < 7)		//补充空格
			{
				printf(" ");
				index_empty++;		//当空格位置到7时停止打印空格
			}

			//打印数字
			if (i == number_num)
			{
				printf("%d", number_num);
//				index_empty++;		
			} else if (i < number_num)
			{
				printf("*****");
				index_empty += 5;
			}

			while (index_empty < 14)
			{
				printf(" ");
				index_empty++;		//当空格位置到14时停止打印空格
			}
			//打印其他字符
			if (i == other_num)
			{
				printf("%d", other_num);
//				index_empty++;		
			} else if (i < other_num)
			{
				printf("*****");
				index_empty += 5;		//
			}
			printf("\n");
			i--;
			index_empty = 0;
		}


		//这一段打印下标
		index_empty = 0;
		while (index_empty <= 14)
		{
			if (index_empty == 0)
			{
				printf(" alp");
				index_empty += 4;
			}
			while (index_empty < 7)
			{
				printf(" ");
				index_empty++;
			}
			if (index_empty == 7)
			{
				printf(" num");
				index_empty += 4;
			}
			while (index_empty <14)
			{
				printf(" ");
				index_empty++;
			}
			if (index_empty == 14)
			{
				printf(" oth");
				index_empty ++;
			}
		}
		printf("\n");
	}
}
	
