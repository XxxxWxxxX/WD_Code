#include <stdio.h>
#include <stdlib.h>

// ����ó������ȸ��㾫��,�鿴���������ڴ��д洢
void main()
{
	float a,b;
	a=123456.789e5;					//float ����6~7λ,���ܻᶪʧ7λ֮�������
	b=a+20;
	printf("the b is %f\n",b);		//float���%f,%1.f
	system("pause");
}