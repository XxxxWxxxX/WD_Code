#include <stdio.h>
#include <stdlib.h>

//for��ȫ�������while
void main()
{
	int i, sum;
	sum = 0;
	i = 1;		//for���while,�ȳ�ʼ��ʡ�Ա��ʽֵi=1;
	//for��ȫ��
	//for (i = 1; i <= 100; i++)
	//{
	//	sum += i;
	//}

	//for���while,�ȳ�ʼ��ʡ�Ա��ʽֵi=1;
	//for (; i <= 100;)
	//{
	//	sum += i;
	//	i++;
	//}

	//for���ʽ�����ȫʡ��,��ҪǶ��һ���ж������ʵ�ֱ��ʽ2�Ĺ���,�˳�ʹ��break(ֻ������ѭ���˳�)
	for (;;)
	{
		if (i <= 100)
		{
			sum += i;
			i++;
		}else {
			break;
		}
	}

	printf("sum is %d\n", sum);
	system("pause");
}