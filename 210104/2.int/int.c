#include <stdio.h>
#include <stdlib.h>

//Òç³ö
void main()
{
	short a, b;		
	a = 32767;					//short¶ÌÕûĞÍ·¶Î§ -32768~32767
	b = a + 1;
	printf("a = %d,b = %d \n", a, b);

	system("pause");
}