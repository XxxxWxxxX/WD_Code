#include <stdio.h>
#include <stdlib.h>

#define MAX 100

//2.�Ӽ����������ַ�
//(1���ֱ�ͳ��һ��������ĸ�����֣������ַ��ĸ��� 
//(2����ͳ�Ƶ���ĸ�����֣������ַ��ĸ�������״ͼ����ʽ��ӡ

void main()
{
	char str[MAX] = { 0 };
	int char_num, number_num, other_num;
	int i;
	int index_empty;

	//�������ַ������ַ�������,��ͳ�Ƹ�������
	while (rewind(stdin), gets(str) != NULL)
	{
		i = 0; char_num = 0; number_num = 0; other_num = 0;
		while (str[i] != '\0')		//ѭ���ж��Ƿ��ַ�����ĩβ,��һ�������ж���
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

		//�ж���ĸ,����,�����ַ�˭�ĸ�����
		i = char_num >= number_num ? (char_num >= other_num ? char_num : other_num) : (number_num >= other_num ? number_num : other_num);

		//��һ��ʵ�ִ�ӡ
		index_empty = 0;
		while (i >= 0)
		{
			//��ӡ��ĸ
			if (i == char_num)
			{
				printf("%d", char_num);
//				index_empty++;
			} else if (i < char_num)
			{
				printf("*****");
				index_empty += 5;
			}

			while (index_empty < 7)		//����ո�
			{
				printf(" ");
				index_empty++;		//���ո�λ�õ�7ʱֹͣ��ӡ�ո�
			}

			//��ӡ����
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
				index_empty++;		//���ո�λ�õ�14ʱֹͣ��ӡ�ո�
			}
			//��ӡ�����ַ�
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


		//��һ�δ�ӡ�±�
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
	
