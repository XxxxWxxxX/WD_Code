#include <stdio.h>
#include <stdlib.h>

//�������,�·�,��������ж�����

//��������
int runnian(int year)
{
	if ((year % 4 == 0 &&  year % 100 != 0) || (year % 400 == 0)) {
		return (1);
	}else {
		return (0);
	}
}

void main()
{
	int year, month;

	while (rewind(stdin), scanf("%d%d", &year, &month)) {
		switch (month) {
		case 1: printf("%d��,31��\n", month);
			break;
		case 2:printf("%d��,%d��\n", month,28+runnian(year)); //����29��
			break;
		case 3: printf("%d��,31��\n", month);
			break;
		case 4:printf("%d��,30��\n", month);
			break;
		case 5: printf("%d��,31��\n", month);
			break;
		case 6:printf("%d��,30��\n", month);
			break;
		case 7: printf("%d��,31��\n", month);
			break;
		case 8:printf("%d��,31��\n", month);
			break;
		case 9: printf("%d��,30��\n", month);
			break;
		case 10:printf("%d��,31��\n", month);
			break;
		case 11: printf("%d��,30��\n", month);
			break;
		case 12:printf("%d��,31��\n", month);
			break;
		default:printf("��������\n");			//�������ʽΪ��,����Ҫbreak;
		}
	}
}