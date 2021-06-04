#include <stdio.h>
#include <stdlib.h>

//判断是否是闰年 测试数1000,2000 ,-1000
//能被4整除,但是不能被100整除
//能被4整除,又能被400整除

void main()
{
	int year;
	while (rewind(stdin), scanf("%d", &year))			//循环判断逻辑:1.先循环2.再判断
	{
		if (year>0){
			if ((year%4==0 && year%100 !=0) || (year%400 ==0) ) {
				printf("%d是闰年\n", year);
			}else {
				printf("%d不是闰年\n", year);
			}
		}else {
			printf("输入数字不合法\n");
		}
	}
}