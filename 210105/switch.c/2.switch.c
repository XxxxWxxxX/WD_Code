#include <stdio.h>
#include <stdlib.h>

//输入年份,月份,输出该月有多少天

//计算闰年
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
		case 1: printf("%d月,31天\n", month);
			break;
		case 2:printf("%d月,%d天\n", month,28+runnian(year)); //闰年29天
			break;
		case 3: printf("%d月,31天\n", month);
			break;
		case 4:printf("%d月,30天\n", month);
			break;
		case 5: printf("%d月,31天\n", month);
			break;
		case 6:printf("%d月,30天\n", month);
			break;
		case 7: printf("%d月,31天\n", month);
			break;
		case 8:printf("%d月,31天\n", month);
			break;
		case 9: printf("%d月,30天\n", month);
			break;
		case 10:printf("%d月,31天\n", month);
			break;
		case 11: printf("%d月,30天\n", month);
			break;
		case 12:printf("%d月,31天\n", month);
			break;
		default:printf("输入有误\n");			//常量表达式为空,不需要break;
		}
	}
}