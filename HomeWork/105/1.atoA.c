#include <stdio.h>
#include <stdlib.h>

//1.�Ӽ����������ַ�����Сд��ĸת���ɴ�д��ĸ�����롰ctl + z�� ���� 
//Сд97~122,��д65~90,���32

void main()
{
	char little, upper;
	while (rewind(stdin), scanf("%c", &little) != EOF)
	{
		//˼·һ:ʹ��switch,���ڼ򵥸���
		//switch (little)
		//{
		//case 97: printf("is A\n");
		//	break;
		//}

		//˼·��:����,��д��Сд���32
		if (little >= 97 && little <= 122)
		{
			upper = little - 32;
			printf("is %c\n", upper);
		}else {
			printf("�Ƿ��ַ�,������Сд��ĸ\n");
		}
	}
	system("pause");
}