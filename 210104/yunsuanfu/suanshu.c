#include <stdio.h>
#include <stdlib.h>

// �鿴���������
void main()
{
	int i,j,b;
	i=123456;
	j= i%10;							// %ȡ��(ȡģ)

	b = i / 10;							// /ȡ��
	printf("the j is %d b=%d\n ",j,b);
	system("pause");
}