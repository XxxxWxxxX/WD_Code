#include <stdio.h>
#include <stdlib.h>

//1.从键盘上输入字符，将小写字母转换成大写字母。输入“ctl + z” 结束 
//小写97~122,大写65~90,相差32

void main()
{
	char little, upper;
	while (rewind(stdin), scanf("%c", &little) != EOF)
	{
		//思路一:使用switch,过于简单复杂
		//switch (little)
		//{
		//case 97: printf("is A\n");
		//	break;
		//}

		//思路二:做差,大写与小写相差32
		if (little >= 97 && little <= 122)
		{
			upper = little - 32;
			printf("is %c\n", upper);
		}else {
			printf("非法字符,请输入小写字母\n");
		}
	}
	system("pause");
}