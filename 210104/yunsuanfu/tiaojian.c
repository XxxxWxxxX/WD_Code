#include <stdio.h>
#include <stdlib.h>

//条件运算符
void main()
{
	int a,b,c,max1;
	//printf("请输入两个数字：\n");
	//scanf("%d%d",&a,&b);
	printf("请输入三个数字：\n");
	scanf("%d%d%d",&a,&b,&c);
	max1=a>b ? (a >c ? a :c ) : (b >c ? b :c);
	printf("the max1 value is %d\n",max1);
	system("pause");
}