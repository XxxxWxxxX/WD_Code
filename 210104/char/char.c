#include <stdio.h>
#include <stdlib.h>

//���acsii ���� \n \r ���ַ�(0=="\0")

void main()
{
	char c;
	//c=56;
	//c='a'- 32;
	//c='\12';											//\ddd �˽���  printf("\12") 12�˽���תʮ������10,���з�
	c='\x41';											//\xhh ʮ������

	printf("the char is %c\n",c);		// \n����ˢ�»�����

	//printf("123\b4\n");					//\b�˸�,�ص���ǰ��β,����\b4,�滻ǰ�ߵ�(3)��ֵ
				
	//printf("123\r4\n");					// \r�س�,�ص���ǰ����,����\r4,�滻ǰ��(1)����ֵ
	system("pause");
}