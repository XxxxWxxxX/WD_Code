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
		//整数右移判1不适于负数
		test_bit=1;
		//整型32位
		move_times=0;
		num_one=0;
		while(move_times<int_size)
		{
#ifdef DEBUG
			printf("%d\n",num_d&test_bit);
#else
#endif
			if((num_d&test_bit)==test_bit)//少括号会出错的
				num_one++;
			test_bit=test_bit<<1;
			move_times++;
		}

		printf("%d\n",num_one);
	}
}