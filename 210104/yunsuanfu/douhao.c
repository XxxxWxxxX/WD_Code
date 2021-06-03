#include <stdio.h>
#include <stdlib.h>

//逗号运算符

void main()
{
	int a,b,c;
	a=0;
	b=1;
	c=4;
	if(a=b+c,a<b)		//先执行a = b + c,再执行a < b,逗号运算符最终是后边的表达式值;
	{
		printf("a小于b\n");
	}else{
		printf("a大于b\n");
	}
	system("pause");
}