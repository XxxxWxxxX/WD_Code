#include <stdio.h>
#include <stdlib.h>

//���
void main()
{
	short a, b;		
	a = 32767;					//short�����ͷ�Χ -32768~32767
	b = a + 1;
	printf("a = %d,b = %d \n", a, b);

	system("pause");
}