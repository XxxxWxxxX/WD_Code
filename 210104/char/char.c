#include <stdio.h>
#include <stdlib.h>

//理解acsii 例如 \n \r 空字符(0=="\0")

void main()
{
	char c;
	//c=56;
	//c='a'- 32;
	//c='\12';											//\ddd 八进制  printf("\12") 12八进制转十进制是10,换行符
	c='\x41';											//\xhh 十六进制

	printf("the char is %c\n",c);		// \n可以刷新缓冲区

	//printf("123\b4\n");					//\b退格,回到当前行尾,并用\b4,替换前边的(3)数值
				
	//printf("123\r4\n");					// \r回车,回到当前行首,并用\r4,替换前边(1)的数值
	system("pause");
}