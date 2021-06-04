#include"head.h"
#define max 30

//考虑负数
void change10_2()//32位对齐
{
	int num;
	char temp[max];
	int k=0;
	int contral;
	while(fflush(stdin),scanf("%d",&num)!=EOF)
	{
		k=0;
		while(num>0)
		{
			if(num%2)
				temp[k++]='1';//输出顺序
			else
				temp[k++]='0';
			num/=2;
		}
		while(k<32)
			temp[k++]='0';

		contral=1;
		while(k--)
		{
			printf("%c",temp[k]);
			if(contral==4)
			{
				printf(" ");
				contral=0;
			}
			contral++;
		}
		printf("\n");
	}
}

//没考虑负数
void change2_10()
{
	char bit[max];
	int i,target_num;
	while(fflush(stdin),gets(bit)!=NULL)
	{
		i=0;
		target_num=0;
		while(bit[i]!='\0')
		{
			target_num=(target_num<<1)+(bit[i]-'0');
			i++;
		}
		printf("%d\n",target_num);
	}
}

void change10_16()
{
	int num;
	char target[max],k;
	int remainder;
	int contral;
	while(fflush(stdin),scanf("%d",&num)!=EOF)//加上8位对齐
	{
		k=0;
		while(num>0)
		{
			remainder=num%16;
			if(remainder<10)
				target[k++]=remainder+'0';
			else
				target[k++]=remainder-10+'A';
			num/=16;
		}
		while(k<8)
			target[k++]='0';
		//输出
		printf("0x");
		contral=1;
		while(k--)
		{
			printf("%c",target[k]);
			if(contral==2)
			{
				printf(" ");
				contral=0;
			}
			contral++;
		}
		printf("\n");
	}
}

void change16_10()
{
	char Xpress[max];
	int target_num;
	int index;
	while(fflush(stdin),gets(Xpress)!=NULL)
	{
		index=0;
		target_num=0;
		if(Xpress[1]=='x')//处理0x
			index=2;
		
		while(Xpress[index]!='\0')
		{
			if(Xpress[index]<='9'&&Xpress[index]>='0')
				target_num=(target_num<<4)+(Xpress[index]-'0');
			else if(Xpress[index]>='A'&&Xpress[index]<='F')
				target_num=(target_num<<4)+(Xpress[index]-'A'+10);//处理大小写
			else if(Xpress[index]>='a'&&Xpress[index]<='z')
				target_num=(target_num<<4)+(Xpress[index]-'a'+10);
			else
			{
				printf("格式错误\n");//可以加上
				exit(-1);
			}
			index++;
		}
		printf("%d\n",target_num);
	}
}