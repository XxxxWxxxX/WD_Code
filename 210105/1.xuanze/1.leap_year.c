#include <stdio.h>
#include <stdlib.h>

//�ж��Ƿ������� ������1000,2000 ,-1000
//�ܱ�4����,���ǲ��ܱ�100����
//�ܱ�4����,���ܱ�400����

void main()
{
	int year;
	while (rewind(stdin), scanf("%d", &year))			//ѭ���ж��߼�:1.��ѭ��2.���ж�
	{
		if (year>0){
			if ((year%4==0 && year%100 !=0) || (year%400 ==0) ) {
				printf("%d������\n", year);
			}else {
				printf("%d��������\n", year);
			}
		}else {
			printf("�������ֲ��Ϸ�\n");
		}
	}
}