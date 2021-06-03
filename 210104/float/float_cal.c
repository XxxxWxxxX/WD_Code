#include <stdio.h>
#include <stdlib.h>

// 计算得出单精度浮点精度,查看浮点数在内存中存储
void main()
{
	float a,b;
	a=123456.789e5;					//float 精度6~7位,可能会丢失7位之后的数据
	b=a+20;
	printf("the b is %f\n",b);		//float输出%f,%1.f
	system("pause");
}