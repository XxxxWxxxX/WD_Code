#include <stdio.h>
#include <stdlib.h>

//���������
void main()
{
	int a,b,c,max1;
	//printf("�������������֣�\n");
	//scanf("%d%d",&a,&b);
	printf("�������������֣�\n");
	scanf("%d%d%d",&a,&b,&c);
	max1=a>b ? (a >c ? a :c ) : (b >c ? b :c);
	printf("the max1 value is %d\n",max1);
	system("pause");
}