#include"head.h"
#define max 100

void count_diff_char()
{
	int char_num=0,integer_num=0,else_num=0;
	char str[max];
	int index;
	int index_p;
	while(fflush(stdin),gets(str)!=NULL)
	{
		index=0,char_num=0,integer_num=0,else_num=0;
		while(str[index]!='\0')
		{
			if(str[index]>='a'&&str[index]<='z')
				char_num++;
			else if(str[index]>='0'&&str[index]<='9')
				integer_num++;
			else
				else_num++;
			index++;
		}
		//打印结果
		index=char_num>=integer_num? (char_num>=else_num? char_num:else_num):(integer_num>=else_num? integer_num:else_num);
		index_p=0;
		while(index>=0)
		{
			if(index==char_num)
			{
				printf("%d",char_num);
				index_p++;
			}
			else if(index<char_num)
			{
				printf("*****");
				index_p+=5;
			}
			while(index_p<7)
			{
				printf(" ");
				index_p++;
			}
			if(index==integer_num)
			{
				printf("%d",integer_num);
				index_p++;
			}
			else if(index<integer_num)
			{
				printf("*****");
				index_p+=5;
			}
			while(index_p<14)
			{
				printf(" ");
				index_p++;
			}
			if(index==else_num)
			{
				printf("%d",else_num);
				index_p++;
			}
			else if(index<else_num)
			{
				printf("*****");
				index_p+=5;
			}
			printf("\n");
			index--;
			index_p=0;
		}
		//打印下标
		index_p=0;
		while(index_p<=14)
		{
			if(index_p==0)
			{
				printf("alp");
				index_p+=3;
			}
			else if(index_p==7)
			{
				printf("num");
				index_p+=3;
			}
			else if(index_p==14)
			{
				printf("oth");
				index_p+=3;
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
