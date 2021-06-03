#include  <stdio.h>
#include  <stdlib.h>

//scanf输入字符及字符串  
//整形或浮点型 %d%d %f%f 紧挨中间 可以有空格

void main()
{
	char c1,c2,c3;
	char d1[10],d2[10],d3[10];
	int a;
	
	//int b, c, d;
	//printf("输入三个整数\n");
	//scanf("%d %d %d", &b, &c, &d);
	//printf("b=%d,c=%d,d=%d\n", b, c, d);

	//scanf("%c %c %c",&c1,&c2,&c3);
	//printf("c1= %c c2=%c c3=%c\n",c1,c2,c3);

	//scanf("%s %s %s",d1,d2,d3);
	//scanf("%s,%s,%s",d1,d2,d3);		//%s只能匹配空格,不能匹配逗号(逗号也是字符串),字符可以
	//printf("d1=%s,d2=%s,d3=%s\n",d1,d2,d3);

	//fflush(stdin) 刷新缓存区 标准输入输出缓存区stdin /stdout
	// EOF scanf()没有读取到匹配的值返回-1
	while(fflush(stdin),scanf("%d",&a)  != EOF)																									//这里有点问题,为什么刷新缓存区函数不起作用?ctrl+z输入三次?
	{
		printf("the a is %d\n",a);		// \n 刷新输出缓冲区,阻塞	
	}
	system("pause");
}