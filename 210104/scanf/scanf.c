#include <stdio.h>
#include <stdlib.h>

//scanfÊäÈë×Ö·û¼°×Ö·û´®

void main()
{
	char c1,c2,c3;
	char d1[10],d2[10],d3[10];
	int a;
	//scanf("%c %c %c",&c1,&c2,&c3);
	//scanf("%s %s %s",d1,d2,d3);
	//printf("c1= %c c2=%c c3=%c\n",c1,c2,c3);
	//printf("d1=%s,d2=%s,d3=%s\n",d1,d2,d3);
	while(fflush(stdin),scanf("%d",&a) != EOF )
	{
		printf("the a is %d\n",a);
	}

	system("pause");
}