#include"head.h"
#define max 100

void main()
{
	int char_num=0,integer_num=0,else_num=0;  //�ַ�,����,�����ַ�
	char str[max];		//�洢�ַ����ַ�����
	int index;
	int index_p;

	//gets �ĳ�gets_s,gets()�����뻺���ж�ȡһ��,����strָ����ַ���,�����û����ַ������ȥ,�����ǻس�
	while(rewind(stdin),gets_s(str) != NULL)			
	{
		index = 0,char_num  = 0,integer_num = 0,else_num = 0;

		while(str[index]!='\0')  //�����ַ������ж����ַ�,����,��������
		{
			if(str[index] >= 'a' && str[index] <= 'z')
				char_num++;
			else if(str[index] >= '0' && str[index] <= '9')
				integer_num++;
			else
				else_num++;
			index++;
		}

		//(�ж��ַ���������˭��)?(����ַ��������ַ�):(��������������ַ�);�����ĸ,����,�����ַ��и�������
		//��ϵ�����(<>)���ȼ�>��Ŀ���������( ? :) >��ֵ�����(=)
		index = char_num >= integer_num ?  (char_num>=else_num? char_num:else_num) : (integer_num>=else_num ? integer_num:else_num);

		//��ӡ���
		//index�洢���������ַ����� 5 3 2 
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

			printf("\n");			//�س�
			index--;
			index_p = 0;
		}

		//��ӡ�±�
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
