#include"head.h"
#define max 100

void main()
{
	int char_num=0,integer_num=0,else_num=0;  //字符,数字,其他字符
	char str[max];		//存储字符的字符数组
	int index;
	int index_p;

	//gets 改成gets_s,gets()从输入缓存中读取一行,存在str指向的字符串,所有敲击的字符都算进去,结束是回车
	while(rewind(stdin),gets_s(str) != NULL)			
	{
		index = 0,char_num  = 0,integer_num = 0,else_num = 0;

		while(str[index]!='\0')  //计算字符串中有多少字符,数字,其他符号
		{
			if(str[index] >= 'a' && str[index] <= 'z')
				char_num++;
			else if(str[index] >= '0' && str[index] <= '9')
				integer_num++;
			else
				else_num++;
			index++;
		}

		//(判断字符数和整数谁大)?(输出字符或其他字符):(输出整数或其他字符);输出字母,整数,其他字符中个数最大的
		//关系运算符(<>)优先级>三目条件运算符( ? :) >赋值运算符(=)
		index = char_num >= integer_num ?  (char_num>=else_num? char_num:else_num) : (integer_num>=else_num ? integer_num:else_num);

		//打印结果
		//index存储个数最多的字符数据 5 3 2 
		index_p=0;
		while(index >= 0)
		{
			if(index == char_num)  //5==5
			{
				printf("%d",char_num);//5
				index_p++;//
			}
			else if(index < char_num)//4 <5
			{
				printf("*****");
				index_p += 5;
			}

			while(index_p < 7)
			{
				printf(" ");
				index_p++;
			}

			if(index == integer_num)//3
			{
				printf("%d",integer_num);
				index_p++;
			}
			else if(index < integer_num)
			{
				printf("*****");
				index_p+=5;
			}

			while(index_p < 14)
			{
				printf(" ");
				index_p++;
			}
			if(index == else_num)//2
			{
				printf("%d",else_num);
				index_p++;
			}
			else if(index < else_num)
			{
				printf("*****");
				index_p+=5;
			}

			printf("\n");			//回车
			index--;
			index_p = 0;
		}

		//打印下标
		index_p = 0;
		while(index_p <= 14)
		{
			if(index_p==0)
			{
				printf("alp");
				index_p += 3;
			}
			else if(index_p == 7)
			{
				printf("num");
				index_p += 3;
			}
			else if(index_p == 14)
			{
				printf("oth");
				index_p += 3;
			}
			else
			{
				printf(" ");
				index_p++;
			}
		}
		printf("\n");
	}
}
