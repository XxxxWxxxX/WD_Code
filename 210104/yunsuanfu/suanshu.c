#include <stdio.h>
#include <stdlib.h>

// 查看算术运算符
void main()
{
	int i,j,b;
	i=123456;
	j= i%10;							// %取余(取模)

	b = i / 10;							// /取整
	printf("the j is %d b=%d\n ",j,b);
	system("pause");
}