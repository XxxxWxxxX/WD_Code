#include"head.h"
//#define DEBUG 1

void count_bit_one()
{
	int num_d;
	int num_one=0;
	int test_bit=1;
	int int_size=sizeof(int)*8;
	int move_times=1;
	while(fflush(stdin),scanf("%d",&num_d)!=EOF)
	{
		//����������1�����ڸ���
		test_bit=1;
		//����32λ
		move_times=0;
		num_one=0;
		while(move_times<int_size)
		{
#ifdef DEBUG
			printf("%d\n",num_d&test_bit);
#else
#endif
			if((num_d&test_bit)==test_bit)//�����Ż�����
				num_one++;
			test_bit=test_bit<<1;
			move_times++;
		}

		printf("%d\n",num_one);
	}
}