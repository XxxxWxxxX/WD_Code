#include  <stdio.h>
#include  <stdlib.h>

//scanf�����ַ����ַ���  
//���λ򸡵��� %d%d %f%f �����м� �����пո�

void main()
{
	char c1,c2,c3;
	char d1[10],d2[10],d3[10];
	int a;
	
	//int b, c, d;
	//printf("������������\n");
	//scanf("%d %d %d", &b, &c, &d);
	//printf("b=%d,c=%d,d=%d\n", b, c, d);

	//scanf("%c %c %c",&c1,&c2,&c3);
	//printf("c1= %c c2=%c c3=%c\n",c1,c2,c3);

	//scanf("%s %s %s",d1,d2,d3);
	//scanf("%s,%s,%s",d1,d2,d3);		//%sֻ��ƥ��ո�,����ƥ�䶺��(����Ҳ���ַ���),�ַ�����
	//printf("d1=%s,d2=%s,d3=%s\n",d1,d2,d3);

	//fflush(stdin) ˢ�»����� ��׼�������������stdin /stdout
	// EOF scanf()û�ж�ȡ��ƥ���ֵ����-1
	while(fflush(stdin),scanf("%d",&a)  != EOF)																									//�����е�����,Ϊʲôˢ�»�����������������?ctrl+z��������?
	{
		printf("the a is %d\n",a);		// \n ˢ�����������,����	
	}
	system("pause");
}