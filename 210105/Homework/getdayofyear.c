#include <stdio.h>
#include <stdlib.h>

//1.�����ǵڼ���,��,��,��
int runnian(int year);
int countday(int year, int mon, int day);

void main()
{
	int year, mon, day;

	//����������
	while (rewind(stdin), scanf("%d%d%d", &year, &mon, &day) != EOF)
	{
		printf("��ǰ�ǵ�%d��\n", countday(year, mon, day));
	}
}

//�����Ƿ�������
int runnian(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))   //������
	{
		return (1);
	}else {
		return(0);
	}
}

//���㵱���ǵڼ���ĺ���
int countday(int year, int mon, int day)
{
	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };		//������Ƕ���
	int i, total;
	total = 0;

	for (i = 0;i < mon-1; i++)		//<mon-1 ,������<= !!!
	{
			if (i == 1)			//�����߼��е����� ������������29�� ����û������forѭ���жϳ���
			{		
				a[i] =a[i]+ runnian(year);
			}
			total = total+a[i];
	}
	total =total + day;
	return (total) ;
}

